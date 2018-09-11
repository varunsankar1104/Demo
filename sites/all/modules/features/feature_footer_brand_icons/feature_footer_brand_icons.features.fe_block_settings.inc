<?php

/**
 * @file
 * feature_footer_brand_icons.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function feature_footer_brand_icons_default_fe_block_settings() {
  $export = array();

  $export ['version'] = '2.0';

  $export ['menu-menu-footer-menu'] = array(
    'cache' => - 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-footer-menu',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
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
        'region' => 'footer_bottom',
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
    'visibility' => 0
  );

  $export ['social_media_links-social-media-links'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'social-media-links',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'social_media_links',
    'node_types' => array(),
    'pages' => '',
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
        'weight' => - 51
      ),
      'painters' => array(
        'region' => 'footer_top',
        'status' => 1,
        'theme' => 'painters',
        'weight' => - 51
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0
      )
    ),
    'title' => 'Join the social channels of Sikkens',
    'visibility' => 0
  );

  $export ['views-footer_brand_icons-block'] = array(
    'cache' => - 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'footer_brand_icons-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
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
        'weight' => - 52
      ),
      'painters' => array(
        'region' => 'footer_top',
        'status' => 1,
        'theme' => 'painters',
        'weight' => - 52
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
