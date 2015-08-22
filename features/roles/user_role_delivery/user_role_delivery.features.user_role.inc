<?php
/**
 * @file
 * user_role_delivery.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function user_role_delivery_user_default_roles() {
  $roles = array();

  // Exported role: Delivery.
  $roles['Delivery'] = array(
    'name' => 'Delivery',
    'weight' => 5,
  );

  return $roles;
}
