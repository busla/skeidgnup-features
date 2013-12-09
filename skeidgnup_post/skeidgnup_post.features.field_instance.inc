<?php
/**
 * @file
 * skeidgnup_post.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function skeidgnup_post_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-post-field_post_body'
  $field_instances['node-post-field_post_body'] = array(
    'bundle' => 'post',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Settu inn aðaltexta hér. Athugaðu að þú getur sett inn útdrátt (summary) sem birtist fyrst á forsíðunni. Ef ekki, þá verða fyrstu setningarnar notaðar sem útdráttur.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_post_body',
    'label' => 'Meginmál',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 10,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-post-field_post_category'
  $field_instances['node-post-field_post_category'] = array(
    'bundle' => 'post',
    'default_value' => array(
      0 => array(
        'tid' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'Veldu flokk á færsluna. Athugaðu að þú getur valið fleiri en einn flokk ef það á við.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_post_category',
    'label' => 'Flokkur',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-post-field_post_image'
  $field_instances['node-post-field_post_image'] = array(
    'bundle' => 'post',
    'deleted' => 0,
    'description' => 'Veldu mynd sem á að fylgja færslunni.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'teaser',
        ),
        'type' => 'file_rendered',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'teaser',
        ),
        'type' => 'file_rendered',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_post_image',
    'label' => 'Mynd',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'png jpeg jpg',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 'private',
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'default' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Flokkur');
  t('Meginmál');
  t('Mynd');
  t('Settu inn aðaltexta hér. Athugaðu að þú getur sett inn útdrátt (summary) sem birtist fyrst á forsíðunni. Ef ekki, þá verða fyrstu setningarnar notaðar sem útdráttur.');
  t('Veldu flokk á færsluna. Athugaðu að þú getur valið fleiri en einn flokk ef það á við.');
  t('Veldu mynd sem á að fylgja færslunni.');

  return $field_instances;
}
