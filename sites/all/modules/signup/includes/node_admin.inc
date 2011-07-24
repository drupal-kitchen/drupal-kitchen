<?php
/**
 * @file
 * Code related to the signup administration tab on each node.
 */

/**
 * Print the signup administration tab for a single node.
 */
function signup_node_admin_page($node) {
  drupal_set_title($node->title);

  // Administrative table to control signups for this node.
  // We only want this if we're not in the middle of confirming a bulk
  // operation on the signup details table. Even though directly inspecting
  // POST is almost always a bad idea, in this case, we're not using or
  // displaying any of the data at all.  We're just making a cosmetic decision
  // based on if it's a certain kind of POST...
  if (empty($_POST['operation'])) {
    module_load_include('inc', 'signup', 'includes/node_admin_summary');
    $form = drupal_get_form('signup_node_admin_summary_form', $node);
    $signup_node_admin_summary_form = drupal_render($form);
  }
  else {
    // We're either dealing with a validation error or on a confirm form, so
    // don't render the summary form at all.
    $signup_node_admin_summary_form = '';
  }

  if (variable_get('signup_display_signup_admin_list', 'embed-view') == 'embed-view') {
    $signup_view = _signup_get_admin_list_view();
    $signup_view_parts = explode(':', $signup_view);
    $view_name = $signup_view_parts[0];
    $view_display = $signup_view_parts[1];
    $view = views_get_view($view_name);
    $view->override_path = 'node/%/signups/admin';
    $view_args = array($node->nid);
    $signup_node_admin_details_form = $view->preview($view_display, $view_args);
  }
  else {
    // They don't want the administrative user list at all.
    $signup_node_admin_details_form = '';
  }

  return theme('signup_node_admin_page', array('node' => $node, 'signup_node_admin_summary_form' => $signup_node_admin_summary_form, 'signup_node_admin_details_form' => $signup_node_admin_details_form));
}

