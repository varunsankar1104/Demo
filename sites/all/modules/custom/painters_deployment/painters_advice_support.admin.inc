<?php

/**
 *
 * @Function for the New articles blocks
 */
function painters_articles_new_block() {
  $build['new_article_search'] = drupal_get_form('new_article_search');
  $build['new_article_add'] = drupal_get_form('new_article_add');
  $build['new_article_list'] = drupal_get_form('new_article_list');
  return $build;
}

/**
 * Function for new article block section
 *
 * @param unknown $form
 * @param unknown $form_state
 *
 * @return multitype:string The
 */
function new_article_search($form, &$form_state) {
  $form['new_article_search_title'] = array(
    '#type' => 'item',
    '#markup' => t('Admin page to add articles for new block'),
  );
  $form['new_article_search'] = array(
    '#type' => 'fieldset',
    '#title' => t('Select Article'),
  );
  $form['new_article_search']['article_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Article title'),
    '#autocomplete_path' => 'article-new-content/autocomplete',
  );
  $form['new_article_search']['article_search_submit'] = array(
    '#type' => 'submit',
    '#value' => t('Search'),
  );
  return $form;
}

/**
 * Submit handler for artciles block search
 *
 * @param unknown $form
 * @param unknown $form_state
 */
function new_article_search_submit($form, $form_state) {
  session_cache_set('article_title', NULL);
  $article_detail = isset($form_state['values']['article_title']) ? $form_state['values']['article_title'] : '';
  $article_detail = explode('|', $article_detail);
  session_cache_set('article_title', $article_detail[1]);
}

/**
 * Function to Filter and add the article contet
 *
 * @param unknown $form
 * @param unknown $form_state
 *
 * @return unknown
 */
function new_article_add($form, &$form_state) {
  $options = array();
  $header = array(
    'title' => t("Articles"),
  );
  if ((session_cache_get('article_title'))) {
    $article_nid = session_cache_get('article_title');
    $args = array(
      $article_nid,
    );
    $view = views_get_view('article_new_block');
    $view->set_display('page');
    $view->set_arguments($args);
    $view->execute();
    foreach ($view->result as $key => $value) {
      $article_content[$value->_field_data['nid']['entity']->nid] = $value->_field_data['nid']['entity']->title;
    }
    foreach ($article_content as $nid => $title) {
      $options[$nid] = array(
        'title' => $title,
      );
    }
  }
  $form['table'] = array(
    '#type' => 'tableselect',
    '#header' => $header,
    '#options' => $options,
    '#empty' => t('No Articles found'),
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Add articles'),
    '#submit' => array(
      'new_article_add_submit',
    ),
  );
  return $form;
}

/**
 * Funtion to handle the submit for the new article block
 *
 * @param unknown $form
 * @param unknown $form_state
 */
function new_article_add_submit($form, $form_state) {
  $article_nids = variable_get('new_article_block');
  if (empty($article_nids)) {
    $article_nids = array();
  }
  foreach ($form_state['values']['table'] as $nid => $value) {
    if ($value) {
      $articleID = $value;
    }
  }
  if (!empty($article_nids)) {
    array_push($article_nids, $articleID);
  }
  else {
    $article_nids = array(
      $articleID,
    );
  }
  variable_set('new_article_block', $article_nids);
}

/**
 * Function to handle the Re-order of article
 *
 * @param unknown $form
 * @param unknown $form_state
 */
function new_article_list($form, &$form_state) {
  $article_nids = variable_get('new_article_block');
  $article_nids = implode(',', $article_nids);
  $article_details = array();
  $article_data = array();
  if (!empty($article_nids)) {
    $args = array(
      $article_nids,
    );
    $view = views_get_view('article_new_block');
    $view->set_display('page_1');
    $view->set_arguments($args);
    $view->execute();
    if (!empty($view->result)) {
      $article_details = $view->result;
    }
  }
  return _buid_new_article_list($form, $form_state, $article_details);
}

/**
 * Function to theme the new articles block
 *
 * @param unknown $variables
 */
function theme_new_article_list($variables) {
  return _theme_new_article_list($variables);
}

/**
 * Function to build the re-oder form
 *
 * @param unknown $form
 * @param unknown $form_state
 * @param unknown $articles_ids
 *
 * @return multitype:string The multitype:string
 */
