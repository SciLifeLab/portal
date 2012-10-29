<?php
/**
 * @file
 * genomics_content_type_order.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function genomics_content_type_order_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function genomics_content_type_order_node_info() {
  $items = array(
    'order' => array(
      'name' => t('Order'),
      'base' => 'node_content',
      'description' => t('You can add several orders to a project. '),
      'has_title' => '1',
      'title_label' => t('Order name'),
      'help' => '',
    ),
  );
  return $items;
}
