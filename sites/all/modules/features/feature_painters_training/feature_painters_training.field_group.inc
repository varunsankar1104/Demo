<?php

/**
 * @file
 * feature_painters_training.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_painters_training_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_section|node|training|form';
  $field_group->group_name = 'group_contact_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Section',
    'weight' => '11',
    'children' => array(
      0 => 'field_tr_fax_label',
      1 => 'field_tr_fax_number',
      2 => 'field_tr_telephone_label',
      3 => 'field_tr_telephone_number',
      4 => 'field_training_contact_label',
      5 => 'field_training_email',
      6 => 'field_training_email_label',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contact-section field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_contact_section|node|training|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_when_section|node|training|form';
  $field_group->group_name = 'group_when_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'When Section',
    'weight' => '9',
    'children' => array(
      0 => 'field_training_date_time',
      1 => 'field_when_label',
      2 => 'field_training_time',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-when-section field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_when_section|node|training|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_where_section|node|training|form';
  $field_group->group_name = 'group_where_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Where Section',
    'weight' => '10',
    'children' => array(
      0 => 'field_tr_location_address',
      1 => 'field_tr_location_label',
      2 => 'field_tr_where_label',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-where-section field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_where_section|node|training|form'] = $field_group;

  return $export;
}
