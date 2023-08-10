<?php

/**
 * @file
 * feature_painters_training.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function feature_painters_training_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['bean-training-overview'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'training-overview',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'bean',
    'node_types' => array(),
    'pages' => 'training-overview',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'painters' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'painters',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['bean-training-overview-block-2'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'training-overview-block-2',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'bean',
    'node_types' => array(),
    'pages' => 'training-overview',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => -56,
      ),
      'painters' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'painters',
        'weight' => -53,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
