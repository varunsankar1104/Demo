<?php

/**
 * Function for cutsom URL alias
 */
function painters_custom_urls_alias() {
  $form = array();
  $languages = locale_language_list('name');
  foreach ($languages as $lang => $value) {
    $form['settings']['store_detail_url_alias_' . $lang] = array(
      '#type' => 'textfield',
      '#title' => t('Enter store detail URL alias for ' . $value),
      '#default_value' => variable_get('store_detail_url_alias_' . $lang, ''),
      '#description' => t('Enter the URL alias for store detail'),
      '#size' => 60,
      '#maxlength' => 250,
      '#required' => TRUE,
    );
    $form['settings']['training_confirmation_url_alias_' . $lang] = array(
      '#type' => 'textfield',
      '#title' => t('Enter the tarining confirmation URL alias for ' . $value),
      '#default_value' => variable_get('training_confirmation_url_alias_' . $lang, ''),
      '#description' => t('Enter the URL alias for Training conofirmation'),
      '#size' => 60,
      '#maxlength' => 250,
      '#required' => TRUE,
    );
    $form['settings']['workspace_help_url_alias_' . $lang] = array(
      '#type' => 'textfield',
      '#title' => t('Enter the workspace help URL alias ' . $value),
      '#default_value' => variable_get('workspace_help_url_alias_' . $lang, ''),
      '#description' => t('Enter the URL alias for workspace help page'),
      '#size' => 60,
      '#maxlength' => 250,
      '#required' => TRUE,
    );
    $form['settings']['delet_account_success_' . $lang] = array(
      '#type' => 'textfield',
      '#title' => t('Enter the Delete account URL alias ' . $value),
      '#default_value' => variable_get('delet_account_success_' . $lang, ''),
      '#description' => t('Enter the URL alias for Delete account page'),
      '#size' => 60,
      '#maxlength' => 250,
      '#required' => TRUE,
    );
  }
  return system_settings_form($form);
}

