<?php
/**
 * @file
 * feature_painters_training.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_painters_training_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'training_overview';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Training overview';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Training overview';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_training_date_time_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_tr_image']['id'] = 'field_tr_image';
  $handler->display->display_options['fields']['field_tr_image']['table'] = 'field_data_field_tr_image';
  $handler->display->display_options['fields']['field_tr_image']['field'] = 'field_tr_image';
  $handler->display->display_options['fields']['field_tr_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_tr_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Location Area of the training */
  $handler->display->display_options['fields']['field_tr_location_label']['id'] = 'field_tr_location_label';
  $handler->display->display_options['fields']['field_tr_location_label']['table'] = 'field_data_field_tr_location_label';
  $handler->display->display_options['fields']['field_tr_location_label']['field'] = 'field_tr_location_label';
  $handler->display->display_options['fields']['field_tr_location_label']['label'] = 'Location Name';
  /* Field: Content: Training Date */
  $handler->display->display_options['fields']['field_training_date_time']['id'] = 'field_training_date_time';
  $handler->display->display_options['fields']['field_training_date_time']['table'] = 'field_data_field_training_date_time';
  $handler->display->display_options['fields']['field_training_date_time']['field'] = 'field_training_date_time';
  $handler->display->display_options['fields']['field_training_date_time']['label'] = 'Training Date & Time';
  $handler->display->display_options['fields']['field_training_date_time']['settings'] = array(
    'format_type' => 'painters_training_date_fromat',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_tr_description']['id'] = 'field_tr_description';
  $handler->display->display_options['fields']['field_tr_description']['table'] = 'field_data_field_tr_description';
  $handler->display->display_options['fields']['field_tr_description']['field'] = 'field_tr_description';
  $handler->display->display_options['fields']['field_tr_description']['label'] = 'Beskrivning';
  /* Field: Content: Description Label */
  $handler->display->display_options['fields']['field_tr_description_title']['id'] = 'field_tr_description_title';
  $handler->display->display_options['fields']['field_tr_description_title']['table'] = 'field_data_field_tr_description_title';
  $handler->display->display_options['fields']['field_tr_description_title']['field'] = 'field_tr_description_title';
  /* Field: Content: Register Label */
  $handler->display->display_options['fields']['field_tr_register_label']['id'] = 'field_tr_register_label';
  $handler->display->display_options['fields']['field_tr_register_label']['table'] = 'field_data_field_tr_register_label';
  $handler->display->display_options['fields']['field_tr_register_label']['field'] = 'field_tr_register_label';
  /* Field: Content: Training Time */
  $handler->display->display_options['fields']['field_training_time']['id'] = 'field_training_time';
  $handler->display->display_options['fields']['field_training_time']['table'] = 'field_data_field_training_time';
  $handler->display->display_options['fields']['field_training_time']['field'] = 'field_training_time';
  /* Field: Content: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Training Date -  start date (field_training_date_time) */
  $handler->display->display_options['sorts']['field_training_date_time_value']['id'] = 'field_training_date_time_value';
  $handler->display->display_options['sorts']['field_training_date_time_value']['table'] = 'field_data_field_training_date_time';
  $handler->display->display_options['sorts']['field_training_date_time_value']['field'] = 'field_training_date_time_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training' => 'training',
  );
  /* Filter criterion: Content: Title (title_field:language) */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $translatables['training_overview'] = array(
    t('Master'),
    t('Training overview'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Image'),
    t('Location Name'),
    t('Training Date & Time'),
    t('Beskrivning'),
    t('Description Label'),
    t('Register Label'),
    t('Training Time'),
    t('Content pane'),
    t('View panes'),
    t('Block'),
  );
  $export['training_overview'] = $view;

  return $export;
}
