<?php
/**
 * @file
 * user_role_finance.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function user_role_finance_user_default_roles() {
  $roles = array();

  // Exported role: Finance.
  $roles['Finance'] = array(
    'name' => 'Finance',
    'weight' => 4,
  );

  return $roles;
}
