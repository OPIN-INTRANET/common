<?php
/**
 * @file
 * user_role_executives.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function user_role_executives_user_default_roles() {
  $roles = array();

  // Exported role: Executives.
  $roles['Executives'] = array(
    'name' => 'Executives',
    'weight' => 2,
  );

  return $roles;
}
