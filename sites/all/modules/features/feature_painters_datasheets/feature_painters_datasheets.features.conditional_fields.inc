<?php

/**
 * @file
 * feature_painters_datasheets.features.conditional_fields.inc
 */

/**
 * Implements hook_conditional_fields_default_fields().
 */
function feature_painters_datasheets_conditional_fields_default_fields() {
  $items = array();

  $items ["node:data_sheet:0"] = array(
    'entity' => 'node',
    'bundle' => 'data_sheet',
    'dependent' => 'field_document',
    'dependee' => 'field_document_reference',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'slide',
      'effect_options' => array(
        'speed' => 400
      ),
      'element_view' => array(
        1 => 1,
        2 => 2,
        5 => 0,
        3 => 0,
        4 => 0
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0
        ),
        2 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0
        ),
        3 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0
        ),
        7 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0
        ),
        5 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0
        ),
        6 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0
        ),
        4 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0
        )
      ),
      'element_edit' => array(
        1 => 1,
        3 => 3
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => 1,
          3 => 0
        ),
        2 => array(
          1 => 1,
          3 => 0
        ),
        3 => array(
          1 => 1,
          3 => 0
        ),
        7 => array(
          1 => 1,
          3 => 0
        ),
        5 => array(
          1 => 1,
          3 => 0
        ),
        6 => array(
          1 => 1,
          3 => 0
        ),
        4 => array(
          1 => 1,
          3 => 0
        )
      ),
      'selector' => '',
      'values_set' => 1,
      'value_form' => 'ds_up_file',
      'value' => array(
        0 => array(
          'value' => 'ds_up_file'
        )
      ),
      'values' => array()
    )
  );

  $items ["node:data_sheet:1"] = array(
    'entity' => 'node',
    'bundle' => 'data_sheet',
    'dependent' => 'field_ds_3rd_party_link',
    'dependee' => 'field_document_reference',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'slide',
      'effect_options' => array(
        'speed' => 400
      ),
      'element_view' => array(
        1 => 1,
        2 => 2,
        5 => 0,
        3 => 0,
        4 => 0
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0
        ),
        2 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0
        ),
        3 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0
        ),
        7 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0
        ),
        5 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0
        ),
        6 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0
        ),
        4 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0
        )
      ),
      'element_edit' => array(
        1 => 1,
        3 => 3
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => 1,
          3 => 0
        ),
        2 => array(
          1 => 1,
          3 => 0
        ),
        3 => array(
          1 => 1,
          3 => 0
        ),
        7 => array(
          1 => 1,
          3 => 0
        ),
        5 => array(
          1 => 1,
          3 => 0
        ),
        6 => array(
          1 => 1,
          3 => 0
        ),
        4 => array(
          1 => 1,
          3 => 0
        )
      ),
      'selector' => '',
      'values_set' => 1,
      'value_form' => 'ds_tpty_lnk',
      'value' => array(
        0 => array(
          'value' => 'ds_tpty_lnk'
        )
      ),
      'values' => array()
    )
  );

  return $items;
}
