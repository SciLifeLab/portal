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
 * Implements hook_views_api().
 */
function genomics_content_type_order_views_api() {
  return array("version" => "3.0");
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

/**
 * Implements hook_workflow_default_workflows().
 */
function genomics_content_type_order_workflow_default_workflows() {
  $workflows = array();

  // Exported workflow: Project application workflow
  $workflows['Project application workflow'] = array(
    'name' => 'Project application workflow',
    'tab_roles' => '4',
    'options' => 'a:3:{s:16:"comment_log_node";i:0;s:15:"comment_log_tab";i:0;s:13:"name_as_title";i:0;}',
    'states' => array(
      0 => array(
        'state' => '(creation)',
        'weight' => '-50',
        'sysid' => '1',
        'status' => '1',
      ),
      1 => array(
        'state' => 'Preparation',
        'weight' => '-1',
        'sysid' => '0',
        'status' => '1',
      ),
      2 => array(
        'state' => 'Submitted',
        'weight' => '0',
        'sysid' => '0',
        'status' => '1',
      ),
      3 => array(
        'state' => 'Review',
        'weight' => '1',
        'sysid' => '0',
        'status' => '1',
      ),
      4 => array(
        'state' => 'Accepted',
        'weight' => '2',
        'sysid' => '0',
        'status' => '1',
      ),
      5 => array(
        'state' => 'Signed',
        'weight' => '3',
        'sysid' => '0',
        'status' => '1',
      ),
      6 => array(
        'state' => 'Rejected',
        'weight' => '4',
        'sysid' => '0',
        'status' => '1',
      ),
      7 => array(
        'state' => 'Query',
        'weight' => '5',
        'sysid' => '0',
        'status' => '1',
      ),
      8 => array(
        'state' => 'Aborted',
        'weight' => '6',
        'sysid' => '0',
        'status' => '1',
      ),
      9 => array(
        'state' => 'Queued',
        'weight' => '7',
        'sysid' => '0',
        'status' => '1',
      ),
    ),
    'transitions' => array(
      0 => array(
        'roles' => 'workflow_features_author_name,Coordinators',
        'state' => '(creation)',
        'target_state' => 'Preparation',
      ),
      1 => array(
        'roles' => 'workflow_features_author_name,Coordinators',
        'state' => '(creation)',
        'target_state' => 'Submitted',
      ),
      2 => array(
        'roles' => 'Coordinators',
        'state' => '(creation)',
        'target_state' => 'Review',
      ),
      3 => array(
        'roles' => 'Coordinators',
        'state' => '(creation)',
        'target_state' => 'Accepted',
      ),
      4 => array(
        'roles' => 'Coordinators',
        'state' => '(creation)',
        'target_state' => 'Signed',
      ),
      5 => array(
        'roles' => 'Coordinators',
        'state' => '(creation)',
        'target_state' => 'Rejected',
      ),
      6 => array(
        'roles' => 'Coordinators',
        'state' => '(creation)',
        'target_state' => 'Query',
      ),
      7 => array(
        'roles' => 'Coordinators',
        'state' => '(creation)',
        'target_state' => 'Aborted',
      ),
      8 => array(
        'roles' => 'Coordinators',
        'state' => '(creation)',
        'target_state' => 'Queued',
      ),
      9 => array(
        'roles' => 'workflow_features_author_name,Coordinators',
        'state' => 'Preparation',
        'target_state' => 'Submitted',
      ),
      10 => array(
        'roles' => 'Coordinators',
        'state' => 'Preparation',
        'target_state' => 'Review',
      ),
      11 => array(
        'roles' => 'Coordinators',
        'state' => 'Preparation',
        'target_state' => 'Accepted',
      ),
      12 => array(
        'roles' => 'Coordinators',
        'state' => 'Preparation',
        'target_state' => 'Signed',
      ),
      13 => array(
        'roles' => 'Coordinators',
        'state' => 'Preparation',
        'target_state' => 'Rejected',
      ),
      14 => array(
        'roles' => 'Coordinators',
        'state' => 'Preparation',
        'target_state' => 'Query',
      ),
      15 => array(
        'roles' => 'Coordinators',
        'state' => 'Preparation',
        'target_state' => 'Aborted',
      ),
      16 => array(
        'roles' => 'Coordinators',
        'state' => 'Preparation',
        'target_state' => 'Queued',
      ),
      17 => array(
        'roles' => 'Coordinators',
        'state' => 'Submitted',
        'target_state' => 'Review',
      ),
      18 => array(
        'roles' => 'Coordinators',
        'state' => 'Submitted',
        'target_state' => 'Preparation',
      ),
      19 => array(
        'roles' => 'Coordinators',
        'state' => 'Submitted',
        'target_state' => 'Accepted',
      ),
      20 => array(
        'roles' => 'Coordinators',
        'state' => 'Submitted',
        'target_state' => 'Signed',
      ),
      21 => array(
        'roles' => 'Coordinators',
        'state' => 'Submitted',
        'target_state' => 'Rejected',
      ),
      22 => array(
        'roles' => 'Coordinators',
        'state' => 'Submitted',
        'target_state' => 'Query',
      ),
      23 => array(
        'roles' => 'Coordinators',
        'state' => 'Submitted',
        'target_state' => 'Aborted',
      ),
      24 => array(
        'roles' => 'Coordinators',
        'state' => 'Submitted',
        'target_state' => 'Queued',
      ),
      25 => array(
        'roles' => 'Coordinators',
        'state' => 'Review',
        'target_state' => 'Accepted',
      ),
      26 => array(
        'roles' => 'Coordinators',
        'state' => 'Review',
        'target_state' => 'Preparation',
      ),
      27 => array(
        'roles' => 'workflow_features_author_name,Coordinators',
        'state' => 'Review',
        'target_state' => 'Submitted',
      ),
      28 => array(
        'roles' => 'Coordinators',
        'state' => 'Review',
        'target_state' => 'Signed',
      ),
      29 => array(
        'roles' => 'Coordinators',
        'state' => 'Review',
        'target_state' => 'Rejected',
      ),
      30 => array(
        'roles' => 'Coordinators',
        'state' => 'Review',
        'target_state' => 'Query',
      ),
      31 => array(
        'roles' => 'Coordinators',
        'state' => 'Review',
        'target_state' => 'Aborted',
      ),
      32 => array(
        'roles' => 'Coordinators',
        'state' => 'Review',
        'target_state' => 'Queued',
      ),
      33 => array(
        'roles' => 'Coordinators',
        'state' => 'Accepted',
        'target_state' => 'Signed',
      ),
      34 => array(
        'roles' => 'Coordinators',
        'state' => 'Accepted',
        'target_state' => 'Preparation',
      ),
      35 => array(
        'roles' => 'Coordinators',
        'state' => 'Accepted',
        'target_state' => 'Submitted',
      ),
      36 => array(
        'roles' => 'Coordinators',
        'state' => 'Accepted',
        'target_state' => 'Review',
      ),
      37 => array(
        'roles' => 'Coordinators',
        'state' => 'Accepted',
        'target_state' => 'Rejected',
      ),
      38 => array(
        'roles' => 'Coordinators',
        'state' => 'Accepted',
        'target_state' => 'Query',
      ),
      39 => array(
        'roles' => 'Coordinators',
        'state' => 'Accepted',
        'target_state' => 'Aborted',
      ),
      40 => array(
        'roles' => 'Coordinators',
        'state' => 'Accepted',
        'target_state' => 'Queued',
      ),
      41 => array(
        'roles' => 'Coordinators',
        'state' => 'Signed',
        'target_state' => 'Rejected',
      ),
      42 => array(
        'roles' => 'Coordinators',
        'state' => 'Rejected',
        'target_state' => 'Query',
      ),
      43 => array(
        'roles' => 'Coordinators',
        'state' => 'Query',
        'target_state' => 'Aborted',
      ),
      44 => array(
        'roles' => 'Coordinators',
        'state' => 'Aborted',
        'target_state' => 'Queued',
      ),
    ),
    'node_types' => array(
      0 => 'order',
      1 => 'project',
    ),
  );

  return $workflows;
}
