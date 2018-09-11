<?php

/**
 * @file
 * Module settings UI.
 */

/**
 * Google Tag Manager Settings
 *
 * @see painters_google_tag_manager_menu()
 */
function painters_google_tag_manager_admin_settings() {
  $form = array();
  $form['gtm_page_instanceid'] = array(
    '#type' => 'select',
    '#title' => t('Instance of the page'),
    '#default_value' => variable_get('gtm_page_instanceid', 'copy'),
    '#description' => t('Select the instance for the Google Tag Manager.'),
    '#options' => array(
      'dev' => t('DEV'),
      'qa' => t('QA'),
      'live' => t('LIVE'),
      'copy' => t('PROD'),
    ),
  );

  $form['gtm_functionality_version'] = array(
    '#type' => 'textfield',
    '#title' => t('Functionality Version'),
    '#default_value' => variable_get('gtm_functionality_version', 1),
    '#description' => t('Specify the Google Tag Manager functionality version.'),
    '#size' => 12,
    '#maxlength' => 10,
    '#element_validate' => array(
      'element_validate_integer',
    ),
  );

  return system_settings_form($form);
}

