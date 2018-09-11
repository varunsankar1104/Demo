<?php

/**
 * @file
 * feature_footer_brand_icons.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_footer_brand_icons_views_default_views() {
  $export = array();

  $view = new view ();
  $view->name = 'footer_brand_icons';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Footer Brand icons';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options ['title'] = 'Footer Brand icons';
  $handler->display->display_options ['use_more_always'] = FALSE;
  $handler->display->display_options ['access'] ['type'] = 'perm';
  $handler->display->display_options ['cache'] ['type'] = 'time';
  $handler->display->display_options ['cache'] ['results_lifespan'] = '21600';
  $handler->display->display_options ['cache'] ['results_lifespan_custom'] = '0';
  $handler->display->display_options ['cache'] ['output_lifespan'] = '21600';
  $handler->display->display_options ['cache'] ['output_lifespan_custom'] = '0';
  $handler->display->display_options ['query'] ['type'] = 'views_query';
  $handler->display->display_options ['query'] ['options'] ['distinct'] = TRUE;
  $handler->display->display_options ['exposed_form'] ['type'] = 'basic';
  $handler->display->display_options ['pager'] ['type'] = 'some';
  $handler->display->display_options ['pager'] ['options'] ['items_per_page'] = '5';
  $handler->display->display_options ['style_plugin'] = 'default';
  $handler->display->display_options ['row_plugin'] = 'fields';
  /* Field: Content: Brand Logo */
  $handler->display->display_options ['fields'] ['field_brand_logo'] ['id'] = 'field_brand_logo';
  $handler->display->display_options ['fields'] ['field_brand_logo'] ['table'] = 'field_data_field_brand_logo';
  $handler->display->display_options ['fields'] ['field_brand_logo'] ['field'] = 'field_brand_logo';
  $handler->display->display_options ['fields'] ['field_brand_logo'] ['label'] = '';
  $handler->display->display_options ['fields'] ['field_brand_logo'] ['element_label_colon'] = FALSE;
  $handler->display->display_options ['fields'] ['field_brand_logo'] ['click_sort_column'] = 'fid';
  $handler->display->display_options ['fields'] ['field_brand_logo'] ['settings'] = array(
    'image_style' => '',
    'image_link' => ''
  );
  /* Field: Content: Title */
  $handler->display->display_options ['fields'] ['title'] ['id'] = 'title';
  $handler->display->display_options ['fields'] ['title'] ['table'] = 'node';
  $handler->display->display_options ['fields'] ['title'] ['field'] = 'title';
  $handler->display->display_options ['fields'] ['title'] ['label'] = '';
  $handler->display->display_options ['fields'] ['title'] ['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options ['fields'] ['nid'] ['id'] = 'nid';
  $handler->display->display_options ['fields'] ['nid'] ['table'] = 'node';
  $handler->display->display_options ['fields'] ['nid'] ['field'] = 'nid';
  $handler->display->display_options ['fields'] ['nid'] ['label'] = '';
  $handler->display->display_options ['fields'] ['nid'] ['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options ['fields'] ['path'] ['id'] = 'path';
  $handler->display->display_options ['fields'] ['path'] ['table'] = 'node';
  $handler->display->display_options ['fields'] ['path'] ['field'] = 'path';
  $handler->display->display_options ['fields'] ['path'] ['label'] = '';
  $handler->display->display_options ['fields'] ['path'] ['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Lead brand (field_lead_brand) */
  $handler->display->display_options ['sorts'] ['field_lead_brand_value'] ['id'] = 'field_lead_brand_value';
  $handler->display->display_options ['sorts'] ['field_lead_brand_value'] ['table'] = 'field_data_field_lead_brand';
  $handler->display->display_options ['sorts'] ['field_lead_brand_value'] ['field'] = 'field_lead_brand_value';
  $handler->display->display_options ['sorts'] ['field_lead_brand_value'] ['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options ['sorts'] ['created'] ['id'] = 'created';
  $handler->display->display_options ['sorts'] ['created'] ['table'] = 'node';
  $handler->display->display_options ['sorts'] ['created'] ['field'] = 'created';
  $handler->display->display_options ['sorts'] ['created'] ['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options ['filters'] ['status'] ['id'] = 'status';
  $handler->display->display_options ['filters'] ['status'] ['table'] = 'node';
  $handler->display->display_options ['filters'] ['status'] ['field'] = 'status';
  $handler->display->display_options ['filters'] ['status'] ['value'] = 1;
  $handler->display->display_options ['filters'] ['status'] ['group'] = 1;
  $handler->display->display_options ['filters'] ['status'] ['expose'] ['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options ['filters'] ['type'] ['id'] = 'type';
  $handler->display->display_options ['filters'] ['type'] ['table'] = 'node';
  $handler->display->display_options ['filters'] ['type'] ['field'] = 'type';
  $handler->display->display_options ['filters'] ['type'] ['value'] = array(
    'brand' => 'brand'
  );

  /* Display: Footer Brand icons block */
  $handler = $view->new_display('block', 'Footer Brand icons block', 'block');

  /* Display: Brand pages submenu block */
  $handler = $view->new_display('block', 'Brand pages submenu block', 'block_1');
  $handler->display->display_options ['defaults'] ['title'] = FALSE;
  $handler->display->display_options ['title'] = 'Brand pages submenu';
  $translatables ['footer_brand_icons'] = array(
    t('Master'),
    t('Footer Brand icons'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Footer Brand icons block'),
    t('Brand pages submenu block'),
    t('Brand pages submenu')
  );
  $export ['footer_brand_icons'] = $view;

  return $export;
}
