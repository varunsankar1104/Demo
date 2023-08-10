<?php

/**
 * @file
 * feature_painters_training.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_painters_training_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__training';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'featured' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'node_compare' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'advice_and_support' => array(
        'custom_settings' => FALSE,
      ),
      'image_right' => array(
        'custom_settings' => FALSE,
      ),
      'image_top' => array(
        'custom_settings' => FALSE,
      ),
      'landing_page_centered_block' => array(
        'custom_settings' => FALSE,
      ),
      'landing_page_image_left' => array(
        'custom_settings' => FALSE,
      ),
      'landing_page_image_right' => array(
        'custom_settings' => FALSE,
      ),
      'landing_page_top_block' => array(
        'custom_settings' => FALSE,
      ),
      'sub_collection_detail' => array(
        'custom_settings' => FALSE,
      ),
      'sub_collection_display_mode' => array(
        'custom_settings' => FALSE,
      ),
      'article_left_image' => array(
        'custom_settings' => FALSE,
      ),
      'article_right_image' => array(
        'custom_settings' => FALSE,
      ),
      'color_box' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '4',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '3',
        ),
        'redirect' => array(
          'weight' => '2',
        ),
        'language' => array(
          'weight' => '1',
        ),
        'locations' => array(
          'weight' => '30',
        ),
        'xmlsitemap' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__training'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_training';
  $strongarm->value = '4';
  $export['language_content_type_training'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_training';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_training'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_training';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_training'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_training';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_training'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_training';
  $strongarm->value = '1';
  $export['node_preview_training'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_training';
  $strongarm->value = 0;
  $export['node_submitted_training'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_training';
  $strongarm->value = 'draft';
  $export['workbench_moderation_default_state_training'] = $strongarm;

  return $export;
}
