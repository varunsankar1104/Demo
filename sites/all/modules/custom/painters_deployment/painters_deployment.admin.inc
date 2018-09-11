<?php

/**
 * @file
 * Content administration and module settings UI.
 */

/**
 * Consumer Site URL configuration
 *
 * @see painters_deployment_menu()
 */
function painters_deployment_consumer_site_url() {
  $form = array();
  global $base_url;

  $form['settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Painters settings'),
  );

  $form['settings']['consumer_site_url'] = array(
    '#type' => 'textfield',
    '#title' => t('Consumer Site URL'),
    '#default_value' => variable_get('consumer_site_url', ''),
    '#description' => t('Enter consumer site URL that would be displayed on the site. ' . 'If left empty, consumer site URL section of the site would be empty'),
    '#size' => 60,
    '#maxlength' => 250,
  );

  return system_settings_form($form);
}

/**
 * Search configuration form
 *
 * @see painters_deployment_menu()
 */
function painters_deployment_search_admin_settings() {
  $form = array();
  $form['settings']['painters_search_auto_suggest_limit'] = array(
    '#type' => 'textfield',
    '#title' => t('Number of search results to be displayed in Autosuggest'),
    '#default_value' => variable_get('painters_search_auto_suggest_limit', 4),
    '#description' => t('Number of search results to be displayed in Autosuggest'),
    '#size' => 60,
    '#maxlength' => 250,
    '#required' => TRUE,
  );
  return system_settings_form($form);
}

/**
 * Search configuration form configuration validations
 */
function painters_deployment_search_admin_settings_validate($form, &$form_state) {
  $search_limit_count = $form_state['values']['painters_search_auto_suggest_limit'];
  if (ctype_digit($search_limit_count) && (int) $search_limit_count > 0) {}
  else {
    form_set_error('painters_search_auto_suggest_limit', t('Enter Valid Number'));
  }
}

/**
 * Color Palette Listing configuration
 *
 * @see painters_deployment_menu()
 */
function painters_deployment_color_palette_admin_settings() {
  $form = array();
  $form['settings']['color_palette_number_per_row'] = array(
    '#type' => 'textfield',
    '#title' => t('Number of colors to be displayed per row'),
    '#default_value' => variable_get('color_palette_number_per_row', PAINTERS_COLOR_PALETTE_PER_ROW),
    '#description' => t('In color overview page, while displaying colors from main palette,' . ' this configuration decides number of colors to be dispalyed per row'),
    '#size' => 60,
    '#maxlength' => 250,
    '#required' => TRUE,
  );

  return system_settings_form($form);
}

/**
 * Color Palette Listing configuration validations
 */
function painters_deployment_color_palette_admin_settings_validate($form, &$form_state) {
  $search_row_no = $form_state['values']['color_palette_number_per_row'];
  if (ctype_digit($search_row_no) && (int) $search_row_no > 0) {}
  else {
    form_set_error('color_palette_number_per_row', t('Enter Valid Number'));
  }
}

/**
 *
 * @return <type>
 */
