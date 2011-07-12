<?php
/**
 * @file
 * Code for building help text for token.module support on various forms.
 */

/**
 * Private function to generate HTML for showing the available tokens.
 *
 * @param $form
 *   Reference to the form array to include the help fieldset in.
 * @param $element_name
 *   Name of the form element to use for the help fieldset.
 */
function _signup_token_help(&$form, $element_name) {
  $form[$element_name] = array(
    '#type' => 'fieldset',
    '#title' => t('Replacement tokens'),
    '#description' => t("Since these tokens will be used in plain text e-mail, it is better to use the '-raw' versions of any tokens that provide them."),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form[$element_name]['help_text'] = array(
    '#markup' => _signup_build_token_help(),
  );
}

/**
 * Private function to generate HTML for showing the available tokens
 *
 * @return The themed representation of the available tokens.
 */
function _signup_build_token_help() {
  static $help_html = '';
  if (empty($help_html)) {
    // TODO: Why can't theme_token_help() be found in this module?!?!
    $help_html = theme('token_help', array('signup', 'node', 'global'));
  }
  return $help_html;
}
