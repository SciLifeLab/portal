<?php

/**
 * @file
 * Hooks provided by the workflow module.
 */

/**
 * Implements hook_workflow().
 *
 * @param $op
 *   The current workflow operation: 'transition pre' or 'transition post'.
 * @param $old_state
 *   The state ID of the current state.
 * @param $new_state
 *   The state ID of the new state.
 * @param $node
 *   The node whose workflow state is changing.
 */
function hook_workflow($op, $old_state, $new_state, $node) {
  switch ($op) {
    case 'transition pre':
      // The workflow module does nothing during this operation.
      // But your module's Implements the workflow hook could
      // return FALSE here and veto the transition.
      break;
    case 'transition post':
      break;
    case 'transition delete':
      break;
  }
}