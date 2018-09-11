<?php

/**
 * @file
 * feature_painters_seo.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function feature_painters_seo_defaultconfig_features() {
  return array(
    'feature_painters_seo' => array(
      'field_default_fields' => 'field_default_fields',
      'metatag_config_default' => 'metatag_config_default',
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_field_default_fields().
 */
function feature_painters_seo_defaultconfig_field_default_fields() {
  $fields = array();

  // Exported field: 'node-platform_product-field_prod_haspatterns'.
  $fields['node-platform_product-field_prod_haspatterns'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_prod_haspatterns',
      'field_permissions' => array(
        'type' => 0,
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => 0,
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => '',
          1 => '',
        ),
        'allowed_values_function' => '',
        'entity_translation_sync' => FALSE,
      ),
      'translatable' => 0,
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'platform_product',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(
            'quickedit' => array(
              'editor' => 'form',
            ),
          ),
          'type' => 'list_default',
          'weight' => 23,
        ),
        'featured' => array(
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
      'field_name' => 'field_prod_haspatterns',
      'label' => 'Prod hasPatterns',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 1,
        ),
        'type' => 'options_onoff',
        'weight' => 28,
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Prod hasPatterns');

  return $fields;
}

/**
 * Implements hook_defaultconfig_metatag_config_default().
 */
