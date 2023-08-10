<?php

/**
 * @file
 * feature_painters_datasheets.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_painters_datasheets_field_group_info() {
  $export = array();

  $field_group = new stdClass ();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_data_sheet_cta_details|node|data_sheet|form';
  $field_group->group_name = 'group_data_sheet_cta_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_sheet';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Document',
    'weight' => '47',
    'children' => array(
      0 => 'field_document_reference',
      1 => 'field_document',
      2 => 'field_ds_3rd_party_link'
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-data-sheet-cta-details field-group-fieldset',
        'required_fields' => 1
      )
    )
  );
  $export ['group_data_sheet_cta_details|node|data_sheet|form'] = $field_group;

  return $export;
}
