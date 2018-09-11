<?php

/**
 * @file
 * feature_painters_faq.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_painters_faq_views_default_views() {
  $export = array();

  $view = new view ();
  $view->name = 'faq';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'FAQ';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options ['title'] = 'FAQ Category Block for Overview page';
  $handler->display->display_options ['use_more_always'] = FALSE;
  $handler->display->display_options ['access'] ['type'] = 'perm';
  $handler->display->display_options ['cache'] ['type'] = 'time';
  $handler->display->display_options ['cache'] ['results_lifespan'] = '21600';
  $handler->display->display_options ['cache'] ['results_lifespan_custom'] = '0';
  $handler->display->display_options ['cache'] ['output_lifespan'] = '21600';
  $handler->display->display_options ['cache'] ['output_lifespan_custom'] = '0';
  $handler->display->display_options ['query'] ['type'] = 'views_query';
  $handler->display->display_options ['exposed_form'] ['type'] = 'basic';
  $handler->display->display_options ['pager'] ['type'] = 'none';
  $handler->display->display_options ['style_plugin'] = 'default';
  $handler->display->display_options ['row_plugin'] = 'fields';
  /* Field: Content: Category Label */
  $handler->display->display_options ['fields'] ['field_faq_cat_label'] ['id'] = 'field_faq_cat_label';
  $handler->display->display_options ['fields'] ['field_faq_cat_label'] ['table'] = 'field_data_field_faq_cat_label';
  $handler->display->display_options ['fields'] ['field_faq_cat_label'] ['field'] = 'field_faq_cat_label';
  $handler->display->display_options ['fields'] ['field_faq_cat_label'] ['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options ['fields'] ['title'] ['id'] = 'title';
  $handler->display->display_options ['fields'] ['title'] ['table'] = 'node';
  $handler->display->display_options ['fields'] ['title'] ['field'] = 'title';
  $handler->display->display_options ['fields'] ['title'] ['label'] = '';
  $handler->display->display_options ['fields'] ['title'] ['alter'] ['alter_text'] = TRUE;
  $handler->display->display_options ['fields'] ['title'] ['alter'] ['text'] = '[field_faq_cat_label]';
  $handler->display->display_options ['fields'] ['title'] ['alter'] ['word_boundary'] = FALSE;
  $handler->display->display_options ['fields'] ['title'] ['alter'] ['ellipsis'] = FALSE;
  $handler->display->display_options ['fields'] ['title'] ['element_label_colon'] = FALSE;
  /* Field: Content: Icon CSS class */
  $handler->display->display_options ['fields'] ['field_faq_icon_css_class'] ['id'] = 'field_faq_icon_css_class';
  $handler->display->display_options ['fields'] ['field_faq_icon_css_class'] ['table'] = 'field_data_field_faq_icon_css_class';
  $handler->display->display_options ['fields'] ['field_faq_icon_css_class'] ['field'] = 'field_faq_icon_css_class';
  /* Field: Content: Short teaser */
  $handler->display->display_options ['fields'] ['field_faq_short_teaser'] ['id'] = 'field_faq_short_teaser';
  $handler->display->display_options ['fields'] ['field_faq_short_teaser'] ['table'] = 'field_data_field_faq_short_teaser';
  $handler->display->display_options ['fields'] ['field_faq_short_teaser'] ['field'] = 'field_faq_short_teaser';
  /* Sort criterion: Content: Weight (field_faq_weight) */
  $handler->display->display_options ['sorts'] ['field_faq_weight_value'] ['id'] = 'field_faq_weight_value';
  $handler->display->display_options ['sorts'] ['field_faq_weight_value'] ['table'] = 'field_data_field_faq_weight';
  $handler->display->display_options ['sorts'] ['field_faq_weight_value'] ['field'] = 'field_faq_weight_value';
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
    'faq' => 'faq'
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options ['defaults'] ['title'] = FALSE;
  $handler->display->display_options ['title'] = 'FAQ Category Block for Detail page ';
  $handler->display->display_options ['defaults'] ['fields'] = FALSE;
  /* Field: Content: Category Label */
  $handler->display->display_options ['fields'] ['field_faq_cat_label'] ['id'] = 'field_faq_cat_label';
  $handler->display->display_options ['fields'] ['field_faq_cat_label'] ['table'] = 'field_data_field_faq_cat_label';
  $handler->display->display_options ['fields'] ['field_faq_cat_label'] ['field'] = 'field_faq_cat_label';
  $handler->display->display_options ['fields'] ['field_faq_cat_label'] ['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options ['fields'] ['title'] ['id'] = 'title';
  $handler->display->display_options ['fields'] ['title'] ['table'] = 'node';
  $handler->display->display_options ['fields'] ['title'] ['field'] = 'title';
  $handler->display->display_options ['fields'] ['title'] ['label'] = '';
  $handler->display->display_options ['fields'] ['title'] ['alter'] ['alter_text'] = TRUE;
  $handler->display->display_options ['fields'] ['title'] ['alter'] ['text'] = '[field_faq_cat_label]';
  $handler->display->display_options ['fields'] ['title'] ['alter'] ['word_boundary'] = FALSE;
  $handler->display->display_options ['fields'] ['title'] ['alter'] ['ellipsis'] = FALSE;
  $handler->display->display_options ['fields'] ['title'] ['element_label_colon'] = FALSE;
  /* Field: Content: Icon CSS class */
  $handler->display->display_options ['fields'] ['field_faq_icon_css_class'] ['id'] = 'field_faq_icon_css_class';
  $handler->display->display_options ['fields'] ['field_faq_icon_css_class'] ['table'] = 'field_data_field_faq_icon_css_class';
  $handler->display->display_options ['fields'] ['field_faq_icon_css_class'] ['field'] = 'field_faq_icon_css_class';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options ['defaults'] ['title'] = FALSE;
  $translatables ['faq'] = array(
    t('Master'),
    t('FAQ Category Block for Overview page'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Category Label'),
    t('[field_faq_cat_label]'),
    t('Icon CSS class'),
    t('Short teaser'),
    t('Block'),
    t('FAQ Category Block for Detail page '),
    t('Content pane'),
    t('View panes')
  );
  $export ['faq'] = $view;

  return $export;
}
