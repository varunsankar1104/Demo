<?php

/**
 * @file
 * feature_painters_faq.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function feature_painters_faq_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_faq_answer'
  $field_bases ['field_faq_answer'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_faq_answer',
    'field_permissions' => array(
      'type' => 0
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format'
      )
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE
    ),
    'translatable' => 1,
    'type' => 'text_with_summary'
  );

  // Exported field_base: 'field_faq_cat_label'
  $field_bases ['field_faq_cat_label'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_faq_cat_label',
    'field_permissions' => array(
      'type' => 0
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format'
      )
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255
    ),
    'translatable' => 1,
    'type' => 'text'
  );

  // Exported field_base: 'field_faq_icon_css_class'
  $field_bases ['field_faq_icon_css_class'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_faq_icon_css_class',
    'field_permissions' => array(
      'type' => 0
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format'
      )
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255
    ),
    'translatable' => 1,
    'type' => 'text'
  );

  // Exported field_base: 'field_faq_question'
  $field_bases ['field_faq_question'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_faq_question',
    'field_permissions' => array(
      'type' => 0
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format'
      )
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE
    ),
    'translatable' => 1,
    'type' => 'text_long'
  );

  // Exported field_base: 'field_faq_question_answers'
  $field_bases ['field_faq_question_answers'] = array(
    'active' => 1,
    'cardinality' => - 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_faq_question_answers',
    'field_permissions' => array(
      'type' => 0
    ),
    'indexes' => array(
      'field_faq_answer_format' => array(
        0 => 'field_faq_answer_format'
      ),
      'field_faq_question_format' => array(
        0 => 'field_faq_question_format'
      ),
      'id' => array(
        0 => 'id'
      )
    ),
    'locked' => 0,
    'module' => 'multifield',
    'settings' => array(
      'entity_translation_sync' => array(
        0 => 'id'
      ),
      'hide_blank_items' => 1
    ),
    'translatable' => 1,
    'type' => 'multifield'
  );

  // Exported field_base: 'field_faq_short_teaser'
  $field_bases ['field_faq_short_teaser'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_faq_short_teaser',
    'field_permissions' => array(
      'type' => 0
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format'
      )
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE
    ),
    'translatable' => 1,
    'type' => 'text_long'
  );

  // Exported field_base: 'field_faq_weight'
  $field_bases ['field_faq_weight'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_faq_weight',
    'field_permissions' => array(
      'type' => 0
    ),
    'indexes' => array(
      'value' => array(
        0 => 'value'
      )
    ),
    'locked' => 0,
    'module' => 'weight',
    'settings' => array(
      'entity_translation_sync' => FALSE
    ),
    'translatable' => 0,
    'type' => 'weight'
  );

  return $field_bases;
}
