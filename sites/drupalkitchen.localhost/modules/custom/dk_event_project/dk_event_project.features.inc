<?php
/**
 * @file
 * dk_event_project.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function dk_event_project_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implementation of hook_node_info().
 */
function dk_event_project_node_info() {
  $items = array(
    'event_project' => array(
      'name' => t('Event project'),
      'base' => 'node_content',
      'description' => t('The project we\'ll be building.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
