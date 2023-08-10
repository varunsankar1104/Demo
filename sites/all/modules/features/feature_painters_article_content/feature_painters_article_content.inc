<?php

/**
 * @file
 * feature_painters_article_content..inc
 */

/**
 * Implements hook_multifield_default_multifield().
 */
function feature_painters_article_content_multifield_default_multifield() {
  $export = array();

  $multifield = new stdClass ();
  $multifield->disabled = FALSE; /* Edit this to true to make a default multifield disabled initially */
  $multifield->machine_name = 'field_painters_article';
  $multifield->label = 'field_painters_article';
  $multifield->description = '';
  $export ['field_painters_article'] = $multifield;

  return $export;
}
