<?php

/**
 * @file
 * feature_painters_pathauto_pattern.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_painters_pathauto_pattern_strongarm() {
  $export = array();

  $strongarm = new stdClass ();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_brand_en_pattern';
  $strongarm->value = 'brands/[node:title]';
  $export ['pathauto_node_brand_en_pattern'] = $strongarm;
  $strongarm->name = 'pathauto_reduce_ascii';
  $strongarm->value = 1;
  $export ['pathauto_reduce_ascii'] = $strongarm;

  $strongarm = new stdClass ();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_brand_pattern';
  $strongarm->value = '';
  $export ['pathauto_node_brand_pattern'] = $strongarm;
  $strongarm->name = 'pathauto_transliterate';
  $strongarm->value = 1;
  $export ['pathauto_transliterate'] = $strongarm;

  $strongarm = new stdClass ();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_color_collection_pattern';
  $strongarm->value = 'colours/collections/[node:title]';
  $export ['pathauto_node_color_collection_pattern'] = $strongarm;

  $strongarm = new stdClass ();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_color_pattern';
  $strongarm->value = 'colours/[node:title]';
  $export ['pathauto_node_color_pattern'] = $strongarm;

  $strongarm = new stdClass ();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_color_tools_en_pattern';
  $strongarm->value = 'colours/tools/[node:title]';
  $export ['pathauto_node_color_tools_en_pattern'] = $strongarm;

  $strongarm = new stdClass ();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_color_tools_pattern';
  $strongarm->value = '';
  $export ['pathauto_node_color_tools_pattern'] = $strongarm;

  $strongarm = new stdClass ();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_group_en_pattern';
  $strongarm->value = '';
  $export ['pathauto_node_group_en_pattern'] = $strongarm;

  $strongarm = new stdClass ();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_en_pattern';
  $strongarm->value = '';
  $export ['pathauto_node_page_en_pattern'] = $strongarm;

  $strongarm = new stdClass ();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_pattern';
  $strongarm->value = '';
  $export ['pathauto_node_page_pattern'] = $strongarm;

  $strongarm = new stdClass ();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_painters_article_en_pattern';
  $strongarm->value = '[node:field-article-category:parents-all:2]/[node:field-article-category:parents-all:1]/[node:field-article-category:parents-all:0]/[node:title-field]';
  $export ['pathauto_node_painters_article_en_pattern'] = $strongarm;

  $strongarm = new stdClass ();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_painters_article_pattern';
  $strongarm->value = '';
  $export ['pathauto_node_painters_article_pattern'] = $strongarm;

  $strongarm = new stdClass ();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = 'content/[node:title]';
  $export ['pathauto_node_pattern'] = $strongarm;

  $strongarm = new stdClass ();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_platform_product_en_pattern';
  $strongarm->value = 'products/[node:field-product-type]/[node:field_brand]/[node:title]';
  $export ['pathauto_node_platform_product_en_pattern'] = $strongarm;

  $strongarm = new stdClass ();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_platform_product_pattern';
  $strongarm->value = '';
  $export ['pathauto_node_platform_product_pattern'] = $strongarm;

  $strongarm = new stdClass ();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_training_pattern';
  $strongarm->value = 'advice/training/[node:title]';
  $export ['pathauto_node_training_pattern'] = $strongarm;
  $strongarm->name = 'pathauto_update_action';
  $strongarm->value = '2';
  $export ['pathauto_update_action'] = $strongarm;

  return $export;
}
