<?php
/**
 * @file
 * ding_frontend.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ding_frontend_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'ding_node_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ding node search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Ding node search';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: List image */
  $handler->display->display_options['fields']['field_list_image']['id'] = 'field_list_image';
  $handler->display->display_options['fields']['field_list_image']['table'] = 'field_data_field_list_image';
  $handler->display->display_options['fields']['field_list_image']['field'] = 'field_list_image';
  $handler->display->display_options['fields']['field_list_image']['label'] = '';
  $handler->display->display_options['fields']['field_list_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_list_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_list_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_list_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_list_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_list_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_list_image']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_list_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_list_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_list_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_list_image']['settings'] = array(
    'image_style' => 'ding_large',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_list_image']['field_api_classes'] = 0;
  /* Field: Content revision: Updated date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['external'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['timestamp']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['timestamp']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['html'] = 0;
  $handler->display->display_options['fields']['timestamp']['element_type'] = 'div';
  $handler->display->display_options['fields']['timestamp']['element_class'] = 'ding-news-timestamp';
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['timestamp']['hide_empty'] = 0;
  $handler->display->display_options['fields']['timestamp']['empty_zero'] = 0;
  $handler->display->display_options['fields']['timestamp']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'short';
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = '';
  $handler->display->display_options['fields']['field_category']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_category']['alter']['text'] = '[field_category]';
  $handler->display->display_options['fields']['field_category']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_category']['alter']['path'] = '[field_category]';
  $handler->display->display_options['fields']['field_category']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_category']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_category']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_category']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_category']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_category']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_category']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_category']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_category']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_category']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_category']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_category']['element_class'] = 'ding-news-category';
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_category']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_category']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_category']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_category']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['field_ding_body']['id'] = 'field_ding_body';
  $handler->display->display_options['fields']['field_ding_body']['table'] = 'field_data_field_ding_body';
  $handler->display->display_options['fields']['field_ding_body']['field'] = 'field_ding_body';
  $handler->display->display_options['fields']['field_ding_body']['label'] = '';
  $handler->display->display_options['fields']['field_ding_body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ding_body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ding_body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ding_body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ding_body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ding_body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ding_body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ding_body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ding_body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ding_body']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['field_ding_body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ding_body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ding_body']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_ding_body']['element_class'] = 'ding-news-teaser';
  $handler->display->display_options['fields']['field_ding_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_body']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_ding_body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ding_body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ding_body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ding_body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_ding_body']['settings'] = array(
    'trim_length' => '200',
  );
  $handler->display->display_options['fields']['field_ding_body']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Search: Search Terms */
  $handler->display->display_options['arguments']['keys']['id'] = 'keys';
  $handler->display->display_options['arguments']['keys']['table'] = 'search_index';
  $handler->display->display_options['arguments']['keys']['field'] = 'keys';
  $handler->display->display_options['arguments']['keys']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['keys']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['keys']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['keys']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['keys']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['keys']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    'und' => 'und',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $translatables['ding_node_search'] = array(
    t('Master'),
    t('Ding node search'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('[field_category]'),
    t('All'),
    t('Content pane'),
    t('View panes'),
  );
  $export['ding_node_search'] = $view;

  return $export;
}
