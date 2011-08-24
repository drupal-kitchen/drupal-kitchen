<?php
/**
 * @file
 * dk_tools_menu.features.menu_custom.inc
 */

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function dk_tools_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-tools-menu
  $menus['menu-tools-menu'] = array(
    'menu_name' => 'menu-tools-menu',
    'title' => 'Tools Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Tools Menu');


  return $menus;
}
