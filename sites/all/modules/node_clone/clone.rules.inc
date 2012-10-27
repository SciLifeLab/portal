<?php

/**
 * @file
 * Rules extensions for Node Clone, allowing cloning a node as an action.
 */
// implementation of 'hook_rules_event_info'
// required to let Rules know about a new 'clone node' event
function clone_rules_event_info() {
$items = array(
'node_clone' => array(
'label' => t('After cloning a node'),
'group' => t('Node'),
'variables' => array(
'cloned_node' => array('type' => 'node', 'label' => t('The cloned node')),
'original_node' => array('type' => 'node', 'label' => t('The original node')),
),
),
);
return $items;
}





/**
 * Implements hook_rules_action_info(). 
 */
function clone_rules_action_info() {
  $actions = array(
    'clone_action_node_clone' => array(
      'label' => t('Clone a node'),
      'group' => t('Node'),
      'parameter' => array(
        'node' => array(
          'type' => 'node',
          'label' => t('Node to clone'),
        ),
      ),
      'provides' => array(
        'clone' => array(
          'type' => 'node',
          'label' => t('Cloned node'),
        ),
      ),
    ),
  );
  return $actions;
}

/**
 * Action callback for cloning a node.
 * @param $node
 *   The node to clone.
 */
function clone_action_node_clone($node) {
  include_once drupal_get_path('module', 'clone') . '/clone.pages.inc';
  $new_nid = clone_node_save($node->nid);
  $new_node = entity_load_single('node', $new_nid);
  return array(
    'clone' => $new_node,
  );
}
