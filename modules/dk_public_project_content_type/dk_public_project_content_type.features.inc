<?php
/**
 * @file
 * dk_public_project_content_type.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function dk_public_project_content_type_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implementation of hook_node_info().
 */
function dk_public_project_content_type_node_info() {
  $items = array(
    'public_project' => array(
      'name' => t('Public project'),
      'base' => 'node_content',
      'description' => t('A description of a public project to be developed by Drupal-Kitchen'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
