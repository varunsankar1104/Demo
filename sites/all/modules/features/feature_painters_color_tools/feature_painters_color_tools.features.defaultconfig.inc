<?php

/**
 * @file
 * feature_painters_color_tools.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function feature_painters_color_tools_defaultconfig_features() {
  return array(
    'feature_painters_color_tools' => array(
      'strongarm' => 'strongarm'
    )
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function feature_painters_color_tools_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass ();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_color_tools';
  $strongarm->value = 'draft';
  $export ['workbench_moderation_default_state_color_tools'] = $strongarm;

  return $export;
}
