<?php
/**
 * @file
 * dk_recent_projects.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function dk_recent_projects_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'recent_projects';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Recent Projects';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent Projects';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_event_project_image' => 'field_event_project_image',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: Project image */
  $handler->display->display_options['fields']['field_event_project_image']['id'] = 'field_event_project_image';
  $handler->display->display_options['fields']['field_event_project_image']['table'] = 'field_data_field_event_project_image';
  $handler->display->display_options['fields']['field_event_project_image']['field'] = 'field_event_project_image';
  $handler->display->display_options['fields']['field_event_project_image']['label'] = '';
  $handler->display->display_options['fields']['field_event_project_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_project_image']['alter']['text'] = '<div class="dk_event_project_image" style="float: left;">[field_event_project_image] </div>[title]';
  $handler->display->display_options['fields']['field_event_project_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_project_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_project_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_project_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_project_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_project_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_project_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_project_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_project_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_project_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_project_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_project_image']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_event_project_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_project_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_project_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_project_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_project_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_event_project_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_project_image']['settings'] = array(
    'image_style' => 'dk_project_thumbs',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_event_project_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'event_project' => 'event_project',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Recent Projects Page */
  $handler = $view->new_display('page', 'Recent Projects Page', 'page_1');
  $handler->display->display_options['display_description'] = 'Recent Projects in a page format';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Project image */
  $handler->display->display_options['fields']['field_event_project_image']['id'] = 'field_event_project_image';
  $handler->display->display_options['fields']['field_event_project_image']['table'] = 'field_data_field_event_project_image';
  $handler->display->display_options['fields']['field_event_project_image']['field'] = 'field_event_project_image';
  $handler->display->display_options['fields']['field_event_project_image']['label'] = '';
  $handler->display->display_options['fields']['field_event_project_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_project_image']['alter']['text'] = '<div class="dk_event_project_image" style="float: left;">[field_event_project_image] </div>[title]';
  $handler->display->display_options['fields']['field_event_project_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_project_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_project_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_project_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_project_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_project_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_project_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_project_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_project_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_project_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_project_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_project_image']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_event_project_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_project_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_project_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_project_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_project_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_event_project_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_project_image']['settings'] = array(
    'image_style' => 'dk_project_medium',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_event_project_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['external'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['comment_count']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['comment_count']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['html'] = 0;
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['comment_count']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['comment_count']['hide_empty'] = 0;
  $handler->display->display_options['fields']['comment_count']['empty_zero'] = 0;
  $handler->display->display_options['fields']['comment_count']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['comment_count']['format_plural'] = 0;
  $handler->display->display_options['path'] = 'projects';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Project image */
  $handler->display->display_options['fields']['field_event_project_image']['id'] = 'field_event_project_image';
  $handler->display->display_options['fields']['field_event_project_image']['table'] = 'field_data_field_event_project_image';
  $handler->display->display_options['fields']['field_event_project_image']['field'] = 'field_event_project_image';
  $handler->display->display_options['fields']['field_event_project_image']['label'] = '';
  $handler->display->display_options['fields']['field_event_project_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_project_image']['alter']['text'] = '<div class="dk_event_project_image" style="float: left;">[field_event_project_image] </div>[title]';
  $handler->display->display_options['fields']['field_event_project_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_project_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_project_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_project_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_project_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_project_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_project_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_project_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_project_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_project_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_project_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_project_image']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_event_project_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_project_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_project_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_project_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_project_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_event_project_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_project_image']['settings'] = array(
    'image_style' => 'dk_project_medium',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_event_project_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['external'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['comment_count']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['comment_count']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['comment_count']['alter']['html'] = 0;
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['comment_count']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['comment_count']['hide_empty'] = 0;
  $handler->display->display_options['fields']['comment_count']['empty_zero'] = 0;
  $handler->display->display_options['fields']['comment_count']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['comment_count']['format_plural'] = 0;
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'block' => 0,
  );
  $export['recent_projects'] = $view;

  return $export;
}
