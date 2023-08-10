<?php

/**
 * Drush call back function to populate Paintes cahces as part of data-import
 */
function populate_painters_cache() {

  // For now populating only products cache for Myworkspace use case.
  // Later more functions can be added to cater for other use cases
  populate_products_cache();
}

/**
 * Function to store product details as cached products
 * To be used in My Workspace product details
 */
function populate_products_cache() {
	global $language;
	$lang_code = $language->language;
  $view = views_get_view('product_details');
  $view->set_display('page');
  $view->execute();
  $cached_products = array();
  foreach ($view->result as $result) {
    $entity = $result->_field_data['nid']['entity'];
    $field_brand = _painters_language_field($entity, 'field_prod_brand');
    $global_id = _painters_language_field($entity, 'field_product_global_id');
    $global_id = $global_id[0]['value'];
    $product_type_tid = _painters_language_field($entity, 'field_product_category');
    $product_type = _get_term_name($product_type_tid[0]['tid']);
    $product_image =  isset($entity->field_packshots_s_url[$lang_code]['0']['value']) ? $entity->field_packshots_s_url[$lang_code]['0']['value'] : '';
    $products = array(
      'product_type' => $product_type,
      'title' => $result->node_title,
      'brand' => _get_term_name_bytid($field_brand['0']['tid']),
      'image' => $product_image,
      'url_alias' => url('node/' . $result->nid),
    );
    $cached_products[$global_id][$lang_code] = $products;
  }

  cache_set('painters-spaces-products', $cached_products);
  echo "\n 1 Populating Product Cache is completed with " . $view->total_rows . ' products';
}