function feature_painters_seo_defaultconfig_metatag_config_default() {
  $export = array();

  $config = new stdClass();
  $config->disabled = FALSE; /* Edit this to true to make a default config disabled initially */
  $config->api_version = 1;
  $config->instance = 'global';
  $config->config = array(
    'title' => array(
      'value' => '[current-page:title] | [site:name]',
    ),
    'description' => array(
      'value' => '',
    ),
    'abstract' => array(
      'value' => '',
    ),
    'keywords' => array(
      'value' => '',
    ),
    'robots' => array(
      'value' => array(
        'index' => 0,
        'follow' => 0,
        'noindex' => 0,
        'nofollow' => 0,
        'noarchive' => 0,
        'nosnippet' => 0,
        'noodp' => 0,
        'noydir' => 0,
        'noimageindex' => 0,
        'notranslate' => 0,
      ),
    ),
    'news_keywords' => array(
      'value' => '',
    ),
    'standout' => array(
      'value' => '',
    ),
    'generator' => array(
      'value' => 'Drupal 7 (http://drupal.org)',
    ),
    'rights' => array(
      'value' => '',
    ),
    'image_src' => array(
      'value' => '',
    ),
    'canonical' => array(
      'value' => '[current-page:url:absolute]',
    ),
    'shortlink' => array(
      'value' => '',
    ),
    'publisher' => array(
      'value' => '',
    ),
    'author' => array(
      'value' => '',
    ),
    'original-source' => array(
      'value' => '',
    ),
    'revisit-after' => array(
      'value' => '',
      'period' => '',
    ),
    'fb:admins' => array(
      'value' => '',
    ),
    'fb:app_id' => array(
      'value' => '',
    ),
    'itemtype' => array(
      'value' => '',
    ),
    'itemprop:name' => array(
      'value' => '',
    ),
    'itemprop:description' => array(
      'value' => '',
    ),
    'itemprop:image' => array(
      'value' => '',
    ),
    'og:site_name' => array(
      'value' => '',
    ),
    'og:type' => array(
      'value' => '',
    ),
    'og:url' => array(
      'value' => '',
    ),
    'og:title' => array(
      'value' => '',
    ),
    'og:determiner' => array(
      'value' => '',
    ),
    'og:description' => array(
      'value' => '',
    ),
    'og:updated_time' => array(
      'value' => '',
    ),
    'og:see_also' => array(
      'value' => '',
    ),
    'og:image' => array(
      'value' => '',
    ),
    'og:image:secure_url' => array(
      'value' => '',
    ),
    'og:image:type' => array(
      'value' => '',
    ),
    'og:image:width' => array(
      'value' => '',
    ),
    'og:image:height' => array(
      'value' => '',
    ),
    'og:latitude' => array(
      'value' => '',
    ),
    'og:longitude' => array(
      'value' => '',
    ),
    'og:street-address' => array(
      'value' => '',
    ),
    'og:locality' => array(
      'value' => '',
    ),
    'og:region' => array(
      'value' => '',
    ),
    'og:postal-code' => array(
      'value' => '',
    ),
    'og:country-name' => array(
      'value' => '',
    ),
    'og:email' => array(
      'value' => '',
    ),
    'og:phone_number' => array(
      'value' => '',
    ),
    'og:fax_number' => array(
      'value' => '',
    ),
    'og:locale' => array(
      'value' => '',
    ),
    'og:locale:alternate' => array(
      'value' => '',
    ),
    'article:author' => array(
      'value' => '',
    ),
    'article:publisher' => array(
      'value' => '',
    ),
    'article:section' => array(
      'value' => '',
    ),
    'article:tag' => array(
      'value' => '',
    ),
    'article:published_time' => array(
      'value' => '',
    ),
    'article:modified_time' => array(
      'value' => '',
    ),
    'article:expiration_time' => array(
      'value' => '',
    ),
    'profile:first_name' => array(
      'value' => '',
    ),
    'profile:last_name' => array(
      'value' => '',
    ),
    'profile:username' => array(
      'value' => '',
    ),
    'profile:gender' => array(
      'value' => '',
    ),
    'og:audio' => array(
      'value' => '',
    ),
    'og:audio:secure_url' => array(
      'value' => '',
    ),
    'og:audio:type' => array(
      'value' => '',
    ),
    'book:author' => array(
      'value' => '',
    ),
    'book:isbn' => array(
      'value' => '',
    ),
    'book:release_date' => array(
      'value' => '',
    ),
    'book:tag' => array(
      'value' => '',
    ),
    'og:video:secure_url' => array(
      'value' => '',
    ),
    'og:video:width' => array(
      'value' => '',
    ),
    'og:video:height' => array(
      'value' => '',
    ),
    'og:video:type' => array(
      'value' => '',
    ),
    'video:actor' => array(
      'value' => '',
    ),
    'video:actor:role' => array(
      'value' => '',
    ),
    'video:director' => array(
      'value' => '',
    ),
    'video:writer' => array(
      'value' => '',
    ),
    'video:duration' => array(
      'value' => '',
    ),
    'video:release_date' => array(
      'value' => '',
    ),
    'video:tag' => array(
      'value' => '',
    ),
    'video:series' => array(
      'value' => '',
    ),
    'twitter:card' => array(
      'value' => '',
    ),
    'twitter:site' => array(
      'value' => '',
    ),
    'twitter:site:id' => array(
      'value' => '',
    ),
    'twitter:creator' => array(
      'value' => '',
    ),
    'twitter:creator:id' => array(
      'value' => '',
    ),
    'twitter:url' => array(
      'value' => '',
    ),
    'twitter:title' => array(
      'value' => '',
    ),
    'twitter:description' => array(
      'value' => '',
    ),
    'twitter:image:width' => array(
      'value' => '',
    ),
    'twitter:image:height' => array(
      'value' => '',
    ),
    'twitter:image0' => array(
      'value' => '',
    ),
    'twitter:image1' => array(
      'value' => '',
    ),
    'twitter:image2' => array(
      'value' => '',
    ),
    'twitter:image3' => array(
      'value' => '',
    ),
    'twitter:player' => array(
      'value' => '',
    ),
    'twitter:player:width' => array(
      'value' => '',
    ),
    'twitter:player:height' => array(
      'value' => '',
    ),
    'twitter:player:stream' => array(
      'value' => '',
    ),
    'twitter:player:stream:content_type' => array(
      'value' => '',
    ),
    'twitter:app:country' => array(
      'value' => '',
    ),
    'twitter:app:name:iphone' => array(
      'value' => '',
    ),
    'twitter:app:id:iphone' => array(
      'value' => '',
    ),
    'twitter:app:url:iphone' => array(
      'value' => '',
    ),
    'twitter:app:name:ipad' => array(
      'value' => '',
    ),
    'twitter:app:id:ipad' => array(
      'value' => '',
    ),
    'twitter:app:url:ipad' => array(
      'value' => '',
    ),
    'twitter:app:name:googleplay' => array(
      'value' => '',
    ),
    'twitter:app:id:googleplay' => array(
      'value' => '',
    ),
    'twitter:app:url:googleplay' => array(
      'value' => '',
    ),
    'twitter:label1' => array(
      'value' => '',
    ),
    'twitter:data1' => array(
      'value' => '',
    ),
    'twitter:label2' => array(
      'value' => '',
    ),
    'twitter:data2' => array(
      'value' => '',
    ),
    'twitter:image' => array(
      'value' => '',
    ),
    'og:video:url' => array(
      'value' => '',
    ),
  );
  $export['global'] = $config;

  $config = new stdClass();
  $config->disabled = FALSE; /* Edit this to true to make a default config disabled initially */
  $config->api_version = 1;
  $config->instance = 'node';
  $config->config = array(
    'title' => array(
      'value' => '[node:title] | [site:name]',
    ),
    'description' => array(
      'value' => '[node:summary]',
    ),
    'itemtype' => array(
      'value' => array(
        'select' => '',
        'other' => '',
      ),
    ),
    'itemprop:name' => array(
      'value' => '[current-page:title]',
    ),
    'itemprop:description' => array(
      'value' => '[node:summary]',
    ),
    'og:title' => array(
      'value' => '[node:title]',
    ),
    'og:description' => array(
      'value' => '[node:summary]',
    ),
    'twitter:title' => array(
      'value' => '[node:title]',
    ),
    'twitter:description' => array(
      'value' => '[node:summary]',
    ),
  );
  $export['node'] = $config;

  $config = new stdClass();
  $config->disabled = FALSE; /* Edit this to true to make a default config disabled initially */
  $config->api_version = 1;
  $config->instance = 'taxonomy_term';
  $config->config = array(
    'title' => array(
      'value' => '[term:name] | [site:name]',
    ),
    'description' => array(
      'value' => '[term:description]',
    ),
    'itemprop:description' => array(
      'value' => '[term:description]',
    ),
    'itemprop:name' => array(
      'value' => '[term:name]',
    ),
    'og:description' => array(
      'value' => '[term:description]',
    ),
    'og:title' => array(
      'value' => '[term:name]',
    ),
    'twitter:description' => array(
      'value' => '[term:description]',
    ),
    'twitter:title' => array(
      'value' => '[term:name]',
    ),
  );
  $export['taxonomy_term'] = $config;

  $config = new stdClass();
  $config->disabled = FALSE; /* Edit this to true to make a default config disabled initially */
  $config->api_version = 1;
  $config->instance = 'user';
  $config->config = array(
    'title' => array(
      'value' => '[user:name] | [site:name]',
    ),
    'itemprop:name' => array(
      'value' => '[user:name]',
    ),
    'og:title' => array(
      'value' => '[user:name]',
    ),
    'og:type' => array(
      'value' => 'profile',
    ),
    'profile:username' => array(
      'value' => '[user:name]',
    ),
    'twitter:title' => array(
      'value' => '[user:name]',
    ),
  );
  $export['user'] = $config;

  return $export;
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function feature_painters_seo_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__platform_product';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__platform_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_color_tools_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_color_tools_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_xsl';
  $strongarm->value = 0;
  $export['xmlsitemap_xsl'] = $strongarm;

  return $export;
}
