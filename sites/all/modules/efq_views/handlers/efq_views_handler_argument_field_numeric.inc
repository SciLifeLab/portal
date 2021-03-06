<?php
// $Id$

/**
 * Numeric argument handler for fields.
 */
class efq_views_handler_argument_field_numeric extends views_handler_argument_numeric {
  function query() {
    if (!empty($this->options['break_phrase'])) {
      views_break_phrase($this->argument, $this);
    }
    else {
      $this->value = array($this->argument);
    }

    if (count($this->value) > 1) {
      $operator = empty($this->options['not']) ? 'IN' : 'NOT IN';
      $this->query->query->fieldCondition($this->definition['field_name'], $this->real_field, efq_views_op_prepare($this, $this->value), $operator);
    }
    else {
      $operator = empty($this->options['not']) ? '=' : '<>';
      $this->query->query->fieldCondition($this->definition['field_name'], $this->real_field, efq_views_op_prepare($this, $this->argument), $operator);
    }
  }
}
