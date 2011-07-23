<?php
/**
 * @file
 * dk_public_project_content_type.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function dk_public_project_content_type_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_public_project';
  $strongarm->value = 0;
  $export['comment_anonymous_public_project'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_public_project';
  $strongarm->value = 1;
  $export['comment_default_mode_public_project'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_public_project';
  $strongarm->value = '50';
  $export['comment_default_per_page_public_project'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_public_project';
  $strongarm->value = 1;
  $export['comment_form_location_public_project'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_public_project';
  $strongarm->value = '1';
  $export['comment_preview_public_project'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_public_project';
  $strongarm->value = '2';
  $export['comment_public_project'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_public_project';
  $strongarm->value = 1;
  $export['comment_subject_field_public_project'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_public_project';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_public_project'] = $strongarm;

  return $export;
}
