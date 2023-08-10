<?php

/**
 * @file
 * Painter Deployment Drush commands file
 */

/**
 * Implements hook_drush_command().
 */
function painters_deployment_drush_command() {
  $items['painters-disable-nonprod-modules'] = array(
    'description' => 'To delete Developer helper modules like dblog, devel etc',
    'callback' => 'disable_unused_modules',
  );

  $items['import-populate-painters-cache'] = array(
    'description' => 'To populate painters cache',
    'aliases' => array(
      'populate-painters-cache',
    ),
    'callback' => 'populate_painters_cache',
  );
  // Name of the drush command.
  $items['painters-create-cat-terms'] = array(
    'description' => 'Import all advice and pillar categories through code ',
    'callback' => 'painters_create_taxonomy_terms',
    'aliases' => array(
      'pcct',
    ),
      // alias of command
  );
  // Name of the drush command.
  $items['painters-create-cat-terms'] = array(
    'description' => 'Import all advice and pillar categories through code ',
    'callback' => 'painters_create_taxonomy_terms',
    'aliases' => array(
      'pcct',
    ),
      // alias of command
  );
  $items['painters-delete-brand-cc-order-field'] = array(
    'description' => 'Delete brand cc order field',
    'callback' => '_painters_delete_brand_cc_field',
    'aliases' => array(
      'pdbcc',
    ),
      // alias of command
  );
  $items['painters-sitefurniture-default-set'] = array(
    'description' => 'Set site furniture values to default English',
    'callback' => '_painters_sitefurniture_default',
    'aliases' => array(
      'set-sitefurniture-default',
    ),
  );
  return $items;
}
