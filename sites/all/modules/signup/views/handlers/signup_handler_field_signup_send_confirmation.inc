<?php
/**
 * Field handler to display if confirmation emails are enabled for a node.
 */
class signup_handler_field_signup_send_confirmation extends views_handler_field {
  function render($values) {
    return ($values->{$this->field_alias} == 0) ? t('Disabled') : t('Enabled');
  }
}

