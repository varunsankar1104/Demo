<?php
define('PAINTERS_ADVICE_FEATURED_ARTICLE', 2);

/**
 * Function
 *
 * @param unknown $form
 * @param unknown $form_state
 *
 * @return unknown
 */
function advice_support_overview_config_form($form, &$form_state) {
  // Products array
  $articles_data = _advice_spport_overview_articles();
  $color_collection_overview = '';
  $form['#tree'] = TRUE;
  $counter = 1;
  $module_path = drupal_get_path('module', 'painters_deployment');
  drupal_add_js($module_path . '/js/painters_admin.js');
  if ($articles_data['featured_article_count'] <= 1) {
    _save_featured_article($articles_data);
  }
  $articles_help_text = t("<b>Drag and drop the articles to specify your own custom order of articles. The order specified in this screen will reflect on the advice and support page on the website</b>");
  $form['articles_help_text'] = array(
    '#type' => 'item',
    '#markup' => $articles_help_text,
  );
  foreach ($articles_data['articles'] as $nid => $article) {
    $key = $nid;
    $order_weight = !empty($article['weight']) ? $article['weight'] : 0;
    $featured = isset($article['featured']) ? $article['featured'] : 0;
    $form['articles'][$key]['display_name'] = array(
      '#type' => 'item',
      '#markup' => $article['title'],
    );
    $form['articles'][$key]['weight'] = array(
      '#type' => 'weight',
      '#title' => t('Weight'),
      '#title_display' => 'invisible',
      '#default_value' => $order_weight,
      '#delta' => 101,
    );
    $form['articles'][$key]['featured'] = array(
      '#type' => 'checkbox',
      '#title' => t('Featured'),
      '#title_display' => 'invisible',
      '#default_value' => $featured,
      '#delta' => 102,
    );
    $advice_support_overview .= $nid . ',';
    $counter++;
  }
  $advice_support_overview = rtrim($advice_support_overview, ',');

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

  $form['article_order_submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );
  $push_to_live = l(t('Push the re-ordered nodes to live server'), 'deploy-variable-authoring-server/' . $advice_support_overview . '/advice-support-overview-sort');
  $form['push_to_live'] = array(
    '#type' => 'item',
    '#markup' => $push_to_live,
  );
  $form['#validate'] = array(
    'advice_support_overview_config_form_validate',
  );
  return $form;
}

/**
 * Theme function for the painters article form
 *
 * @param unknown $variables
 *
 * @return unknown
 */
function theme_advice_support_overview_config_form($variables) {
  $form = $variables['form'];
  $rows = array();
  if (count($form['articles']) > 0) {
    $output = drupal_render($form['articles_help_text']);
    foreach (element_children($form['articles']) as $article) {
      $form['articles'][$article]['weight']['#attributes']['class'] = array(
        'slides-order-weight',
      );
      $rows[] = array(
        'data' => array(
          array(
            'class' => array(
              'slide-cross',
            ),
          ),
          drupal_render($form['articles'][$article]['display_name']),
          drupal_render($form['articles'][$article]['weight']),
          drupal_render($form['articles'][$article]['featured']),
        ),
        'class' => array(
          'draggable',
        ),
      );
    }

    $header = array(
      t(''),
      t('Article title'),
      t('Order Weight'),
      t('Featured'),
    );
    $output .= drupal_render($form['note']);
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
}

/**
 * Add a submit handler/function to the Product listing reoder form.
 *
 * This will add a completion message to the screen when the
 * form successfully processes
 */
function advice_support_overview_config_form_validate(&$form, &$form_state) {
  form_state_values_clean($form_state);
  $article_data = $form_state['values']['articles'];
  $counter = 0;
  foreach ($form_state['values']['articles'] as $nid => $values) {
    if ($values['featured'] == 1) {
      ++$counter;
    }
  }
  if ($counter > PAINTERS_ADVICE_FEATURED_ARTICLE) {
    form_set_error('', t("Featured article can't be more than two"));
  }
}

/**
 * Add a submit handler/function to the Product listing reoder form.
 *
 * This will add a completion message to the screen when the
 * form successfully processes
 */
function advice_support_overview_config_form_submit(&$form, &$form_state) {
  form_state_values_clean($form_state);
  $article_data = $form_state['values']['articles'];
  articles_reorder_form_submit_batch($article_data);
  drupal_set_message(t('The articles Order has been saved.'));
}

/**
 * Articles re-order Batch process
 *
 * @param unknown $article_data
 */
function articles_reorder_form_submit_batch($article_data) {
  $batch = array(
    'operations' => array(),
    // runs after batch is finished
    'finished' => 'painters_articles_save_order_finished',
    'title' => t('Saving articles order'),
    'init_message' => t('Starting...'),
    'progress_message' => t('Processed @current out of @total.'),
    'error_message' => t('Order saving has encountered an error.'),
    'file' => drupal_get_path('module', 'painters_deployment') . '/painters_advice_support_overview_config.admin.inc',
  );
  $i = 1;
  // how many records to process until stop - can do query here to get max times to run
  $max = count($article_data);

  if (!empty($article_data)) {
    $count = count($article_data);
    foreach ($article_data as $nid => $article) {
      $featured = $article['featured'];
      $weight = $article['weight'];
      $batch['operations'][] = array(
        '_batch_articles_order_listing_save',
        array(
          $nid,
          $weight,
          $featured,
          $i,
          $max,
        ),
      );
      $i++;
    }
  }
  batch_set($batch);
}

/**
 * Batch operation: save order weight to each product node.
 */
function _batch_articles_order_listing_save($nid, $weight, $featured, $i, $max, &$context) {
  if ($nid) {
    $node = node_load($nid);
    $key_order = key($node->field_order_weight);
    $node->field_order_weight[$key_order][0]['value'] = $weight;
    $node->field_features_article['und'][0]['value'] = $featured;
    node_save($node);
    $context['results'][] = $node->nid . ' : ' . check_plain($node->title);
    // $context['message'] = 'Now processing ' . $i . ' - of ' . $max . ' products';
  }
}

function painters_articles_save_order_finished($success, $results, $operations) {
  if ($success) {
    // Here we could do something meaningful with the results.
    // We just display the number of nodes we processed...
    drupal_set_message(t('@count Articles  processed.', array(
          '@count' => count($results),
        )));
  }
  else {
    // An error occurred.
    // $operations contains the operations that remained unprocessed.
    $error_operation = reset($operations);
    drupal_set_message(t('An error occurred while processing @operation with arguments : @args', array(
          '@operation' => $error_operation[0],
          '@args' => print_r($error_operation[0], TRUE),
        )));
  }
}

function _save_featured_article($articles_data) {
  $count = 0;
  $articles_data = array_slice($articles_data['articles'], 0, 2, TRUE);
  foreach ($articles_data as $nid => $article) {
    $node = node_load($nid);
    $node->field_features_article['und'][0]['value'] = 1;
    node_save($node);
  }
}

