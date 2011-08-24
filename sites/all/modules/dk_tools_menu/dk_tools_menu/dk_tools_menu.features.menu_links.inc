<?php
/**
 * @file
 * dk_tools_menu.features.menu_links.inc
 */

/**
 * Implementation of hook_menu_default_menu_links().
 */
function dk_tools_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-tools-menu:<front>
  $menu_links['menu-tools-menu:<front>'] = array(
    'menu_name' => 'menu-tools-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'People',
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
  // Exported menu link: menu-tools-menu:events
  $menu_links['menu-tools-menu:events'] = array(
    'menu_name' => 'menu-tools-menu',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-tools-menu:projects
  $menu_links['menu-tools-menu:projects'] = array(
    'menu_name' => 'menu-tools-menu',
    'link_path' => 'projects',
    'router_path' => 'projects',
    'link_title' => 'Projects',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Events');
  t('People');
  t('Projects');


  return $menu_links;
}
