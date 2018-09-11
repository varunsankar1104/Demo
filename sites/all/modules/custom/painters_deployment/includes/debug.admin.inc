<?php

/**
 * @file debug settings for painters
 */
/*
 * Menu page call back implementation for the shopping list labels creation
 */

/**
 *
 * @param <type> $form
 * @param <type> $form_state
 *
 * @return <type>
 */
function painters_debug_admin_setting($form, &$form_state) {
  $form['settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Painters debug mode settings'),
  );
  $form['settings']['painters_debug_mode_enable'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable debug mode?'),
    '#default_value' => variable_get('painters_debug_mode_enable', FALSE),
    '#description' => t('Check if want to pass debug flag for site.'),
  );
  return system_settings_form($form);
}