function painters_deployment_footer_copyright() {
  $form = array();

  $form['settings']['footer_copyright'] = array(
    '#type' => 'textfield',
    '#title' => t('footer copyright'),
    '#default_value' => painters_utils_get_label('footer_copyright'),
    '#description' => t('Enter footer copy right text.'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['settings']['footer_copyright_brand'] = array(
    '#type' => 'textfield',
    '#title' => t('footer copyright brand'),
    '#default_value' => painters_utils_get_label('footer_copyright_brand'),
    '#description' => t('Enter footer copy right brand text.'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  return system_settings_form($form);
}

/**
 *
 * @param <type> $form
 * @param <type> $form_state
 *
 * @return <type>
 */
function painters_deployment_social_channels($form, &$form_state) {
  $form['social_channel_title'] = array(
    '#type' => 'item',
    '#markup' => t('Admin page to configure the footer social channel lables.</br> Please Note: Inorder to disable any of the social channels please goto "/admin/structure/block/manage/social_media_links/social-media-links/configure".'),
  );
  $form['social_channel_primary'] = array(
    '#type' => 'fieldset',
    '#title' => t('Primary Lables'),
  );
  $form['social_channel_primary']['social_channel_fb_lable1'] = array(
    '#type' => 'textfield',
    '#title' => t('Facebook primary label'),
    '#description' => t('Enter primary label for facebook.'),
    '#default_value' => variable_get('social_channel_fb_lable1', ''),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['social_channel_primary']['social_channel_twitter_lable1'] = array(
    '#type' => 'textfield',
    '#title' => t('Twitter primary label'),
    '#description' => t('Enter primary label for twitter.'),
    '#default_value' => variable_get('social_channel_twitter_lable1', ''),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['social_channel_primary']['social_channel_youtube_lable1'] = array(
    '#type' => 'textfield',
    '#title' => t('Youtube primary label'),
    '#description' => t('Enter primary label for youtube.'),
    '#default_value' => variable_get('social_channel_youtube_lable1', ''),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['social_channel_primary']['social_channel_insta_lable1'] = array(
    '#type' => 'textfield',
    '#title' => t('Instagram primary label'),
    '#description' => t('Enter primary label for instagram.'),
    '#default_value' => variable_get('social_channel_insta_lable1', ''),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['social_channel_primary']['social_channel_google_lable1'] = array(
    '#type' => 'textfield',
    '#title' => t('Googleplus primary label'),
    '#description' => t('Enter primary label for googleplus.'),
    '#default_value' => variable_get('social_channel_google_lable1', ''),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['social_channel_primary']['social_channel_linkedin_lable1'] = array(
    '#type' => 'textfield',
    '#title' => t('LinkedIn primary label'),
    '#description' => t('Enter primary label for linkedin.'),
    '#default_value' => variable_get('social_channel_linkedin_lable1', ''),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['social_channel_primary']['social_channel_pinterest_lable1'] = array(
    '#type' => 'textfield',
    '#title' => t('Pinterest primary label'),
    '#description' => t('Enter primary label for pinterest.'),
    '#default_value' => variable_get('social_channel_pinterest_lable1', ''),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['social_channel_primary']['social_channel_vimeo_lable1'] = array(
    '#type' => 'textfield',
    '#title' => t('Vimeo primary label'),
    '#description' => t('Enter primary label for vimeo.'),
    '#default_value' => variable_get('social_channel_vimeo_lable1', ''),
    '#size' => 60,
    '#maxlength' => 250,
  );

  $form['social_channel_sec'] = array(
    '#type' => 'fieldset',
    '#title' => t('Secondary Lables'),
  );
  $form['social_channel_sec']['social_channel_fb_lable2'] = array(
    '#type' => 'textfield',
    '#title' => t('Facebook secondary label'),
    '#description' => t('Enter secondary label for facebook.'),
    '#default_value' => variable_get('social_channel_fb_lable2', ''),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['social_channel_sec']['social_channel_twitter_lable2'] = array(
    '#type' => 'textfield',
    '#title' => t('Twitter secondary label'),
    '#description' => t('Enter secondary label for twitter.'),
    '#default_value' => variable_get('social_channel_twitter_lable2', ''),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['social_channel_sec']['social_channel_youtube_lable2'] = array(
    '#type' => 'textfield',
    '#title' => t('Youtube secondary label'),
    '#description' => t('Enter secondary label for youtube.'),
    '#default_value' => variable_get('social_channel_youtube_lable2', ''),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['social_channel_sec']['social_channel_insta_lable2'] = array(
    '#type' => 'textfield',
    '#title' => t('Instagram secondary label'),
    '#description' => t('Enter secondary label for instagram.'),
    '#default_value' => variable_get('social_channel_insta_lable2', ''),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['social_channel_sec']['social_channel_google_lable2'] = array(
    '#type' => 'textfield',
    '#title' => t('Googleplus secondary label'),
    '#description' => t('Enter secondary label for googleplus.'),
    '#default_value' => variable_get('social_channel_google_lable2', ''),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['social_channel_sec']['social_channel_linkedin_lable2'] = array(
    '#type' => 'textfield',
    '#title' => t('LinkedIn secondary label'),
    '#description' => t('Enter secondary label for linkedin.'),
    '#default_value' => variable_get('social_channel_linkedin_lable2', ''),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['social_channel_sec']['social_channel_pinterest_lable2'] = array(
    '#type' => 'textfield',
    '#title' => t('Pinterest secondary label'),
    '#description' => t('Enter secondary label for pinterest.'),
    '#default_value' => variable_get('social_channel_pinterest_lable2', ''),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['social_channel_sec']['social_channel_vimeo_lable2'] = array(
    '#type' => 'textfield',
    '#title' => t('Vimeo secondary label'),
    '#description' => t('Enter secondary label for vimeo.'),
    '#default_value' => variable_get('social_channel_vimeo_lable2', ''),
    '#size' => 60,
    '#maxlength' => 250,
  );

  return system_settings_form($form);
}

/**
 * Implement Color collections templates suggestions form
 */
function painters_select_templates_collor_collection($form, &$form_state) {
  $form = array();

  // Prepare the selection options
  $color_selection_template_options = array(
    'big_small_boxes' => t('Big + Small boxes'),
    'big_boxes' => t('Big boxes'),
  );

  $form['color_collection_template'] = array(
    '#type' => 'select',
    '#title' => t('Select template for color collection overview page'),
    '#options' => $color_selection_template_options,
    '#default_value' => variable_get('color_collection_template', 'big_small_boxes'),
    '#description' => t('Select color collection templates'),
  );
  $form['color_tools_template'] = array(
    '#type' => 'select',
    '#title' => t('Select template for color tools overview page'),
    '#options' => $color_selection_template_options,
    '#default_value' => variable_get('color_tools_template', 'big_small_boxes'),
    '#description' => t('Select color tools templates'),
  );
  return system_settings_form($form);
}

function painters_deployment_language_setting() {
  $form = array();
  global $base_url;

  $form['settings']['language_seting'] = array(
    '#type' => 'checkbox',
    '#title' => t('Remove English from language switcher'),
    '#default_value' => variable_get('language_seting', ''),
    '#description' => t('If checked English will be removed from the Language switcher.'),
    '#size' => 60,
    '#maxlength' => 250,
  );

  return system_settings_form($form);
}

/**
 * GPP Image help link configuration form
 *
 * @see painters_deployment_menu()
 */
function painters_deployment_image_help_admin_settings() {
  $form = array();
  $form['settings']['image_help_text'] = array(
    '#type' => 'textfield',
    '#title' => t('Image Help text'),
    '#default_value' => variable_get('image_help_text'),
    '#description' => t('Provide the text for information of Image help text'),
    '#size' => 60,
    '#maxlength' => 250,
    '#required' => TRUE,
  );
  $form['settings']['image_help_link'] = array(
    '#type' => 'textfield',
    '#title' => t('Image Help link'),
    '#default_value' => variable_get('image_help_link'),
    '#description' => t('Provide the link for information of Image dimension'),
    '#size' => 60,
    '#maxlength' => 250,
    '#required' => TRUE,
  );
  return system_settings_form($form);
}

/**
 * Configure Show/hide settings for market specific
 *
 * @see painters_deployment_menu()
 */
function painters_show_hide_settings() {
  $form = array();
  $form['settings']['hide_prod_doc_type'] = array(
    '#type' => 'checkbox',
    '#title' => t('Hide Product Document Type'),
    '#default_value' => variable_get('hide_prod_doc_type', ''),
    '#description' => t('If checked product document type will not be shown in the product detail page.'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['settings']['hide_workspace_cta_button'] = array(
    '#type' => 'checkbox',
    '#title' => t('Hide Workspace Landing Page CTA Button'),
    '#default_value' => variable_get('hide_workspace_cta_button', ''),
    '#description' => t('If checked hide workspace CTA button on my workspace landing page.'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['settings']['enable_prod_hse_info'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable Product HSE information'),
    '#default_value' => variable_get('enable_prod_hse_info', ''),
    '#description' => t('If checked enable product HSE information in the product detail page..'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['settings']['hide_prod_detail_default_collection'] = array(
    '#type' => 'textfield',
    '#title' => t('Hide Default Collection from Product Detail Page'),
    '#default_value' => variable_get('hide_prod_detail_default_collection', ''),
    '#description' => t('If CCID is entered hide default color collection from product detail page'),
    '#size' => 60,
    '#maxlength' => 250,
  );

  return system_settings_form($form);
}
