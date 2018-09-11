<?php

/**
 * @file
 * feature_painters_faq.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_painters_faq_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array(
      "version" => "1"
    );
  }
  if ($module == "multifield" && $api == "") {
    return array(
      "version" => ""
    );
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array(
      "version" => "1"
    );
  }
}

/**
 * Implements hook_views_api().
 */
function feature_painters_faq_views_api($module = NULL, $api = NULL) {
  return array(
    "api" => "3.0"
  );
}

/**
 * Implements hook_node_info().
 */
function feature_painters_faq_node_info() {
  $items = array(
    'faq' => array(
      'name' => t('FAQ'),
      'base' => 'node_content',
      'description' => t('FAQ page has the list of categories which all lead to a page where FAQs of that specific category are listed in it.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => ''
    )
  );
  drupal_alter('node_info', $items);
  return $items;
}
