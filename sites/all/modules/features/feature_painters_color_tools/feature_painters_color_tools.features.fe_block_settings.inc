<?php

/**
 * @file
 * feature_painters_color_tools.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function feature_painters_color_tools_default_fe_block_settings() {
  $export = array();

  $export ['version'] = '2.0';

  $export ['painters_color_tools-color_tools_filter'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'color_tools_filter',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'painters_color_tools',
    'node_types' => array(),
    'pages' => 'colours/tools',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0
      ),
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0
      ),
      'painters' => array(
        'region' => 'banner',
        'status' => 1,
        'theme' => 'painters',
        'weight' => 0
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0
      )
    ),
    'title' => '',
    'visibility' => 1
  );

  $export ['views-a958a5233ccdd73741b8c5693337281b'] = array(
    'cache' => - 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'a958a5233ccdd73741b8c5693337281b',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'colours/tools',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0
      ),
      'garland' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'garland',
        'weight' => 0
      ),
      'painters' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'painters',
        'weight' => 0
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0
      )
    ),
    'title' => '',
    'visibility' => 1
  );

  return $export;
}
