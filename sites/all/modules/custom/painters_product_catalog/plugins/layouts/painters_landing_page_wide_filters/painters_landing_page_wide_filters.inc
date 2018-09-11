<?php

/**
 * @file
 * Defines a landing page one-column layout.
 */
// Plugin definition.
$plugin = array(
  'title' => t('Landing Page : Slideshow + Wide layout + filters'),
  'category' => t('Painters'),
  'icon' => 'landing.png',
  'theme' => 'painters_landing_page_wide_filters',
  'admin_css' => 'painters-landing-page-admin.css',
  'regions' => array(
    'content' => t('Full Width slideshow'),
    'top_wide' => t('Top container'),
    'top_box_1' => t('Top Box 1'),
    'top_box_2' => t('Top Box 2'),
    'top_box_3' => t('Top Box 3'),
    'top_box_4' => t('Top Box 4'),
    'mid_wide' => t('Middle container'),
    'mid_box_1' => t('Middle Box 1'),
    'mid_box_2' => t('Middle Box 2'),
    'mid_box_3' => t('Middle Box 3'),
    'mid_box_4' => t('Middle Box 4'),
    'bot_wide' => t('Bottom container'),
    'bot_box_1' => t('Bottom Box 1'),
    'bot_box_2' => t('Bottom Box 2'),
    'bot_box_3' => t('Bottom Box 3'),
    'bot_box_4' => t('Bottom Box 4'),
    'bot' => t('Bottom'),
  ),
);

/**
 *
 * @param <type> $vars
 */
function template_preprocess_painters_landing_page_wide_filters(&$vars) {
  $display = $vars['display'];

  $top_box_rows = array();
  $mid_box_rows = array();
  $rendered_panes = $display->renderer_handler->display->content;
  $rendered_content = $display->renderer_handler->rendered['panes'];

  $panels = $vars['display']->panels;
  $top_box_count = 0;
  $bot_box_count = 0;
  $mid_box_count = 0;
  foreach ($panels as $region => $content) {
    $key = substr($region, 0, 3);
    $key_long = substr($region, 0, 7);
    if ($key == 'top' && $region != 'top_wide') {
      $top_box_count++;
    }
    elseif ($key == 'bot') {
      $bot_box_count++;
    }
    elseif ($key == 'mid' && $key_long == 'mid_box') {
      $mid_box_count++;
    }
  }

  foreach ($panels as $region => $panel_content) {
    $key = substr($region, 0, 3);
    if ($key == 'top') {
      foreach ($panel_content as $pane_counter => $pane_id) {
        $top_box_rows[$pane_counter][$region] = $rendered_content[$pane_id];
      }
    }
    if ($key == 'mid') {
      foreach ($panel_content as $pane_counter => $pane_id) {
        $mid_box_rows[$pane_counter][$region] = $rendered_content[$pane_id];
      }
    }
  }
  $vars['top_boxes'] = $top_box_rows;
  $vars['mid_boxes'] = $mid_box_rows;

  if (arg(0) == 'admin' || arg(2) == 'panelizer') {
    $vars['layout_classes']['top'] = 'col-xs-3';
    $vars['layout_classes']['mid'] = 'col-xs-3';
    $vars['layout_classes']['bot'] = 'col-xs-3';
    $vars['top_boxes'] = array();
    $vars['mid_boxes'] = array();
  }
  else {
    $vars['layout_classes']['top'] = _get_painters_landaing_page_filter_class($top_box_count, 'top');
    $vars['layout_classes']['mid'] = _get_painters_landaing_page_filter_class($mid_box_count, 'mid');
    $vars['layout_classes']['bot'] = _get_painters_landaing_page_filter_class($bot_box_count, 'bot');
  }

  drupal_add_css(drupal_get_path('module', 'painters_product_catalog') . '/plugins/layouts/painters_landing_page_wide_filter/landing-page.css');
}

/**
 *
 * @param <type> $col_count
 * @param <type> $key
 *
 * @return string
 */
function _get_painters_landaing_page_filter_class($col_count = 1, $key = 'top') {
  $class = '';
  switch ($col_count) {
    case 1:
      $class = 'col-md-12';
      break;

    case 2:
      $class = 'col-sm-6 col-md-6';
      break;

    case 3:
      $class = 'col-sm-6 col-md-4';
      break;

    case 4:
      $class = 'col-sm-6 col-md-3 col-lg-3';
      break;
  }
  if ($key == 'bot') {
    $class .= ' col-xs-6';
  }
  return $class;
}

