<?php
/**
 * @file
 * slash_developer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slash_developer_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function slash_developer_node_info() {
  $items = array(
    'slash_developer_api' => array(
      'name' => t('Developer API'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
