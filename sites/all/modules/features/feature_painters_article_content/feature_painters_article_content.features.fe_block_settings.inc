<?php

/**
 * @file
 * feature_painters_article_content.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function feature_painters_article_content_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['painters_deployment-article_new_block'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'article_new_block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'painters_deployment',
    'node_types' => array(),
    'pages' => 'rad/advice-and-support-overview
advise-and-support-overview
advise-and-support-work
advise-and-support-business
advise-and-support-clients
advice/knowledge/work
advice/knowledge/clients
advice/knowledge/business',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'garland' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'painters' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'painters',
        'weight' => -45,
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

  $export['painters_deployment-article_new_block_all_advice'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'article_new_block_all_advice',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'painters_deployment',
    'node_types' => array(),
    'pages' => '',
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
    'visibility' => 0,
  );

  $export['views-advice_support_category-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'advice_support_category-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'advise-and-support-overview',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'garland' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'garland',
        'weight' => -53,
      ),
      'painters' => array(
        'region' => 'content',
        'status' => 1,
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

  $export['views-advice_support_category-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'advice_support_category-block_1',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'advise-and-support-work
advise-and-support-clients
advise-and-support-business
advice/knowledge/work
advice/knowledge/business
advice/knowledge/clients',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'garland' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'painters' => array(
        'region' => 'banner',
        'status' => 1,
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

  return $export;
}
