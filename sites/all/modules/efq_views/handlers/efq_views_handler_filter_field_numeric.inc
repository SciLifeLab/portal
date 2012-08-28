<?php
// $Id$

/**
 * Numeric filter for fields.
 */
class efq_views_handler_filter_field_numeric extends efq_views_handler_filter_numeric {
  function option_definition() {
    $options = parent::option_definition();
    $options['delta'] = array('default' => NULL);

    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $form['delta'] = array(
      '#type' => 'textfield',
      '#title' => t('Delta'),
      '#default_value' => $this->options['delta'],
      '#description' => t('Numeric delta group identifier. If provided, only values attached to the same delta are matched. Leave empty to match all values.'),
    );
  }

  function op_simple($column) {
    $value = efq_views_op_prepare($this, $this->value['value'], $delta);
    $this->query->query->fieldCondition($this->definition['field_name'], $column, $value, $this->operator, $delta);
  }

  function op_between($column) {
    $value = efq_views_op_prepare($this, array($this->value['min'], $this->value['max']), $delta);
    $this->query->query->fieldCondition($this->definition['field_name'], $column, $value, "BETWEEN", $delta);
  }
}
