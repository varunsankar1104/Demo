<?php

/**
 * @file
 * feature_painters_training.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function feature_painters_training_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_training-courses:training-overview
  $menu_links ['main-menu_training-courses:training-overview'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'training-overview',
    'router_path' => 'training-overview',
    'link_title' => 'Training Courses',
    'options' => array(
      'identifier' => 'main-menu_training-courses:training-overview'
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => - 50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_advise--support:node/184053'
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Training Courses');

  return $menu_links;
}
