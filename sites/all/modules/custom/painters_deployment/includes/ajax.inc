<?php

/**
 * @file ajax utility functions for menu callbacks
 */

/**
 * Provide callback data for quicktabs
 *
 * @param <type> $term_id
 *
 * @return <type>
 */
function _painters_ajax_quicktabs_advise($term_id = '') {
  $featured_articles = views_get_view_result('articles_overview', 'block_1');

  // get featured articles using view & use as filter parameter for tabs
  $featured_nids = array();
  foreach ($featured_articles as $row) {
    $featured_nids[] = $row->nid;
  }

  $tab_result = _painters_ajax_quicktabs_advise_tab($term_id, $featured_nids);

  return $tab_result;
}

/**
 * We have featured articles , so just normal embed.
 *
 * @param <type> $term_id
 *
 * @return string
 */
function _painters_ajax_quicktabs_advise_tab($term_id, $featured_nids) {
  $exclude_nids = implode(',', $featured_nids);
  $tab_result = '';
  if ($term_id) {
    $tab_result = views_embed_view('articles_overview', 'default', 0, $term_id);
  }
  else {
    // featured + all articles. Exclude previous featured articles
    $tab_result = views_embed_view('articles_overview', 'block_1') . views_embed_view('articles_overview', 'default', $exclude_nids);
  }
  return $tab_result;
}

/**
 * quicktabs page advise page
 *
 * @return string
 */
function _painters_advice_quicktabs_page() {
  drupal_set_title(painters_utils_get_label('new_articles_tabs_page_heading'));
  $block = module_invoke('quicktabs', 'block_view', 'advise_tabs');
  return render($block['content']);
}

