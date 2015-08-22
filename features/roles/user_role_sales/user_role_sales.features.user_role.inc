<?php
/**
 * @file
 * user_role_sales.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function user_role_sales_user_default_roles() {
  $roles = array();

  // Exported role: Sales.
  $roles['Sales'] = array(
    'name' => 'Sales',
    'weight' => 6,
  );

  return $roles;
}
