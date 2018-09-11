<?php

/**
 * @file
 * feature_painters_color_tools.features.conditional_fields.inc
 */

/**
 * Implements hook_conditional_fields_default_fields().
 */
function feature_painters_color_tools_conditional_fields_default_fields() {
  $items = array();

  $items ["node:color_tools:0"] = array(
    'entity' => 'node',
    'bundle' => 'color_tools',
    'dependent' => 'body',
    'dependee' => 'field_call_to_action_details',
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
      'value_form' => 'color_tools',
      'value' => array(
        0 => array(
          'value' => 'color_tools'
        )
      ),
      'values' => array()
    )
  );

  $items ["node:color_tools:1"] = array(
    'entity' => 'node',
    'bundle' => 'color_tools',
    'dependent' => 'field_3_rd_party_link',
    'dependee' => 'field_call_to_action_details',
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
      'value_form' => 'tpty_lnk',
      'value' => array(
        0 => array(
          'value' => 'tpty_lnk'
        )
      ),
      'values' => array()
    )
  );

  $items ["node:color_tools:2"] = array(
    'entity' => 'node',
    'bundle' => 'color_tools',
    'dependent' => 'field_additional_title',
    'dependee' => 'field_call_to_action_details',
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
      'value_form' => 'color_tools',
      'value' => array(
        0 => array(
          'value' => 'color_tools'
        )
      ),
      'values' => array()
    )
  );

  $items ["node:color_tools:3"] = array(
    'entity' => 'node',
    'bundle' => 'color_tools',
    'dependent' => 'field_color_details_page_label',
    'dependee' => 'field_call_to_action_details',
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
      'value_form' => 'color_tools',
      'value' => array(
        0 => array(
          'value' => 'color_tools'
        )
      ),
      'values' => array()
    )
  );

  $items ["node:color_tools:4"] = array(
    'entity' => 'node',
    'bundle' => 'color_tools',
    'dependent' => 'field_ct_description',
    'dependee' => 'field_call_to_action_details',
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
      'value_form' => 'color_tools',
      'value' => array(
        0 => array(
          'value' => 'color_tools'
        )
      ),
      'values' => array()
    )
  );

  $items ["node:color_tools:5"] = array(
    'entity' => 'node',
    'bundle' => 'color_tools',
    'dependent' => 'field_download_android_app',
    'dependee' => 'field_call_to_action_details',
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
      'value_form' => 'color_tools',
      'value' => array(
        0 => array(
          'value' => 'color_tools'
        )
      ),
      'values' => array()
    )
  );

  $items ["node:color_tools:6"] = array(
    'entity' => 'node',
    'bundle' => 'color_tools',
    'dependent' => 'field_download_iphone_app',
    'dependee' => 'field_call_to_action_details',
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
      'value_form' => 'color_tools',
      'value' => array(
        0 => array(
          'value' => 'color_tools'
        )
      ),
      'values' => array()
    )
  );

  $items ["node:color_tools:7"] = array(
    'entity' => 'node',
    'bundle' => 'color_tools',
    'dependent' => 'field_download_link',
    'dependee' => 'field_call_to_action_details',
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
      'value_form' => 'dl_lnk',
      'value' => array(
        0 => array(
          'value' => 'dl_lnk'
        )
      ),
      'values' => array()
    )
  );

  return $items;
}
