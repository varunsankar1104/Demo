<?php

/**
 * @file
 * feature_painters_color_tools.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function feature_painters_color_tools_taxonomy_default_vocabularies() {
  return array(
    'color_tools_audience_' => array(
      'name' => 'Color Tools Audience',
      'machine_name' => 'color_tools_audience_',
      'description' => 'Color Tools Target Audience ',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme'
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title'
          )
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment'
          )
        )
      )
    ),
    'request_type' => array(
      'name' => 'Request Type',
      'machine_name' => 'request_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 4,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme'
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title'
          )
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment'
          )
        )
      )
    )
  );
}
