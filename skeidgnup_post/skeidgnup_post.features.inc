<?php
/**
 * @file
 * skeidgnup_post.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function skeidgnup_post_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function skeidgnup_post_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function skeidgnup_post_node_info() {
  $items = array(
    'post' => array(
      'name' => t('Færsla'),
      'base' => 'node_content',
      'description' => t('Færslur geta verið fjölbreytilegar. Áður en þú byrjar að skrifa skaltu líta á flokkana og velja viðeigandi flokk fyrir textann.'),
      'has_title' => '1',
      'title_label' => t('Titill'),
      'help' => t('Athugaðu að velja þarf flokk fyrir færsluna.'),
    ),
  );
  return $items;
}
