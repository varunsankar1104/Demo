<?php

/**
 * @file
 * feature_painters_faq.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function feature_painters_faq_defaultconfig_features() {
  return array(
    'feature_painters_faq' => array(
      'strongarm' => 'strongarm'
    )
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function feature_painters_faq_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass ();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_faq';
  $strongarm->value = 'draft';
  $export ['workbench_moderation_default_state_faq'] = $strongarm;

  return $export;
}
