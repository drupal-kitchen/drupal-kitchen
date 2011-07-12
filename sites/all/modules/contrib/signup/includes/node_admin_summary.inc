<?php
/**
 * @file
 * Code related to the signup administration tab on each node.
 */

/**
 * @todo Please document this function.
 * @see http://drupal.org/node/1354
 */
function signup_node_admin_summary_form($form, &$form_state, $node) {
  if (isset($node->signup_effective_total) && $node->signup_close_signup_limit && $node->signup_effective_total >= $node->signup_close_signup_limit) {
    $form['status'] = array(
      '#type' => 'item',
      '#title' => t('Signups are'),
      '#value' => t('Closed (limit reached)'),
    );
  }
  else {
    $form['status'] = array(
      '#type' => 'select',
      '#title' => t('Signups are'),
      '#options' => array(
        0 => t('Closed'),
        1 => t('Open'),
      ),
      '#default_value' => $node->signup_status,
    );
    $form['submit'] = array(
      '#type' => 'submit',
      '#value' => t('Update'),
      '#submit' => array('signup_node_admin_summary_form_submit'),
    );
  }
  $form['total_signups'] = array(
    '#type' => 'item',
    '#title' => t('Total signups'),
    '#markup' => isset($node->signup_total) ? $node->signup_total : 0,
  );
  $form['slots_used'] = array(
    '#type' => 'item',
    '#title' => t('Signup slots used'),
    '#markup' => isset($node->signup_effective_total) ? $node->signup_effective_total : 0,
  );
  $form['limit'] = array(
    '#type' => 'item',
    '#title' => t('Signup limit'),
    '#markup' => l($node->signup_close_signup_limit, 'node/' . $node->nid . '/signups/settings', array('fragment' => 'signup-limit')),
  );
  $form['nid'] = array(
    '#type' => 'value',
    '#value' => $node->nid,
  );
  return $form;
}

/**
 * @todo Please document this function.
 * @see http://drupal.org/node/1354
 */
function signup_node_admin_summary_form_submit($form, &$form_state) {
  $nid = $form_state['values']['nid'];
  $node = node_load($nid);
  $limit_status = 0;
  if (isset($form_state['values']['limit']) && ($form_state['values']['limit'] != $node->signup_close_signup_limit)) {
    // TODO Please review the conversion of this statement to the D7 database API syntax.
    /* db_query("UPDATE {signup} SET close_signup_limit = %d WHERE nid = %d", $form_state['values']['limit'], $nid) */
    db_update('signup')
      ->fields(array(
          'close_signup_limit' => $form_state['values']['limit'],
        ))
      ->condition('nid', $nid)
      ->execute();
    $node->signup_close_signup_limit = $form_state['values']['limit'];
    $limit_status = _signup_check_limit($node, 'limit');
  }

  // Only consider the form's status value if the signup limit didn't
  // touch the status already.
  if (!$limit_status && isset($form_state['values']['status']) && ($form_state['values']['status'] != $node->signup_status)) {
    if ($form_state['values']['status']) {
      signup_open_signup($nid);
      drupal_set_message(t('Signups opened for !title.', array('!title' => l($node->title, "node/$node->nid"))));
    }
    else {
      signup_close_signup($nid);
      drupal_set_message(t('Signups closed for !title.', array('!title' => l($node->title, "node/$node->nid"))));
    }
  }
}

