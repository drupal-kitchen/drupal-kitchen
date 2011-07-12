<?php
/**
 * Field handler to generate a link to edit a given signup.
 */
class signup_handler_field_signup_edit_link extends views_handler_field_node_link {
  function construct() {
    parent::construct();
    $this->additional_fields['sid'] = array(
      'table' => 'signup_log',
      'field' => 'sid',
    );
    $this->additional_fields['uid'] = array(
      'table' => 'signup_log',
      'field' => 'uid',
    );
  }

  function render($values) {
    global $user;

    // Check access to edit this signup.
    $signup = new stdClass();
    $signup->sid = $values->{$this->aliases['sid']};
    $signup->nid = $values->{$this->aliases['nid']};
    $signup->uid = $values->{$this->aliases['uid']};
    if (!_signup_menu_signup_access($signup, 'edit')) {
      return;
    }

    // If we made it this far, generate the actual link.
    $text = !empty($this->options['text']) ? $this->options['text'] : t('Edit signup');
    $url = "signup/edit/$signup->sid";
    $link_options['query'] = drupal_get_destination();
    return l($text, $url, $link_options);
  }
}