function _buid_new_article_list($form, &$form_state, $article_ids) {
  $form['#tree'] = TRUE;
  if (count($article_ids) > 0) {
    foreach ($article_ids as $key => $article) {
      $form['new_article'][$article->nid]['node'] = array(
        '#type' => 'item',
        '#markup' => check_plain($article->node_title),
      );

      $edit_link = l(t('Edit'), 'node/' . $article->nid . '/edit', array(
          'attributes' => array(
            'target' => '_blank',
          ),
        ));
      $form['new_article'][$article->nid]['edit'] = array(
        '#type' => 'item',
        '#markup' => $edit_link,
      );
      // This field is invisible, but contains sort info (weights).
      $form['new_article'][$article->nid]['weight'] = array(
        '#type' => 'weight',
        '#title' => t('Weight'),
        '#title_display' => 'invisible',
        '#default_value' => $article->nid,
      );
      $delete_link = l(t('Delete'), 'admin/config/painters/delete-block-variable/' . $article->nid . '/new_article_block');
      $form['new_article'][$article->nid]['delete'] = array(
        '#type' => 'item',
        '#markup' => $delete_link,
      );
      $article_sorted_nids[] = $article->nid;
    }
    variable_set('new_article_block', $article_sorted_nids);
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
      '#submit' => array(
        'new_article_list_submit',
      ),
    );
    $push_to_live = l(t('Push the re-ordered nodes to live server'), 'deploy-variable-authoring-server/' . 'new_article_block/' . 'nids');
    $form['push_to_live'] = array(
      '#type' => 'item',
      '#markup' => $push_to_live,
    );
  }
  else {
    drupal_set_message(t('No Articles Found.'));
  }
  return $form;
}

/**
 * Function to theme the articles re-order
 *
 * @param unknown $variables
 *
 * @return Ambigous <string, A>|string
 */
function _theme_new_article_list($variables) {
  $form = $variables['form'];
  $rows = array();

  if (count($form['new_article']) > 0) {
    foreach (element_children($form['new_article']) as $nid) {
      $form['new_article'][$nid]['weight']['#attributes']['class'] = array(
        'slides-order-weight',
      );
      $rows[] = array(
        'data' => array(
          array(
            'class' => array(
              'slide-cross',
            ),
          ),
          drupal_render($form['new_article'][$nid]['node']),
          drupal_render($form['new_article'][$nid]['edit']),
          drupal_render($form['new_article'][$nid]['weight']),
          drupal_render($form['new_article'][$nid]['delete']),
        ),
        'class' => array(
          'draggable',
        ),
      );
    }

    $header = array(
      t(''),
      t('Article Title'),
      t('Edit'),
      t('Order Weight'),
      t('Delete'),
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
 * Function for submit hanlder for the new article block
 *
 * @param unknown $form
 * @param unknown $form_state
 */
function new_article_list_submit($form, &$form_state) {
  $new_articles = array();
  foreach ($form_state['values']['new_article'] as $nid => $articles) {
    if ($nid) {
      $new_articles[] = array(
        'nid' => $nid,
        'weight' => $articles['weight'],
      );
    }
  }
  if (!empty($new_articles)) {
    foreach ($new_articles as $article) {
      if ($node = node_load($article['nid'])) {
        $key_order = key($node->field_order_weight);
        $node->field_order_weight[$key_order][0]['value'] = $article['weight'];
        node_save($node);
      }
    }
    drupal_set_message(t('Articles sorting order has been saved.'));
  }
}

/**
 * Function to return the matching keyword for artcile content type
 *
 * @return multitype:The NULL
 */
function article_search_options($string) {
  $results = array();
  $query = db_select('node', 'n');
  $query->join('field_data_field_advice_support_pillers', 'cat', 'cat.entity_id=n.nid');
  $query->condition('n.status', '1', '=');
  $query->condition('n.type', 'painters_article', '=');
  $query->condition('n.title', '%' . db_like($string) . '%', 'LIKE');
  $query->fields('n', array(
      'nid',
      'title',
    ));
  $articles = $query->execute();
  foreach ($articles as $row) {
    $results[$row->title . '|' . $row->nid] = check_plain($row->title . '|' . $row->nid);
  }
  drupal_json_output($results);
}