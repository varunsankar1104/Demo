<?php

/**
 * @file
 * feature_painters_article_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_painters_article_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "multifield" && $api == "") {
    return array("version" => "");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_painters_article_content_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_painters_article_content_node_info() {
  $items = array(
    'painters_article' => array(
      'name' => t('Painters Article'),
      'base' => 'node_content',
      'description' => t('Article content for painters project'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
