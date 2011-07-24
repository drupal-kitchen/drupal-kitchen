<?php
/**
 * Filter signups based on if the user is anonymous or authenticated.
 */
class signup_handler_filter_signup_user_authenticated extends views_handler_filter_boolean_operator {
  function get_value_options() {
    $this->value_options = array(
      1 => t('Authenticated'),
      0 => t('Anonymous'),
    );
  }

  function query() {
    $this->ensure_my_table();
    $this->query->add_where($this->options['group'], "$this->table_alias.$this->real_field " . ($this->value ? '!= ' : '= ') . "0");
  }
}

