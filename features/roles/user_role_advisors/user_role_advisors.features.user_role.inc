<?php
/**
 * @file
 * user_role_advisors.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function user_role_advisors_user_default_roles() {
  $roles = array();

  // Exported role: Advisors.
  $roles['Advisors'] = array(
    'name' => 'Advisors',
    'weight' => 3,
  );

  return $roles;
}
