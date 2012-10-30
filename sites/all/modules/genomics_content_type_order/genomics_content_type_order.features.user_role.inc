<?php
/**
 * @file
 * genomics_content_type_order.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function genomics_content_type_order_user_default_roles() {
  $roles = array();

  // Exported role: Coordinators.
  $roles['Coordinators'] = array(
    'name' => 'Coordinators',
    'weight' => '2',
  );

  return $roles;
}
