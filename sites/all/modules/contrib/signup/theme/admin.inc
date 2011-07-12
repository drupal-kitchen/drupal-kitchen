<?php
/**
 * @file
 * Theme functions for signup administration.
 */

/**
 * Controls the output of the signup administration overview page.
 *
 * This page is located at admin/content/signup, and allows site-wide signup
 * administrators to view signup-related information, close/open signups, etc,
 * for all signup-enabled nodes on the site.  There's a form to filter the
 * results by signup status, which is rendered at the top of the page by
 * default.
 *
 * @param $variables
 *   An array of variables containing:
 *   - 'filter_status_form': HTML representation of the signup status filter
 *     form.
 *   - 'signup_admin_form': HTML representation of the main signup
 *     administration form.
 *
 * @return
 *   Themed output for the signup administration overview page.
 */
function theme_signup_admin_page($variables) {
  $output = drupal_render($variables['filter_status_form']);
  $output .= drupal_render($variables['signup_admin_form']);
  return $output;
}

/**
 * @todo Please document this function.
 * @see http://drupal.org/node/1354
 */
function theme_signup_filter_status_form($variables) {
  $form = $variables['form'];
  return '<div class="container-inline">' . drupal_render_children($form) . '</div>';
}
