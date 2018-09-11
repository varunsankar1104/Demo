<?php

/**
 * @file
 * feature_painters_color_tools.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_painters_color_tools_strongarm() {
  $export = array();

  $strongarm = new stdClass ();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_color_tools';
  $strongarm->value = 0;
  $export ['comment_anonymous_color_tools'] = $strongarm;

  $strongarm = new stdClass ();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_color_tools';
  $strongarm->value = '1';
  $export ['comment_color_tools'] = $strongarm;

  $strongarm = new stdClass ();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_color_tools';
  $strongarm->value = 1;
  $export ['comment_default_mode_color_tools'] = $strongarm;

  $strongarm = new stdClass ();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_color_tools';
  $strongarm->value = '50';
  $export ['comment_default_per_page_color_tools'] = $strongarm;

  $strongarm = new stdClass ();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_color_tools';
  $strongarm->value = 1;
  $export ['comment_form_location_color_tools'] = $strongarm;

  $strongarm = new stdClass ();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_color_tools';
  $strongarm->value = '1';
  $export ['comment_preview_color_tools'] = $strongarm;

  $strongarm = new stdClass ();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_color_tools';
  $strongarm->value = 1;
  $export ['comment_subject_field_color_tools'] = $strongarm;

  $strongarm = new stdClass ();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__color_tools';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'path' => array(
          'weight' => '1'
        ),
        'redirect' => array(
          'weight' => '2'
        ),
        'language' => array(
          'weight' => '0'
        ),
        'metatags' => array(
          'weight' => '3'
        )
      ),
      'display' => array()
    )
  );
  $export ['field_bundle_settings_node__color_tools'] = $strongarm;

  $strongarm = new stdClass ();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_color_tools';
  $strongarm->value = '4';
  $export ['language_content_type_color_tools'] = $strongarm;

  $strongarm = new stdClass ();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_color_tools';
  $strongarm->value = array(
    0 => 'main-menu'
  );
  $export ['menu_options_color_tools'] = $strongarm;

  $strongarm = new stdClass ();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_color_tools';
  $strongarm->value = 'main-menu:0';
  $export ['menu_parent_color_tools'] = $strongarm;

  $strongarm = new stdClass ();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_color_tools';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision'
  );
  $export ['node_options_color_tools'] = $strongarm;

  $strongarm = new stdClass ();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_color_tools';
  $strongarm->value = '1';
  $export ['node_preview_color_tools'] = $strongarm;

  $strongarm = new stdClass ();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_color_tools';
  $strongarm->value = 0;
  $export ['node_submitted_color_tools'] = $strongarm;

  $strongarm = new stdClass ();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_color_tools';
  $strongarm->value = 'draft';
  $export ['workbench_moderation_default_state_color_tools'] = $strongarm;

  return $export;
}
