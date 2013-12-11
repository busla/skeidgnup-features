<?php
/**
 * @file
 * skeidgnup_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function skeidgnup_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function skeidgnup_settings_image_default_styles() {
  $styles = array();

  // Exported image style: wide_slides.
  $styles['wide_slides'] = array(
    'name' => 'wide_slides',
    'label' => 'Wide slides (1200 x 280)',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1200,
          'height' => 280,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
