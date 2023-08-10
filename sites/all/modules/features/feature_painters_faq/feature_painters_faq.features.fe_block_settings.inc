<?php

/**
 * @file
 * feature_painters_faq.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function feature_painters_faq_default_fe_block_settings() {
  $export = array();

  $export ['version'] = '2.0';

  $export ['views-faq-block_1'] = array(
    'cache' => - 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'faq-block_1',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(
      0 => 'faq'
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0
      ),
      'painters' => array(
        'region' => 'banner',
        'status' => 1,
        'theme' => 'painters',
        'weight' => - 55
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0
      )
    ),
    'title' => '',
    'visibility' => 0
  );

  return $export;
}
