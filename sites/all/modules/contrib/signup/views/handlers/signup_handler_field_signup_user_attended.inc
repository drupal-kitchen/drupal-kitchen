<?php
/**
 * Field handler to display the attendance for a signed up user.
 */
class signup_handler_field_signup_user_attended extends views_handler_field {
  function render($values) {
    return theme('signup_attended_text', array('attended' => $values->{$this->field_alias}));
  }
}

