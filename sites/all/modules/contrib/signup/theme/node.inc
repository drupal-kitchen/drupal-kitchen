<?php
/**
 * @file
 * Theme functions when viewing a signup-enabled node.
 */

/**
 * Controls the output displayed if this node is closed for signups.
 *
 * @param $variables
 *   An array of variables containing:
 *   - 'node': The fully loaded node object.
 *   - 'current_signup': If the user already signed up, an HTML representation
 *     of their current signup information, otherwise an empty string.
 *
 * @return
 *   Themed output to display for a node with closed signups.
 *
 * @see _signup_node_output()
 * @see _signup_print_current_signup()
 */
function theme_signup_signups_closed($variables) {
  $node = $variables['node'];

  $current_signup = $variables['current_signup'];
  $output = '<h3>' . t('Signups closed for this %node_type', array('%node_type' => node_type_get_name($node->type))) . '</h3>';
  $output .= $current_signup;
  return $output;
}

/**
 * Controls the output for anonymous users who can't signup.
 *
 * @param $variables
 *   An array of variables containing:
 *   - 'anon_login_text': The translated HTML help text telling users to login
 *     (and if allowed on this site, register) so they can signup, including
 *     login/register links.
 *
 * @return
 *   The themed HTML to display the login (and maybe register) help text.
 */
function theme_signup_anonymous_user_login_text($variables) {
  if (!empty($variables['anon_login_text'])) {
    return '<div class="signup_anonymous_login">' . $variables['anon_login_text'] . '</div>';
  }
}

/**
 * Return HTML desired at the top of the signup output for a node.
 *
 * @param $variables
 *   An array of variables containing:
 *   - 'node': The fully loaded node object to generate a header for.
 *
 * @return
 *   HTML to display at the top of the signup output.
 *
 * @see _signup_node_output()
 */
function theme_signup_node_output_header($variables) {
  return '<a name="signup"></a>';
}

/**
 * Return HTML desired when displaying a node title along with the signup date.
 */
function theme_signup_node_title($variables) {
  $node = $variables['node'];
  $date_formatted = '';

  // TODO: date.inc needs to be ported to D7 before using this.
  /* $date_field = signup_date_field($node->type);
  if (!empty($date_field)) {
    $date_field_name = $date_field['field_name'];
    $this_date_field = $node->$date_field_name;
    $date_formatted = content_format($date_field, $this_date_field[0]);
    if (!empty($date_formatted)) {
      $date_formatted = ' - ' . $date_formatted;
    }
  }
  */
  return l($node->title, 'node/' . $node->nid) . $date_formatted;
}

