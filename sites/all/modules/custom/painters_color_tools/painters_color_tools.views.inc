<?php

/**
 * @file
 * painters_color_tools.views.inc
 */

/**
 * Implements hook_views_query_alter().
 * Here removing big block NID from color_tools_list view
 * big will be added from view attachment
 */
function painters_color_tools_views_query_alter(&$view, &$query) {
  if ($view->name == 'color_tools_overview' && $view->current_display == 'color_tools_list' && variable_get('color_tools_template') == 'big_small_boxes') {
    $get_color_tool_big_block_nid = _get_big_block_color_tool_nid();
    $query->add_where(1, 'node.nid', array(
        $get_color_tool_big_block_nid,
      ), 'NOT IN');
  }
}

