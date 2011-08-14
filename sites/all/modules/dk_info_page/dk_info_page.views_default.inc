<?php
/**
 * @file
 * dk_info_page.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function dk_info_page_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'abstracts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Abstracts';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Abstracts';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Abstract */
  $handler->display->display_options['fields']['field_page_abstract']['id'] = 'field_page_abstract';
  $handler->display->display_options['fields']['field_page_abstract']['table'] = 'field_data_field_page_abstract';
  $handler->display->display_options['fields']['field_page_abstract']['field'] = 'field_page_abstract';
  $handler->display->display_options['fields']['field_page_abstract']['label'] = '';
  $handler->display->display_options['fields']['field_page_abstract']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_page_abstract']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_page_abstract']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_page_abstract']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_page_abstract']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_page_abstract']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_page_abstract']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_page_abstract']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_page_abstract']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_page_abstract']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_page_abstract']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_page_abstract']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_page_abstract']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_page_abstract']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_page_abstract']['empty'] = '[no abstract]';
  $handler->display->display_options['fields']['field_page_abstract']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_page_abstract']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_page_abstract']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_page_abstract']['field_api_classes'] = 0;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
  );
  /* Filter criterion: Content: Abstract (field_page_abstract) */
  $handler->display->display_options['filters']['field_page_abstract_value']['id'] = 'field_page_abstract_value';
  $handler->display->display_options['filters']['field_page_abstract_value']['table'] = 'field_data_field_page_abstract';
  $handler->display->display_options['filters']['field_page_abstract_value']['field'] = 'field_page_abstract_value';
  $handler->display->display_options['filters']['field_page_abstract_value']['operator'] = 'not empty';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['abstracts'] = $view;

  return $export;
}
