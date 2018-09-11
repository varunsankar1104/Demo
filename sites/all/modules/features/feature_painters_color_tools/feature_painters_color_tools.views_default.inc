<?php

/**
 * @file
 * feature_painters_color_tools.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_painters_color_tools_views_default_views() {
  $export = array();

  $view = new view ();
  $view->name = 'color_tools_overview';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Color Tools Overview';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options ['title'] = 'The colour tools of the trade';
  $handler->display->display_options ['use_ajax'] = TRUE;
  $handler->display->display_options ['use_more_always'] = FALSE;
  $handler->display->display_options ['access'] ['type'] = 'perm';
  $handler->display->display_options ['cache'] ['type'] = 'time';
  $handler->display->display_options ['cache'] ['results_lifespan'] = '21600';
  $handler->display->display_options ['cache'] ['results_lifespan_custom'] = '0';
  $handler->display->display_options ['cache'] ['output_lifespan'] = '21600';
  $handler->display->display_options ['cache'] ['output_lifespan_custom'] = '0';
  $handler->display->display_options ['query'] ['type'] = 'views_query';
  $handler->display->display_options ['query'] ['options'] ['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options ['exposed_form'] ['type'] = 'basic';
  $handler->display->display_options ['exposed_form'] ['options'] ['expose_sort_order'] = FALSE;
  $handler->display->display_options ['exposed_form'] ['options'] ['autosubmit'] = TRUE;
  $handler->display->display_options ['pager'] ['type'] = 'none';
  $handler->display->display_options ['pager'] ['options'] ['offset'] = '0';
  $handler->display->display_options ['style_plugin'] = 'default';
  $handler->display->display_options ['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options ['empty'] ['area'] ['id'] = 'area';
  $handler->display->display_options ['empty'] ['area'] ['table'] = 'views';
  $handler->display->display_options ['empty'] ['area'] ['field'] = 'area';
  $handler->display->display_options ['empty'] ['area'] ['empty'] = TRUE;
  $handler->display->display_options ['empty'] ['area'] ['content'] = '';
  $handler->display->display_options ['empty'] ['area'] ['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options ['fields'] ['title'] ['id'] = 'title';
  $handler->display->display_options ['fields'] ['title'] ['table'] = 'node';
  $handler->display->display_options ['fields'] ['title'] ['field'] = 'title';
  $handler->display->display_options ['fields'] ['title'] ['label'] = '';
  $handler->display->display_options ['fields'] ['title'] ['alter'] ['word_boundary'] = FALSE;
  $handler->display->display_options ['fields'] ['title'] ['alter'] ['ellipsis'] = FALSE;
  /* Field: Content: Call To Action */
  $handler->display->display_options ['fields'] ['field_call_to_action_details'] ['id'] = 'field_call_to_action_details';
  $handler->display->display_options ['fields'] ['field_call_to_action_details'] ['table'] = 'field_data_field_call_to_action_details';
  $handler->display->display_options ['fields'] ['field_call_to_action_details'] ['field'] = 'field_call_to_action_details';
  $handler->display->display_options ['fields'] ['field_call_to_action_details'] ['label'] = '';
  $handler->display->display_options ['fields'] ['field_call_to_action_details'] ['element_label_colon'] = FALSE;
  /* Field: Content: Hero Image */
  $handler->display->display_options ['fields'] ['field_ct_hero_image'] ['id'] = 'field_ct_hero_image';
  $handler->display->display_options ['fields'] ['field_ct_hero_image'] ['table'] = 'field_data_field_ct_hero_image';
  $handler->display->display_options ['fields'] ['field_ct_hero_image'] ['field'] = 'field_ct_hero_image';
  $handler->display->display_options ['fields'] ['field_ct_hero_image'] ['label'] = '';
  $handler->display->display_options ['fields'] ['field_ct_hero_image'] ['element_label_colon'] = FALSE;
  $handler->display->display_options ['fields'] ['field_ct_hero_image'] ['click_sort_column'] = 'fid';
  $handler->display->display_options ['fields'] ['field_ct_hero_image'] ['settings'] = array(
    'image_style' => '',
    'image_link' => ''
  );
  /* Field: Content: Short teaser */
  $handler->display->display_options ['fields'] ['field_ct_short_teaser'] ['id'] = 'field_ct_short_teaser';
  $handler->display->display_options ['fields'] ['field_ct_short_teaser'] ['table'] = 'field_data_field_ct_short_teaser';
  $handler->display->display_options ['fields'] ['field_ct_short_teaser'] ['field'] = 'field_ct_short_teaser';
  $handler->display->display_options ['fields'] ['field_ct_short_teaser'] ['label'] = '';
  $handler->display->display_options ['fields'] ['field_ct_short_teaser'] ['alter'] ['max_length'] = '300';
  $handler->display->display_options ['fields'] ['field_ct_short_teaser'] ['alter'] ['trim'] = TRUE;
  $handler->display->display_options ['fields'] ['field_ct_short_teaser'] ['element_label_colon'] = FALSE;
  $handler->display->display_options ['fields'] ['field_ct_short_teaser'] ['settings'] = array(
    'trim_length' => '20'
  );
  /* Field: Content: 3rd party link */
  $handler->display->display_options ['fields'] ['field_3_rd_party_link'] ['id'] = 'field_3_rd_party_link';
  $handler->display->display_options ['fields'] ['field_3_rd_party_link'] ['table'] = 'field_data_field_3_rd_party_link';
  $handler->display->display_options ['fields'] ['field_3_rd_party_link'] ['field'] = 'field_3_rd_party_link';
  $handler->display->display_options ['fields'] ['field_3_rd_party_link'] ['label'] = '';
  $handler->display->display_options ['fields'] ['field_3_rd_party_link'] ['element_label_colon'] = FALSE;
  $handler->display->display_options ['fields'] ['field_3_rd_party_link'] ['click_sort_column'] = 'url';
  /* Field: Content: Color details page label */
  $handler->display->display_options ['fields'] ['field_color_details_page_label'] ['id'] = 'field_color_details_page_label';
  $handler->display->display_options ['fields'] ['field_color_details_page_label'] ['table'] = 'field_data_field_color_details_page_label';
  $handler->display->display_options ['fields'] ['field_color_details_page_label'] ['field'] = 'field_color_details_page_label';
  $handler->display->display_options ['fields'] ['field_color_details_page_label'] ['label'] = '';
  $handler->display->display_options ['fields'] ['field_color_details_page_label'] ['element_label_colon'] = FALSE;
  /* Field: Content: Download link */
  $handler->display->display_options ['fields'] ['field_download_link'] ['id'] = 'field_download_link';
  $handler->display->display_options ['fields'] ['field_download_link'] ['table'] = 'field_data_field_download_link';
  $handler->display->display_options ['fields'] ['field_download_link'] ['field'] = 'field_download_link';
  $handler->display->display_options ['fields'] ['field_download_link'] ['label'] = '';
  $handler->display->display_options ['fields'] ['field_download_link'] ['element_label_colon'] = FALSE;
  $handler->display->display_options ['fields'] ['field_download_link'] ['click_sort_column'] = 'url';
  /* Sort criterion: Content: Order Weight (field_ct_order_weight) */
  $handler->display->display_options ['sorts'] ['field_ct_order_weight_value'] ['id'] = 'field_ct_order_weight_value';
  $handler->display->display_options ['sorts'] ['field_ct_order_weight_value'] ['table'] = 'field_data_field_ct_order_weight';
  $handler->display->display_options ['sorts'] ['field_ct_order_weight_value'] ['field'] = 'field_ct_order_weight_value';
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
    'color_tools' => 'color_tools'
  );
  /* Filter criterion: Content: Target Audience (field_ct_target_audience) */
  $handler->display->display_options ['filters'] ['field_ct_target_audience_tid'] ['id'] = 'field_ct_target_audience_tid';
  $handler->display->display_options ['filters'] ['field_ct_target_audience_tid'] ['table'] = 'field_data_field_ct_target_audience';
  $handler->display->display_options ['filters'] ['field_ct_target_audience_tid'] ['field'] = 'field_ct_target_audience_tid';
  $handler->display->display_options ['filters'] ['field_ct_target_audience_tid'] ['exposed'] = TRUE;
  $handler->display->display_options ['filters'] ['field_ct_target_audience_tid'] ['expose'] ['operator_id'] = 'field_ct_target_audience_tid_op';
  $handler->display->display_options ['filters'] ['field_ct_target_audience_tid'] ['expose'] ['label'] = 'Show me';
  $handler->display->display_options ['filters'] ['field_ct_target_audience_tid'] ['expose'] ['operator'] = 'field_ct_target_audience_tid_op';
  $handler->display->display_options ['filters'] ['field_ct_target_audience_tid'] ['expose'] ['identifier'] = 'field_ct_target_audience_tid';
  $handler->display->display_options ['filters'] ['field_ct_target_audience_tid'] ['expose'] ['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    4 => 0
  );
  $handler->display->display_options ['filters'] ['field_ct_target_audience_tid'] ['type'] = 'select';
  $handler->display->display_options ['filters'] ['field_ct_target_audience_tid'] ['vocabulary'] = 'color_tools_audience_';

  /* Display: Color Tools */
  $handler = $view->new_display('page', 'Color Tools', 'color_tools_list');
  $handler->display->display_options ['exposed_block'] = TRUE;
  $handler->display->display_options ['defaults'] ['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options ['fields'] ['title'] ['id'] = 'title';
  $handler->display->display_options ['fields'] ['title'] ['table'] = 'node';
  $handler->display->display_options ['fields'] ['title'] ['field'] = 'title';
  $handler->display->display_options ['fields'] ['title'] ['label'] = '';
  $handler->display->display_options ['fields'] ['title'] ['alter'] ['word_boundary'] = FALSE;
  $handler->display->display_options ['fields'] ['title'] ['alter'] ['ellipsis'] = FALSE;
  /* Field: Content: Call To Action */
  $handler->display->display_options ['fields'] ['field_call_to_action_details'] ['id'] = 'field_call_to_action_details';
  $handler->display->display_options ['fields'] ['field_call_to_action_details'] ['table'] = 'field_data_field_call_to_action_details';
  $handler->display->display_options ['fields'] ['field_call_to_action_details'] ['field'] = 'field_call_to_action_details';
  $handler->display->display_options ['fields'] ['field_call_to_action_details'] ['label'] = '';
  $handler->display->display_options ['fields'] ['field_call_to_action_details'] ['element_label_colon'] = FALSE;
  /* Field: Content: Hero Image */
  $handler->display->display_options ['fields'] ['field_ct_hero_image'] ['id'] = 'field_ct_hero_image';
  $handler->display->display_options ['fields'] ['field_ct_hero_image'] ['table'] = 'field_data_field_ct_hero_image';
  $handler->display->display_options ['fields'] ['field_ct_hero_image'] ['field'] = 'field_ct_hero_image';
  $handler->display->display_options ['fields'] ['field_ct_hero_image'] ['label'] = '';
  $handler->display->display_options ['fields'] ['field_ct_hero_image'] ['element_label_colon'] = FALSE;
  $handler->display->display_options ['fields'] ['field_ct_hero_image'] ['click_sort_column'] = 'fid';
  $handler->display->display_options ['fields'] ['field_ct_hero_image'] ['settings'] = array(
    'image_style' => 'color_tool_hero_image',
    'image_link' => ''
  );
  /* Field: Content: Short teaser */
  $handler->display->display_options ['fields'] ['field_ct_short_teaser'] ['id'] = 'field_ct_short_teaser';
  $handler->display->display_options ['fields'] ['field_ct_short_teaser'] ['table'] = 'field_data_field_ct_short_teaser';
  $handler->display->display_options ['fields'] ['field_ct_short_teaser'] ['field'] = 'field_ct_short_teaser';
  $handler->display->display_options ['fields'] ['field_ct_short_teaser'] ['label'] = '';
  $handler->display->display_options ['fields'] ['field_ct_short_teaser'] ['alter'] ['max_length'] = '300';
  $handler->display->display_options ['fields'] ['field_ct_short_teaser'] ['alter'] ['trim'] = TRUE;
  $handler->display->display_options ['fields'] ['field_ct_short_teaser'] ['element_label_colon'] = FALSE;
  $handler->display->display_options ['fields'] ['field_ct_short_teaser'] ['settings'] = array(
    'trim_length' => '20'
  );
  /* Field: Content: 3rd party link */
  $handler->display->display_options ['fields'] ['field_3_rd_party_link'] ['id'] = 'field_3_rd_party_link';
  $handler->display->display_options ['fields'] ['field_3_rd_party_link'] ['table'] = 'field_data_field_3_rd_party_link';
  $handler->display->display_options ['fields'] ['field_3_rd_party_link'] ['field'] = 'field_3_rd_party_link';
  $handler->display->display_options ['fields'] ['field_3_rd_party_link'] ['label'] = '';
  $handler->display->display_options ['fields'] ['field_3_rd_party_link'] ['element_label_colon'] = FALSE;
  $handler->display->display_options ['fields'] ['field_3_rd_party_link'] ['click_sort_column'] = 'url';
  /* Field: Content: Color details page label */
  $handler->display->display_options ['fields'] ['field_color_details_page_label'] ['id'] = 'field_color_details_page_label';
  $handler->display->display_options ['fields'] ['field_color_details_page_label'] ['table'] = 'field_data_field_color_details_page_label';
  $handler->display->display_options ['fields'] ['field_color_details_page_label'] ['field'] = 'field_color_details_page_label';
  $handler->display->display_options ['fields'] ['field_color_details_page_label'] ['label'] = '';
  $handler->display->display_options ['fields'] ['field_color_details_page_label'] ['element_label_colon'] = FALSE;
  /* Field: Content: Download link */
  $handler->display->display_options ['fields'] ['field_download_link'] ['id'] = 'field_download_link';
  $handler->display->display_options ['fields'] ['field_download_link'] ['table'] = 'field_data_field_download_link';
  $handler->display->display_options ['fields'] ['field_download_link'] ['field'] = 'field_download_link';
  $handler->display->display_options ['fields'] ['field_download_link'] ['label'] = '';
  $handler->display->display_options ['fields'] ['field_download_link'] ['element_label_colon'] = FALSE;
  $handler->display->display_options ['fields'] ['field_download_link'] ['click_sort_column'] = 'url';
  $handler->display->display_options ['path'] = 'colours/tools';
  $handler->display->display_options ['menu'] ['title'] = 'Colours';
  $handler->display->display_options ['menu'] ['weight'] = '0';
  $handler->display->display_options ['menu'] ['name'] = 'main-menu';
  $handler->display->display_options ['menu'] ['context'] = 0;
  $handler->display->display_options ['menu'] ['context_only_inline'] = 0;

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options ['pager'] ['type'] = 'some';
  $handler->display->display_options ['pager'] ['options'] ['items_per_page'] = '1';
  $handler->display->display_options ['pager'] ['options'] ['offset'] = '0';
  $handler->display->display_options ['defaults'] ['filter_groups'] = FALSE;
  $handler->display->display_options ['defaults'] ['filters'] = FALSE;
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
    'color_tools' => 'color_tools'
  );
  $handler->display->display_options ['displays'] = array(
    'color_tools_list' => 'color_tools_list',
    'default' => 0
  );
  $translatables ['color_tools_overview'] = array(
    t('Master'),
    t('The colour tools of the trade'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Show me'),
    t('Color Tools'),
    t('Attachment')
  );
  $export ['color_tools_overview'] = $view;

  return $export;
}
