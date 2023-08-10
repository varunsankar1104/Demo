<?php

/**
 * @file
 * feature_painters_color_tools.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_painters_color_tools_field_group_info() {
  $export = array();

  $field_group = new stdClass ();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional_details|node|color_tools|form';
  $field_group->group_name = 'group_additional_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'color_tools';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional Details',
    'weight' => '10',
    'children' => array(
      0 => 'body',
      1 => 'field_additional_title'
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-additional-details field-group-fieldset',
        'required_fields' => 1
      )
    )
  );
  $export ['group_additional_details|node|color_tools|form'] = $field_group;

  $field_group = new stdClass ();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cta_details|node|color_tools|form';
  $field_group->group_name = 'group_cta_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'color_tools';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Call To Action',
    'weight' => '8',
    'children' => array(
      0 => 'field_3_rd_party_link',
      1 => 'field_call_to_action_details',
      2 => 'field_color_details_page_label',
      3 => 'field_download_link'
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Call To Action',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-cta-details field-group-fieldset',
        'description' => ''
      ),
      'formatter' => 'collapsible'
    )
  );
  $export ['group_cta_details|node|color_tools|form'] = $field_group;

  return $export;
}
