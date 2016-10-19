<?php
/**
 * @file
 * ogmk_faqs.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ogmk_faqs_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create ogmk_faq content'.
  $permissions['create ogmk_faq content'] = array(
    'name' => 'create ogmk_faq content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any ogmk_faq content'.
  $permissions['delete any ogmk_faq content'] = array(
    'name' => 'delete any ogmk_faq content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own ogmk_faq content'.
  $permissions['delete own ogmk_faq content'] = array(
    'name' => 'delete own ogmk_faq content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any ogmk_faq content'.
  $permissions['edit any ogmk_faq content'] = array(
    'name' => 'edit any ogmk_faq content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own ogmk_faq content'.
  $permissions['edit own ogmk_faq content'] = array(
    'name' => 'edit own ogmk_faq content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'set ogmk_faq published on date'.
  $permissions['set ogmk_faq published on date'] = array(
    'name' => 'set ogmk_faq published on date',
    'roles' => array(),
    'module' => 'publication_date',
  );

  return $permissions;
}
