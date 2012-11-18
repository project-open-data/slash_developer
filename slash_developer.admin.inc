<?php
/**
 * @file slash_developer.admin.inc
 */

/**
 * Landing page for /developer admin page
 */
function slash_developer_settings() {
  $form['enable'] = array(
    '#type' => 'checkbox',
    '#title' => 'Enable /developer menu item',
    '#description' => 'Turns on the /developer menu item.',
    '#default_value' => variable_get('slash_developer_page_enabled', 0),
  );
  $form['pagebody'] = array(
    '#type' => 'textarea',
    '#title' => t('Page body'),
    '#default_value' => variable_get('slash_developer_page_body', t('Happy Fun Time')),
    '#rows' => 10,
    '#description' => t('Page body for the /developer page.'),
  );
  $form['submit'] = array(
    '#type'  => 'submit',
    '#value' => t('Save settings'),
  );
  $form['reset'] = array(
    '#type'  => 'submit',
    '#value' => t('Reset'),
  );
  return $form;
}
function slash_developer_settings_submit($form, &$form_state) {
  variable_set('slash_developer_page_enabled', $form_state['values']['enable']);
  variable_set('slash_developer_page_body', $form_state['values']['pagebody']);
  menu_rebuild();
}