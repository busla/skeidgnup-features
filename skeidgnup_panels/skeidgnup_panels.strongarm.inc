<?php
/**
 * @file
 * skeidgnup_panels.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function skeidgnup_panels_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_page_manager_pages';
  $strongarm->value = array();
  $export['default_page_manager_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_defaults';
  $strongarm->value = array(
    'archive' => FALSE,
    'taxonomy_term' => TRUE,
  );
  $export['views_defaults'] = $strongarm;

  return $export;
}
