<?php

/**
 * @file
 * feature_painters_article_content.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_painters_article_content_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_painters_article';
  $strongarm->value = 0;
  $export['comment_anonymous_painters_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_painters_article';
  $strongarm->value = 1;
  $export['comment_default_mode_painters_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_painters_article';
  $strongarm->value = '50';
  $export['comment_default_per_page_painters_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_painters_article';
  $strongarm->value = 1;
  $export['comment_form_location_painters_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_painters_article';
  $strongarm->value = '2';
  $export['comment_painters_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_painters_article';
  $strongarm->value = '1';
  $export['comment_preview_painters_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_painters_article';
  $strongarm->value = 1;
  $export['comment_subject_field_painters_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__painters_article';
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
      'advice_and_support' => array(
        'custom_settings' => TRUE,
      ),
      'image_right' => array(
        'custom_settings' => TRUE,
      ),
      'image_top' => array(
        'custom_settings' => TRUE,
      ),
      'image_left' => array(
        'custom_settings' => TRUE,
      ),
      'landing_page_centered_block' => array(
        'custom_settings' => TRUE,
      ),
      'landing_page_image_left' => array(
        'custom_settings' => TRUE,
      ),
      'landing_page_image_right' => array(
        'custom_settings' => TRUE,
      ),
      'landing_page_top_block' => array(
        'custom_settings' => TRUE,
      ),
      'collapsible_image_sections' => array(
        'custom_settings' => TRUE,
      ),
      'planet_posible_image_top' => array(
        'custom_settings' => FALSE,
      ),
      'planet_posible_top_block' => array(
        'custom_settings' => FALSE,
      ),
      'planet_possible_top_wide_image' => array(
        'custom_settings' => FALSE,
      ),
      'article_title' => array(
        'custom_settings' => TRUE,
      ),
      'article_section_workspace' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '15',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '6',
        ),
        'redirect' => array(
          'weight' => '7',
        ),
        'language' => array(
          'weight' => '5',
        ),
        'xmlsitemap' => array(
          'weight' => '20',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__painters_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_painters_article';
  $strongarm->value = '4';
  $export['language_content_type_painters_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_painters_article';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_painters_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_painters_article';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_painters_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_painters_article';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_painters_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_painters_article';
  $strongarm->value = '1';
  $export['node_preview_painters_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_painters_article';
  $strongarm->value = 0;
  $export['node_submitted_painters_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_taxonomy_term_article_category';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'full' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'diff_standard' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'featured' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'token' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_taxonomy_term_article_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'termstatus_default_article_category';
  $strongarm->value = 1;
  $export['termstatus_default_article_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_painters_article';
  $strongarm->value = 'draft';
  $export['workbench_moderation_default_state_painters_article'] = $strongarm;

  return $export;
}
