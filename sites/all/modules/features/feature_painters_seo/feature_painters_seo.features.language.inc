<?php

/**
 * @file
 * feature_painters_seo.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function feature_painters_seo_locale_default_languages() {
  $languages = array();

  // Exported language: en.
  $languages ['en'] = array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'en',
    'weight' => 0
  );
  // Exported language: gpp.
  $languages ['gpp'] = array(
    'language' => 'gpp',
    'name' => 'GPP',
    'native' => 'GPP',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'gpp',
    'weight' => 0
  );
  return $languages;
}
