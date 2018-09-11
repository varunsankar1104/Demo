<?php

/**
 * @file
 * feature_painters_color_tools.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function feature_painters_color_tools_user_default_roles() {
  $roles = array();

  // Exported role: Approver.
  $roles ['Approver'] = array(
    'name' => 'Approver',
    'weight' => 4
  );

  // Exported role: Editor.
  $roles ['Editor'] = array(
    'name' => 'Editor',
    'weight' => 6
  );

  // Exported role: Publisher.
  $roles ['Publisher'] = array(
    'name' => 'Publisher',
    'weight' => 5
  );

  // Exported role: Translator.
  $roles ['Translator'] = array(
    'name' => 'Translator',
    'weight' => 3
  );

  // Exported role: administrator.
  $roles ['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2
  );

  return $roles;
}
