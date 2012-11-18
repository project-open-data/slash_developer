<?php
/**
 * @file slash_developer.pages.inc
 */

/**
 * Landing page for /developer goodies
 */
function slash_developer_home() {
  return t(variable_get('slash_developer_page_body', 'Happy Fun Time'));
}

/**
 * Landing page for /developer/catalog
 */
function slash_developer_catalog() {
  $query = new EntityFieldQuery();

  $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'slash_developer_api')
    ->propertyCondition('status', 1);

  $result = $query->execute();

  if (isset($result['node'])) {
    $nids = array_keys($result['node']);
    $nodes = entity_load('node', $nids);
    return node_view_multiple($nodes);
  }
  else {
    return t("No APIs have been created yet. !link", array('!link' => l(t('Create One?'), 'node/add/slash-developer-api')));
  }
}
