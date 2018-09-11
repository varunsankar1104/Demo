<?php

/**
 * @file
 * feature_painters_article_content.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function feature_painters_article_content_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'advice_and_support';
  $ds_view_mode->label = 'Title-Teaser';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['advice_and_support'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'article_section_workspace';
  $ds_view_mode->label = 'Article Section Workspace';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'multifield' => 'multifield',
  );
  $export['article_section_workspace'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'article_title';
  $ds_view_mode->label = 'Title';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['article_title'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'collapsible_image_sections';
  $ds_view_mode->label = 'Collapsible Image Sections';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['collapsible_image_sections'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'image_left';
  $ds_view_mode->label = 'Image left';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['image_left'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'image_right';
  $ds_view_mode->label = 'Image Right';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['image_right'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'image_top';
  $ds_view_mode->label = 'Image Top';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['image_top'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'landing_page_centered_block';
  $ds_view_mode->label = 'Image Top-Category-Title';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['landing_page_centered_block'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'landing_page_image_left';
  $ds_view_mode->label = 'Section blocks';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['landing_page_image_left'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'landing_page_image_right';
  $ds_view_mode->label = 'Image Right-Category-Title-Body';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['landing_page_image_right'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'landing_page_top_block';
  $ds_view_mode->label = 'Top wide image-Title';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['landing_page_top_block'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'planet_posible_image_top';
  $ds_view_mode->label = 'Image Top-Title-Teaser-Button';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['planet_posible_image_top'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'planet_posible_top_block';
  $ds_view_mode->label = 'Title-Body-Button';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['planet_posible_top_block'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'planet_possible_top_wide_image';
  $ds_view_mode->label = 'Top wide Image';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['planet_possible_top_wide_image'] = $ds_view_mode;

  return $export;
}
