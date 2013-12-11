<?php
/**
 * @file
 * skeidgnup_post.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function skeidgnup_post_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'skeidgnup_meetings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Fundargerðir';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Fundargerðir';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_post_attachment' => 'field_post_attachment',
    'field_post_committee' => 'field_post_committee',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_post_attachment' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_post_committee' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Viðhengi */
  $handler->display->display_options['fields']['field_post_attachment']['id'] = 'field_post_attachment';
  $handler->display->display_options['fields']['field_post_attachment']['table'] = 'field_data_field_post_attachment';
  $handler->display->display_options['fields']['field_post_attachment']['field'] = 'field_post_attachment';
  $handler->display->display_options['fields']['field_post_attachment']['label'] = '';
  $handler->display->display_options['fields']['field_post_attachment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_post_attachment']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_post_attachment']['delta_offset'] = '0';
  /* Field: Content: Nefnd */
  $handler->display->display_options['fields']['field_post_committee']['id'] = 'field_post_committee';
  $handler->display->display_options['fields']['field_post_committee']['table'] = 'field_data_field_post_committee';
  $handler->display->display_options['fields']['field_post_committee']['field'] = 'field_post_committee';
  $handler->display->display_options['fields']['field_post_committee']['label'] = '';
  $handler->display->display_options['fields']['field_post_committee']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'post' => 'post',
  );
  /* Filter criterion: Content: Flokkur (field_post_category) */
  $handler->display->display_options['filters']['field_post_category_tid']['id'] = 'field_post_category_tid';
  $handler->display->display_options['filters']['field_post_category_tid']['table'] = 'field_data_field_post_category';
  $handler->display->display_options['filters']['field_post_category_tid']['field'] = 'field_post_category_tid';
  $handler->display->display_options['filters']['field_post_category_tid']['value'] = array(
    9 => '9',
  );
  $handler->display->display_options['filters']['field_post_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_post_category_tid']['vocabulary'] = 'tax_category';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $export['skeidgnup_meetings'] = $view;

  $view = new view();
  $view->name = 'skeidgnup_news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Fréttir';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Fréttir';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Meginmál */
  $handler->display->display_options['fields']['field_post_body']['id'] = 'field_post_body';
  $handler->display->display_options['fields']['field_post_body']['table'] = 'field_data_field_post_body';
  $handler->display->display_options['fields']['field_post_body']['field'] = 'field_post_body';
  $handler->display->display_options['fields']['field_post_body']['label'] = '';
  $handler->display->display_options['fields']['field_post_body']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['field_post_body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['field_post_body']['alter']['more_link_text'] = 'lesa meira';
  $handler->display->display_options['fields']['field_post_body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_post_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_post_body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_post_body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: Mynd */
  $handler->display->display_options['fields']['field_post_image']['id'] = 'field_post_image';
  $handler->display->display_options['fields']['field_post_image']['table'] = 'field_data_field_post_image';
  $handler->display->display_options['fields']['field_post_image']['field'] = 'field_post_image';
  $handler->display->display_options['fields']['field_post_image']['label'] = '';
  $handler->display->display_options['fields']['field_post_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_post_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_post_image']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_post_image']['settings'] = array(
    'file_view_mode' => 'teaser',
  );
  /* Field: Content: Flokkur */
  $handler->display->display_options['fields']['field_post_category']['id'] = 'field_post_category';
  $handler->display->display_options['fields']['field_post_category']['table'] = 'field_data_field_post_category';
  $handler->display->display_options['fields']['field_post_category']['field'] = 'field_post_category';
  $handler->display->display_options['fields']['field_post_category']['label'] = '';
  $handler->display->display_options['fields']['field_post_category']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'post' => 'post',
  );
  /* Filter criterion: Content: Flokkur (field_post_category) */
  $handler->display->display_options['filters']['field_post_category_tid']['id'] = 'field_post_category_tid';
  $handler->display->display_options['filters']['field_post_category_tid']['table'] = 'field_data_field_post_category';
  $handler->display->display_options['filters']['field_post_category_tid']['field'] = 'field_post_category_tid';
  $handler->display->display_options['filters']['field_post_category_tid']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_post_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_post_category_tid']['vocabulary'] = 'tax_category';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['skeidgnup_news'] = $view;

  return $export;
}
