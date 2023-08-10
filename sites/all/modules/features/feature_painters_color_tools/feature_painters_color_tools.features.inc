<?php

/**
 * @file
 * feature_painters_color_tools.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_painters_color_tools_ctools_plugin_api($module = NULL, $api = NULL) {
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
function feature_painters_color_tools_views_api($module = NULL, $api = NULL) {
  return array(
    "api" => "3.0"
  );
}

/**
 * Implements hook_node_info().
 */
function feature_painters_color_tools_node_info() {
  $items = array(
    'color_tools' => array(
      'name' => t('Color Tools'),
      'base' => 'node_content',
      'description' => t('Used to Manage Color Tools'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => ''
    )
  );
  drupal_alter('node_info', $items);
  return $items;
}
