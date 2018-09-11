<?php

/**
 * @file
 * feature_painters_faq..inc
 */

/**
 * Implements hook_multifield_default_multifield().
 */
function feature_painters_faq_multifield_default_multifield() {
  $export = array();

  $multifield = new stdClass ();
  $multifield->disabled = FALSE; /* Edit this to true to make a default multifield disabled initially */
  $multifield->machine_name = 'field_faq_question_answers';
  $multifield->label = 'field_faq_question_answers';
  $multifield->description = '';
  $export ['field_faq_question_answers'] = $multifield;

  return $export;
}
