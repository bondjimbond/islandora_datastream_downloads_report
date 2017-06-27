<?php
/**
 * @file
 * islandora_datastream_downloads_report.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function islandora_datastream_downloads_report_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'Downloads';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_usage_stats_object_ds_access_log';
  $view->human_name = 'Downloads';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'label',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'pid' => 'pid',
    'label' => 'label',
    'id' => 'id',
    'ds_id' => 'ds_id',
    'time' => 'time',
    'id_2' => 'id_2',
    'ds_label' => 'ds_label',
  );
  $handler->display->display_options['style_options']['default'] = 'label';
  $handler->display->display_options['style_options']['info'] = array(
    'pid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'label' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ds_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'time' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'id_2' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ds_label' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Islandora Usage Stats: Datastream */
  $handler->display->display_options['relationships']['ds_id']['id'] = 'ds_id';
  $handler->display->display_options['relationships']['ds_id']['table'] = 'islandora_usage_stats_object_ds_access_log';
  $handler->display->display_options['relationships']['ds_id']['field'] = 'ds_id';
  /* Relationship: Islandora Usage Stats: Object */
  $handler->display->display_options['relationships']['pid_id']['id'] = 'pid_id';
  $handler->display->display_options['relationships']['pid_id']['table'] = 'islandora_usage_stats_datastreams';
  $handler->display->display_options['relationships']['pid_id']['field'] = 'pid_id';
  $handler->display->display_options['relationships']['pid_id']['relationship'] = 'ds_id';
  /* Field: Islandora Usage Stats: PID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'islandora_usage_stats_objects';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['relationship'] = 'pid_id';
  $handler->display->display_options['fields']['pid']['label'] = '';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['pid']['element_type'] = 'h2';
  $handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;
  /* Field: Islandora Usage Stats: Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'islandora_usage_stats_objects';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['relationship'] = 'pid_id';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['label']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['label']['alter']['text'] = '[pid] - [label]';
  $handler->display->display_options['fields']['label']['element_type'] = 'h1';
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* Field: Islandora Usage Stats: Log ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'islandora_usage_stats_object_ds_access_log';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  /* Field: Islandora Usage Stats: DS ID */
  $handler->display->display_options['fields']['ds_id']['id'] = 'ds_id';
  $handler->display->display_options['fields']['ds_id']['table'] = 'islandora_usage_stats_object_ds_access_log';
  $handler->display->display_options['fields']['ds_id']['field'] = 'ds_id';
  $handler->display->display_options['fields']['ds_id']['label'] = '';
  $handler->display->display_options['fields']['ds_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['ds_id']['element_label_colon'] = FALSE;
  /* Field: Islandora Usage Stats: Time */
  $handler->display->display_options['fields']['time']['id'] = 'time';
  $handler->display->display_options['fields']['time']['table'] = 'islandora_usage_stats_object_ds_access_log';
  $handler->display->display_options['fields']['time']['field'] = 'time';
  $handler->display->display_options['fields']['time']['date_format'] = 'long';
  $handler->display->display_options['fields']['time']['second_date_format'] = 'long';
  /* Field: Islandora Usage Stats: Datastream ID */
  $handler->display->display_options['fields']['id_2']['id'] = 'id_2';
  $handler->display->display_options['fields']['id_2']['table'] = 'islandora_usage_stats_datastreams';
  $handler->display->display_options['fields']['id_2']['field'] = 'id';
  $handler->display->display_options['fields']['id_2']['relationship'] = 'ds_id';
  $handler->display->display_options['fields']['id_2']['label'] = '';
  $handler->display->display_options['fields']['id_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id_2']['element_label_colon'] = FALSE;
  /* Field: Islandora Usage Stats: DS Label */
  $handler->display->display_options['fields']['ds_label']['id'] = 'ds_label';
  $handler->display->display_options['fields']['ds_label']['table'] = 'islandora_usage_stats_datastreams';
  $handler->display->display_options['fields']['ds_label']['field'] = 'ds_label';
  $handler->display->display_options['fields']['ds_label']['relationship'] = 'ds_id';
  /* Filter criterion: Islandora Usage Stats: Time */
  $handler->display->display_options['filters']['time']['id'] = 'time';
  $handler->display->display_options['filters']['time']['table'] = 'islandora_usage_stats_object_ds_access_log';
  $handler->display->display_options['filters']['time']['field'] = 'time';
  $handler->display->display_options['filters']['time']['operator'] = 'between';
  $handler->display->display_options['filters']['time']['value']['min'] = '2017-01-02';
  $handler->display->display_options['filters']['time']['value']['max'] = '2017-06-17';
  $handler->display->display_options['filters']['time']['value']['value'] = '2017-01-01';
  $handler->display->display_options['filters']['time']['exposed'] = TRUE;
  $handler->display->display_options['filters']['time']['expose']['operator_id'] = 'time_op';
  $handler->display->display_options['filters']['time']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['time']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['time']['expose']['operator'] = 'time_op';
  $handler->display->display_options['filters']['time']['expose']['identifier'] = 'time';
  $handler->display->display_options['filters']['time']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['time']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['time']['date_fields'] = array(
    'islandora_usage_stats_object_ds_access_log.time' => 'islandora_usage_stats_object_ds_access_log.time',
  );
  /* Filter criterion: Islandora Usage Stats: DS Label */
  $handler->display->display_options['filters']['ds_label']['id'] = 'ds_label';
  $handler->display->display_options['filters']['ds_label']['table'] = 'islandora_usage_stats_datastreams';
  $handler->display->display_options['filters']['ds_label']['field'] = 'ds_label';
  $handler->display->display_options['filters']['ds_label']['relationship'] = 'ds_id';
  $handler->display->display_options['filters']['ds_label']['operator'] = '!=';
  $handler->display->display_options['filters']['ds_label']['value'] = 'MODS';
  /* Filter criterion: Islandora Usage Stats: DS Label */
  $handler->display->display_options['filters']['ds_label_1']['id'] = 'ds_label_1';
  $handler->display->display_options['filters']['ds_label_1']['table'] = 'islandora_usage_stats_datastreams';
  $handler->display->display_options['filters']['ds_label_1']['field'] = 'ds_label';
  $handler->display->display_options['filters']['ds_label_1']['relationship'] = 'ds_id';
  $handler->display->display_options['filters']['ds_label_1']['operator'] = '!=';
  $handler->display->display_options['filters']['ds_label_1']['value'] = 'DC';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'download_stats';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Islandora Usage Stats: PID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'islandora_usage_stats_objects';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['relationship'] = 'pid_id';
  $handler->display->display_options['fields']['pid']['element_type'] = 'h2';
  $handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;
  /* Field: Islandora Usage Stats: Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'islandora_usage_stats_objects';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['relationship'] = 'pid_id';
  $handler->display->display_options['fields']['label']['label'] = 'Title';
  $handler->display->display_options['fields']['label']['alter']['text'] = '[pid] - [label]';
  $handler->display->display_options['fields']['label']['element_type'] = 'h1';
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* Field: Islandora Usage Stats: Log ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'islandora_usage_stats_object_ds_access_log';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  /* Field: Islandora Usage Stats: DS ID */
  $handler->display->display_options['fields']['ds_id']['id'] = 'ds_id';
  $handler->display->display_options['fields']['ds_id']['table'] = 'islandora_usage_stats_object_ds_access_log';
  $handler->display->display_options['fields']['ds_id']['field'] = 'ds_id';
  $handler->display->display_options['fields']['ds_id']['label'] = '';
  $handler->display->display_options['fields']['ds_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['ds_id']['element_label_colon'] = FALSE;
  /* Field: Islandora Usage Stats: Time */
  $handler->display->display_options['fields']['time']['id'] = 'time';
  $handler->display->display_options['fields']['time']['table'] = 'islandora_usage_stats_object_ds_access_log';
  $handler->display->display_options['fields']['time']['field'] = 'time';
  $handler->display->display_options['fields']['time']['date_format'] = 'long';
  $handler->display->display_options['fields']['time']['second_date_format'] = 'long';
  /* Field: Islandora Usage Stats: Datastream ID */
  $handler->display->display_options['fields']['id_2']['id'] = 'id_2';
  $handler->display->display_options['fields']['id_2']['table'] = 'islandora_usage_stats_datastreams';
  $handler->display->display_options['fields']['id_2']['field'] = 'id';
  $handler->display->display_options['fields']['id_2']['relationship'] = 'ds_id';
  $handler->display->display_options['fields']['id_2']['label'] = '';
  $handler->display->display_options['fields']['id_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id_2']['element_label_colon'] = FALSE;
  /* Field: Islandora Usage Stats: DS Label */
  $handler->display->display_options['fields']['ds_label']['id'] = 'ds_label';
  $handler->display->display_options['fields']['ds_label']['table'] = 'islandora_usage_stats_datastreams';
  $handler->display->display_options['fields']['ds_label']['field'] = 'ds_label';
  $handler->display->display_options['fields']['ds_label']['relationship'] = 'ds_id';
  $handler->display->display_options['path'] = 'download_stats/downloads.csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['Downloads'] = $view;

  return $export;
}
