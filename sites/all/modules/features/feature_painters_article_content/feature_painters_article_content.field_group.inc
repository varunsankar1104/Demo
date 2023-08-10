<?php

/**
 * @file
 * feature_painters_article_content.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_painters_article_content_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_article_cta|node|painters_article|form';
  $field_group->group_name = 'group_article_cta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'painters_article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Call To Action',
    'weight' => '17',
    'children' => array(
      0 => 'field_article_call_to_action',
      1 => 'field_article_detail_page_link',
      2 => 'field_article_others_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-article-cta field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_article_cta|node|painters_article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_color_sample|node|painters_article|form';
  $field_group->group_name = 'group_color_sample';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'painters_article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Color Sample',
    'weight' => '23',
    'children' => array(
      0 => 'field_color_sample_page',
      1 => 'field_color_sample_cta',
      2 => 'field_color_tester_cta',
      3 => 'field_color_sample_heading',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-color-sample field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_color_sample|node|painters_article|form'] = $field_group;

  return $export;
}
