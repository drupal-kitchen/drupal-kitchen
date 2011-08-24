<?php
/**
 * @file
 * dk_top_menu.features.menu_custom.inc
 */

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function dk_top_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-top-menu
  $menus['menu-top-menu'] = array(
    'menu_name' => 'menu-top-menu',
    'title' => 'Top menu',
    'description' => 'Header menu with links to basic info pages.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Header menu with links to basic info pages.');
  t('Top menu');


  return $menus;
}
