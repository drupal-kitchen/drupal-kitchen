<?php
/**
 * @file
 * dk_event.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function dk_event_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer all signups
  $permissions['administer all signups'] = array(
    'name' => 'administer all signups',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'signup',
  );

  // Exported permission: administer signups for own content
  $permissions['administer signups for own content'] = array(
    'name' => 'administer signups for own content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'signup',
  );

  // Exported permission: cancel own signups
  $permissions['cancel own signups'] = array(
    'name' => 'cancel own signups',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'signup',
  );

  // Exported permission: cancel signups
  $permissions['cancel signups'] = array(
    'name' => 'cancel signups',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'signup',
  );

  // Exported permission: create event content
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any event content
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own event content
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any event content
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own event content
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own signups
  $permissions['edit own signups'] = array(
    'name' => 'edit own signups',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'signup',
  );

  // Exported permission: email all signed up users
  $permissions['email all signed up users'] = array(
    'name' => 'email all signed up users',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'signup',
  );

  // Exported permission: email users signed up for own content
  $permissions['email users signed up for own content'] = array(
    'name' => 'email users signed up for own content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'signup',
  );

  // Exported permission: sign up for content
  $permissions['sign up for content'] = array(
    'name' => 'sign up for content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'signup',
  );

  // Exported permission: view all signups
  $permissions['view all signups'] = array(
    'name' => 'view all signups',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'signup',
  );

  return $permissions;
}
