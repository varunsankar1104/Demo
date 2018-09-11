<?php

/**
 * @file
 * feature_painters_seo.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function feature_painters_seo_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'color-tools';
  $context->description = '';
  $context->tag = 'Metatag';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'colours/tools' => 'colours/tools',
      ),
    ),
  );
  $context->reactions = array(
    'metatag_context_reaction' => array(
      'metatags' => array(
        'und' => array(
          'itemtype' => array(
            'value' => array(
              'select' => '',
              'other' => '',
            ),
          ),
          'og:type' => array(
            'value' => array(
              'other' => '',
            ),
          ),
        ),
      ),
      'metatag_admin' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Metatag');
  $export['color-tools'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'color_search';
  $context->description = '';
  $context->tag = 'Metatag';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'colours/search' => 'colours/search',
      ),
    ),
  );
  $context->reactions = array(
    'metatag_context_reaction' => array(
      'metatags' => array(
        'und' => array(
          'itemtype' => array(
            'value' => array(
              'select' => '',
              'other' => '',
            ),
          ),
          'og:type' => array(
            'value' => array(
              'other' => '',
            ),
          ),
        ),
      ),
      'metatag_admin' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Metatag');
  $export['color_search'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'colours';
  $context->description = '';
  $context->tag = 'Metatag';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'colours' => 'colours',
        'colours/*' => 'colours/*',
      ),
    ),
  );
  $context->reactions = array(
    'metatag_context_reaction' => array(
      'metatags' => array(
        'und' => array(
          'robots' => array(
            'value' => array(
              'index' => 'index',
              'follow' => 'follow',
              'noindex' => 0,
              'nofollow' => 0,
              'noarchive' => 0,
              'nosnippet' => 0,
              'noodp' => 0,
              'noydir' => 0,
              'noimageindex' => 0,
              'notranslate' => 0,
            ),
          ),
        ),
      ),
      'metatag_admin' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Metatag');
  $export['colours'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'colours_collections';
  $context->description = '';
  $context->tag = 'Metatag';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'colours/collections' => 'colours/collections',
      ),
    ),
  );
  $context->reactions = array(
    'metatag_context_reaction' => array(
      'metatags' => array(
        'und' => array(
          'itemtype' => array(
            'value' => array(
              'select' => '',
              'other' => '',
            ),
          ),
          'og:type' => array(
            'value' => array(
              'other' => '',
            ),
          ),
        ),
      ),
      'metatag_admin' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Metatag');
  $export['colours_collections'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'product_search';
  $context->description = '';
  $context->tag = 'Metatag';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'products/search' => 'products/search',
      ),
    ),
  );
  $context->reactions = array(
    'metatag_context_reaction' => array(
      'metatags' => array(
        'und' => array(
          'itemtype' => array(
            'value' => array(
              'select' => '',
              'other' => '',
            ),
          ),
          'og:type' => array(
            'value' => array(
              'other' => '',
            ),
          ),
        ),
      ),
      'metatag_admin' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Metatag');
  $export['product_search'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search';
  $context->description = '';
  $context->tag = 'Metatag';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search' => 'search',
      ),
    ),
  );
  $context->reactions = array(
    'metatag_context_reaction' => array(
      'metatags' => array(
        'und' => array(
          'itemtype' => array(
            'value' => array(
              'select' => '',
              'other' => '',
            ),
          ),
          'og:type' => array(
            'value' => array(
              'other' => '',
            ),
          ),
        ),
      ),
      'metatag_admin' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Metatag');
  $export['search'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'workspace_detail';
  $context->description = '';
  $context->tag = 'Metatag';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'workspace/detail/*' => 'workspace/detail/*',
      ),
    ),
  );
  $context->reactions = array(
    'metatag_context_reaction' => array(
      'metatags' => array(
        'und' => array(
          'itemtype' => array(
            'value' => array(
              'select' => '',
              'other' => '',
            ),
          ),
          'og:type' => array(
            'value' => array(
              'other' => '',
            ),
          ),
        ),
      ),
      'metatag_admin' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Metatag');
  $export['workspace_detail'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'workspace';
  $context->description = '';
  $context->tag = 'Metatag';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'workspace' => 'workspace',
      ),
    ),
  );
  $context->reactions = array(
    'metatag_context_reaction' => array(
      'metatags' => array(
        'und' => array(
          'itemtype' => array(
            'value' => array(
              'select' => '',
              'other' => '',
            ),
          ),
          'og:type' => array(
            'value' => array(
              'other' => '',
            ),
          ),
        ),
      ),
      'metatag_admin' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Metatag');
  $export['workspace'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'shopping_list';
  $context->description = '';
  $context->tag = 'Metatag';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'shopping-list' => 'shopping-list',
      ),
    ),
  );
  $context->reactions = array(
    'metatag_context_reaction' => array(
      'metatags' => array(
        'und' => array(
          'itemtype' => array(
            'value' => array(
              'select' => '',
              'other' => '',
            ),
          ),
          'og:type' => array(
            'value' => array(
              'other' => '',
            ),
          ),
        ),
      ),
      'metatag_admin' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Metatag');
  $export['shopping_list'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'product_data_sheet_search';
  $context->description = '';
  $context->tag = 'Metatag';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'data-sheet/search' => 'data-sheet/search',
      ),
    ),
  );
  $context->reactions = array(
    'metatag_context_reaction' => array(
      'metatags' => array(
        'und' => array(
          'itemtype' => array(
            'value' => array(
              'select' => '',
              'other' => '',
            ),
          ),
          'og:type' => array(
            'value' => array(
              'other' => '',
            ),
          ),
        ),
      ),
      'metatag_admin' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Metatag');
  $export['product_data_sheet_search'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'advice_training_confirmation';
  $context->description = '';
  $context->tag = 'Metatag';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'advice/training/confirmation/*' => 'advice/training/confirmation/*',
      ),
    ),
  );
  $context->reactions = array(
    'metatag_context_reaction' => array(
      'metatags' => array(
        'und' => array(
          'itemtype' => array(
            'value' => array(
              'select' => '',
              'other' => '',
            ),
          ),
          'og:type' => array(
            'value' => array(
              'other' => '',
            ),
          ),
        ),
      ),
      'metatag_admin' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Metatag');
  $export['advice_training_confirmation'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'advice_contact_us_thankyou';
  $context->description = '';
  $context->tag = 'Metatag';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'advice/contact-us/thankyou' => 'advice/contact-us/thankyou',
      ),
    ),
  );
  $context->reactions = array(
    'metatag_context_reaction' => array(
      'metatags' => array(
        'und' => array(
          'itemtype' => array(
            'value' => array(
              'select' => '',
              'other' => '',
            ),
          ),
          'og:type' => array(
            'value' => array(
              'other' => '',
            ),
          ),
        ),
      ),
      'metatag_admin' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Metatag');
  $export['advice_contact_us_thankyou'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'products_compare';
  $context->description = '';
  $context->tag = 'Metatag';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'products/compare' => 'products/compare',
      ),
    ),
  );
  $context->reactions = array(
    'metatag_context_reaction' => array(
      'metatags' => array(
        'und' => array(
          'itemtype' => array(
            'value' => array(
              'select' => '',
              'other' => '',
            ),
          ),
          'og:type' => array(
            'value' => array(
              'other' => '',
            ),
          ),
        ),
      ),
      'metatag_admin' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Metatag');
  $export['products_compare'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'products_listing';
  $context->description = '';
  $context->tag = 'Metatag';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'products-listing' => 'products-listing',
        'products-listing/*' => 'products-listing/*',
      ),
    ),
  );
  $context->reactions = array(
    'metatag_context_reaction' => array(
      'metatags' => array(
        'und' => array(
          'robots' => array(
            'value' => array(
              'index' => 'index',
              'follow' => 'follow',
              'noindex' => 0,
              'nofollow' => 0,
              'noarchive' => 0,
              'nosnippet' => 0,
              'noodp' => 0,
              'noydir' => 0,
              'noimageindex' => 0,
              'notranslate' => 0,
            ),
          ),
        ),
      ),
      'metatag_admin' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Metatag');
  $export['products_listing'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'products_datasheets';
  $context->description = '';
  $context->tag = 'Metatag';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'products/datasheets' => 'products/datasheets',
      ),
    ),
  );
  $context->reactions = array(
    'metatag_context_reaction' => array(
      'metatags' => array(
        'und' => array(
          'itemtype' => array(
            'value' => array(
              'select' => '',
              'other' => '',
            ),
          ),
          'og:type' => array(
            'value' => array(
              'other' => '',
            ),
          ),
        ),
      ),
      'metatag_admin' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Metatag');
  $export['products_datasheets'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'advice_contact_us';
  $context->description = '';
  $context->tag = 'Metatag';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'advice/contact-us' => 'advice/contact-us',
      ),
    ),
  );
  $context->reactions = array(
    'metatag_context_reaction' => array(
      'metatags' => array(
        'und' => array(
          'itemtype' => array(
            'value' => array(
              'select' => '',
              'other' => '',
            ),
          ),
          'og:type' => array(
            'value' => array(
              'other' => '',
            ),
          ),
        ),
      ),
      'metatag_admin' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Metatag');
  $export['advice_contact_us'] = $context;
  return $export;
}
