<?php

/**
 * @file
 * feature_painters_datasheets.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_painters_datasheets_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array(
      "version" => "1"
    );
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array(
      "version" => "1"
    );
  }
}

/**
 * Implements hook_node_info().
 */
function feature_painters_datasheets_node_info() {
  $items = array(
    'data_sheet' => array(
      'name' => t('Data sheet'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Document title'),
      'help' => ''
    )
  );
  drupal_alter('node_info', $items);
  return $items;
}
