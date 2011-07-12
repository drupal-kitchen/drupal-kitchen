<?php
/**
 * Filter signups based on if the user attended or not.
 */
class signup_handler_filter_signup_user_attended extends views_handler_filter_boolean_operator {
  function get_value_options() {
    $this->value_options = array(
      1 => t('Attended'),
      0 => t('Did not attend'),
    );
  }
}

