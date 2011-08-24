<?php
/**
 * @file
 * dk_top_menu.features.menu_links.inc
 */

/**
 * Implementation of hook_menu_default_menu_links().
 */
function dk_top_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-top-menu:<front>
  $menu_links['menu-top-menu:<front>'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'What',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('What');


  return $menu_links;
}
