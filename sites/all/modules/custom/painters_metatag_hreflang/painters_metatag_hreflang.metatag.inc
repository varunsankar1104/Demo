<?php

/**
 * @file
 * Metatag integration for the Metatag:Hreflang module.
 */

/**
 * Implements hook_metatag_info().
 */
function painters_metatag_hreflang_metatag_info() {
  $info['groups']['hreflang'] = array(
    'label' => t('Alternative language links (HREFLANG)'),
    'description' => t('These meta tags are designed to point visitors to versions of the current page in other languages.'),
    'form' => array(
      '#weight' => 90,
    ),
  );
  // Defaults used for all fields.
  $defaults = array(
    'class' => 'DrupalHreflangMetaTag',
    'group' => 'hreflang',
    'element' => array(
      '#theme' => 'painters_metatag_hreflang',
    ),
  );
  // Added check to avoid Fatal error: Call.
  if (function_exists('country_get_list')) {
    $country_list = country_get_list();
  }
  else {
    $country_list = NULL;
  }
  $info['tags']['country_list'] = array(
    'label' => t('Country List'),
    'description' => t('Select country to add in hreflang'),
    'weight' => 10,
    'form' => array(
      '#type' => 'select',
      '#options' => $country_list,
      '#empty_option' => t('- None -'),
    ),
  ) + $defaults;
  include_once DRUPAL_ROOT . '/includes/iso.inc';
  $local_lang_list = _locale_get_predefined_list();
  $lang_list = array();
  // local_lang contain languange name in English (in key = 0) as well as it's own language (in key = 1)
  // So fetch language name in English from key = 0
  foreach ($local_lang_list as $key => $value) {
    $lang_list[$key] = $value[0];
  }

  $info['tags']['lang_list'] = array(
    'label' => t('Language code'),
    'description' => t('Select Language to add in hreflang'),
    'weight' => 11,
    'form' => array(
      '#type' => 'select',
      '#options' => $lang_list,
      '#empty_option' => t('- None -'),
    ),
  ) + $defaults;

  $info['tags']['hreflang:url'] = array(
    'label' => t('Hreflang URL'),
    'description' => t('Add URL for head link'),
    'weight' => 12,
  ) + $defaults;
  return $info;
}

