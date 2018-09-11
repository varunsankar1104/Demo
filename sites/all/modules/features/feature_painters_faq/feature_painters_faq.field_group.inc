<?php

/**
 * @file
 * feature_painters_faq.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_painters_faq_field_group_info() {
  $export = array();

  $field_group = new stdClass ();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_faq_category_section|node|faq|form';
  $field_group->group_name = 'group_faq_category_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faq';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'FAQ Category Section',
    'weight' => '5',
    'children' => array(
      0 => 'field_faq_short_teaser',
      1 => 'field_faq_icon_css_class',
      2 => 'field_faq_cat_label'
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-faq-category-section field-group-fieldset',
        'required_fields' => 1
      )
    )
  );
  $export ['group_faq_category_section|node|faq|form'] = $field_group;

  $field_group = new stdClass ();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_faq_section|node|faq|form';
  $field_group->group_name = 'group_faq_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faq';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'FAQ Q&A Section',
    'weight' => '9',
    'children' => array(
      0 => 'title_field',
      1 => 'field_faq_question_answers'
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'FAQ Q&A Section',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-faq-section field-group-fieldset',
        'description' => ''
      ),
      'formatter' => 'collapsible'
    )
  );
  $export ['group_faq_section|node|faq|form'] = $field_group;

  return $export;
}
