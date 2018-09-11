<?php

/**
 * @file
 * feature_painters_article_content.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function feature_painters_article_content_defaultconfig_features() {
  return array(
    'feature_painters_article_content' => array(
      'field_default_fields' => 'field_default_fields',
      'strongarm' => 'strongarm',
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_field_default_fields().
 */
function feature_painters_article_content_defaultconfig_field_default_fields() {
  $fields = array();

  // Exported field: 'node-painters_article-field_article_category'.
  $fields['node-painters_article-field_article_category'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_article_category',
      'field_permissions' => array(
        'type' => 0,
      ),
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'article_category',
            'parent' => 0,
          ),
        ),
        'entity_translation_sync' => FALSE,
        'options_list_callback' => 'i18n_taxonomy_allowed_values',
      ),
      'translatable' => 1,
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'painters_article',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'advice_and_support' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'article_title' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 11,
        ),
        'collapsible_image_sections' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'i18n_taxonomy',
          'settings' => array(
            'quickedit' => array(
              'editor' => 'form',
            ),
          ),
          'type' => 'i18n_taxonomy_term_reference_link',
          'weight' => 18,
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'image_left' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 18,
        ),
        'image_right' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'image_top' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'landing_page_centered_block' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'landing_page_image_left' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'landing_page_image_right' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'landing_page_top_block' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_article_category',
      'label' => 'Article Category',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => 2,
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Article Category');

  return $fields;
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function feature_painters_article_content_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_painters_article';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_painters_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_painters_article';
  $strongarm->value = 0;
  $export['scheduler_publish_revision_painters_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_painters_article';
  $strongarm->value = 0;
  $export['scheduler_unpublish_revision_painters_article'] = $strongarm;

  return $export;
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function feature_painters_article_content_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer taxonomy_term article_category defaults'.
  $permissions['administer panelizer taxonomy_term article_category defaults'] = array(
    'name' => 'administer panelizer taxonomy_term article_category defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'delete terms in article_category'.
  $permissions['delete terms in article_category'] = array(
    'name' => 'delete terms in article_category',
    'roles' => array(
      'Country Admin' => 'Country Admin',
      'Global Admin' => 'Global Admin',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
