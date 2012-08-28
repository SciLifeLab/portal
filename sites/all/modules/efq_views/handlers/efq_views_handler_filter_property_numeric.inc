<?php
// $Id$

/**
 * Filter handler for numeric properties.
 */
class efq_views_handler_filter_property_numeric extends efq_views_handler_filter_numeric {
  function op_simple($column) {
    $this->query->query->propertyCondition($column, efq_views_op_prepare($this, $this->value['value']), $this->operator);
  }

  function op_between($column) {
    $this->query->query->propertyCondition($column, efq_views_op_prepare($this, array($this->value['min'], $this->value['max'])), "BETWEEN");
  }
}
