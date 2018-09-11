<?php

/**
 * @file
 * Content administration and module settings UI.
 */

/**
 * Consumer Site URL configuration
 * Implemets hook_form().
 *
 * @see painters_color_tools_menu()
 */
function painters_color_tools_listing_form($form, &$form_state) {
  $get_color_tool = db_query("SELECT n.title, n.nid, n.language, w.field_ct_order_weight_value  weight
                                   FROM {node} n
                                   LEFT JOIN {field_data_field_ct_order_weight} w ON n.nid = w.entity_id AND (w.entity_type = 'node' AND w.deleted = '0')
                                   WHERE n.status = '1' AND n.type IN  ('color_tools')
                                   ORDER BY w.field_ct_order_weight_value ASC ")->fetchAll();
  $form['#tree'] = TRUE;
  $color_tools_overview = '';
  if (count($get_color_tool) > 0) {
    foreach ($get_color_tool as $color_tool) {
      if (!empty($color_tool->nid)) {
        // $node = node_load($color_collection->nid);
        $form['color_tool'][$color_tool->nid]['node'] = array(
          '#type' => 'item',
          '#markup' => check_plain($color_tool->title),
        );

        $edit_link = l(t('Edit'), 'node/' . $color_tool->nid . '/edit', array(
            'attributes' => array(
              'target' => '_blank',
            ),
          ));
        $form['color_tool'][$color_tool->nid]['edit'] = array(
          '#type' => 'item',
          '#markup' => $edit_link,
        );
        // This field is invisible, but contains sort info (weights).
        $form['color_tool'][$color_tool->nid]['weight'] = array(
          '#type' => 'weight',
          '#title' => t('Weight'),
          '#title_display' => 'invisible',
          '#default_value' => $color_tool->weight,
        );
        $color_tools_overview .= $color_tool->nid . ',';
      }
    }
    $color_tools_overview = rtrim($color_tools_overview, ',');
    // jQuery to implement remove feature. Setting the text field to empty
    // and submitting the form will remove the rows.
    $js = <<<EOD
(function ($) {
  $(function() {
    $('a.remove-row').click(function() {
      $(this).closest('tr').fadeOut(function() {
        $(this).find('input.form-autocomplete').val('')
          .closest('form').submit();
      });
    });;
  });
})(jQuery);
EOD;
    drupal_add_js($js, array(
        'type' => 'inline',
      ));

    $form['submit'] = array(
      '#type' => 'submit',
      '#value' => t('Save'),
    );
    $push_to_live = l(t('Push the re-ordered nodes to live server'), 'deploy-variable-authoring-server/' . $color_tools_overview . '/color-tools-sort');
    $form['push_to_live'] = array(
      '#type' => 'item',
      '#markup' => $push_to_live,
    );
  }
  else {
    drupal_set_message(t('No Color Tools Found.'));
  }
  return $form;
}

// Theme function for painters_color_tools_listing_form().
function theme_painters_color_tools_listing_form($variables) {
  $form = $variables['form'];
  $rows = array();

  if (count($form['color_tool']) > 0) {
    foreach (element_children($form['color_tool']) as $nid) {
      $form['color_tool'][$nid]['weight']['#attributes']['class'] = array(
        'slides-order-weight',
      );
      $rows[] = array(
        'data' => array(
          array(
            'class' => array(
              'slide-cross',
            ),
          ),
          drupal_render($form['color_tool'][$nid]['node']),
          drupal_render($form['color_tool'][$nid]['edit']),
          drupal_render($form['color_tool'][$nid]['weight']),
        ),
        'class' => array(
          'draggable',
        ),
      );
    }

    $header = array(
      t(''),
      t('Color Tool Title'),
      t('Edit'),
      t('Order Weight'),
    );
    $output = drupal_render($form['note']);
    $output .= theme('table', array(
        'header' => $header,
        'rows' => $rows,
        'attributes' => array(
          'id' => 'slides-order',
        ),
      ));
    $output .= drupal_render_children($form);

    drupal_add_tabledrag('slides-order', 'order', 'sibling', 'slides-order-weight');

    return $output;
  }
  else {
    // return t('No Color Collections Found.');
    return '';
  }
}

/**
 * Saving Color Tools Listing Order
 */
function painters_color_tools_listing_form_submit($form, &$form_state) {
  $color_tools = array();
  foreach ($form_state['values']['color_tool'] as $nid => $color_tool) {
    if ($nid) {
      $color_tools[] = array(
        'nid' => $nid,
        'weight' => $color_tool['weight'],
      );
    }
  }
  if (!empty($color_tools)) {
    foreach ($color_tools as $tool) {
      if ($node = node_load($tool['nid'])) {
        $key_order = key($node->field_ct_order_weight);
        $node->field_ct_order_weight[$key_order][0]['value'] = $tool['weight'];
        node_save($node);
      }
    }
    drupal_set_message(t('Color tool sorting order has been saved.'));
  }
}

