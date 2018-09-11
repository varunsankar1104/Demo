<?php

/**
 * @desc utility functions shared across the Painters site
 */
function _painters_utils_global_view_results($view_name, $display = '', $args = NULL) {
  $cache_id = 'painters_view_' . $view_name;
  if ($display != '') {
    $cache_id .= '_' . $display;
  }

  $view_results = &drupal_static(__FUNCTION__ . '_' . $cache_id);
  if (!isset($view_results)) {
    if ($cache = cache_get($cache_id)) {
      $view_results = $cache->data;
    }
    else {
      if ($display != '') {
        $view_results = views_get_view_result($view_name, $display, $args);
      }
      else {
        $view_results = views_get_view_result($view_name);
      }

      cache_set($cache_id, $view_results, 'cache', CACHE_TEMPORARY);
    }
  }
  return $view_results;
}

/**
 * Function converts hex valur to RGB Value
 *
 * @param unknown $color
 *
 * @return multitype:number
 */
function painters_hex2rgb($color) {
  $color = str_replace('#', '', $color);
  if (strlen($color) != 6) {
    return array(
      0,
      0,
      0,
    );
  }
  $rgb = array();
  for ($x = 0; $x < 3; $x++) {
    $rgb[$x] = hexdec(substr($color, (2 * $x), 2));
  }
  return $rgb;
}

/**
 *
 * @param unknown $r
 * @param unknown $g
 * @param unknown $b
 *
 * @return string
 */
function painters_gettextcolour($r, $g, $b) {
  $yiq = (($r * 299) + ($g * 587) + ($b * 114)) / 1000;
  return ($yiq >= 128) ? 'colour--dark' : 'colour--light';
}

/**
 *
 * @param unknown $r
 * @param unknown $g
 * @param unknown $b
 *
 * @return string
 */
function painters_gettextcolourdetail($r, $g, $b) {
  $yiq1 = (($r * 299) + ($g * 587) + ($b * 114)) / 1000;
  return ($yiq1 >= 128) ? 'none' : 'makewhite';
}

/**
 * Generic function for returning default configurable labels.
 * $default : Supply default string for variable_get() if not in fixed array set.
 * $translate : Do you want to translate string using t function or not. Helpful
 * if we want to get a variable array.
 */
function painters_utils_get_label($label_key, $default = '', $translate = TRUE) {
  $default_labels = &drupal_static(__FUNCTION__);
  if (!isset($labels)) {
    $default_labels = _get_painters_labels();
  }
  $label = '';
  if (isset($default_labels[$label_key])) {
    $label = $translate ? t(strip_tags(variable_get($label_key, $default_labels[$label_key]))) : variable_get($label_key, $default_labels[$label_key]);
  }
  else {
    $label = $translate ? t(strip_tags($default, '<a>')) : $default;
  }

  // verify configurable lebels using easy debug mode for page
  if (isset($_REQUEST['debug'])) {
    if (is_array($label)) {
      foreach ($label as $key => $val) {
        $label[$key] = '::' . $val;
      }
    }
    $label = '::' . $label;
  }

  return $label;
}

/**
 * Helper function for providing image style url or styled image based on
 * language code and parameters supplied.
 *
 * @global <type> $language
 *
 * @param <type> $entity
 *        	Node or entity object
 * @param <type> $image_style
 *        	Name of image style to be applied on
 * @param <type> $field_name
 *        	Valid field name to be checked for inside entity
 * @param <type> $url
 *        	true if only url needed, flase if rendered <img> tag needed.
 *
 * @return <type> string
 */
function _painters_image_style($entity, $field_name, $image_style, $url = TRUE) {
  global $language;
  $lang = $language->language;

  $alt = '';
  if (isset($entity->{$field_name}[$lang])) {
    $image_url = _painters_image_style_url($image_style, $entity->{$field_name}[$lang][0]['uri']);
    $alt = $entity->{$field_name}[$lang][0]['field_file_image_alt_text'][$lang]['0']['value'];
  }
  else {
    $image_url = _painters_image_style_url($image_style, $entity->{$field_name}[LANGUAGE_NONE][0]['uri']);
    $alt = $entity->{$field_name}[LANGUAGE_NONE][0]['field_file_image_alt_text'][LANGUAGE_NONE]['0']['value'];
  }

  // Return url only
  if ($url) {
    return $image_url;
  }
  // return Image
  else {
    return theme('image', array(
        'path' => $image_url,
        'alt' => $alt,
        'attributes' => array(
          'class' => array(
            'img-responsive',
          ),
        ),
      ));
  }
}

/**
 *
 * @global $language
 *
 * @param <type> $entity
 * @param <type> $field_name
 *
 * @return <type>
 */
function _painters_language_field($entity, $field_name) {
  if (isset($entity->{$field_name}) && count($entity->{$field_name})) {
    $field_data = $entity->{$field_name};
    global $language;
    $lan_code = $language->language;
    if (isset($field_data[$lan_code])) {
      return $field_data[$lan_code];
    }
    else {
      return isset($field_data[LANGUAGE_NONE]) ? $field_data[LANGUAGE_NONE] : $field_data['en'];
    }
  }
  return FALSE;
}

/**
 * Verify incoming request for CSRF
 */
function painters_utils_request_check() {
  // Not a solid way ! But one step for preventing direct GET access
  if (!(isset($_SERVER['HTTP_X_REQUESTED_WITH']) && $_SERVER['HTTP_X_REQUESTED_WITH'] == 'XMLHttpRequest')) {
    $dummy_response = array(
      'status' => 0,
      'message' => t('Not a valid request'),
    );
    drupal_json_output($dummy_response);
    exit();
  }
}

/**
 *
 * @param <type> $search_key
 * @param <type> $skip
 *
 * @return <type>
 */
function _get_color_search_arg($search_key = '', $skip = 1) {
  $search_value = '';
  // remove first arg
  $args_output = array_slice(arg(), $skip);
  $search_index = array_search($search_key, $args_output);
  if ($search_index !== FALSE) {
    $value_index = $search_index + 1;
    if (isset($args_output[$value_index]) && !empty($args_output[$value_index])) {
      $search_value = $args_output[$value_index];
    }
  }
  return $search_value;
}

/**
 *
 * @param <type> $uri
 */
function painters_utils_file_create_url($uri) {
  $file_url = file_create_url($uri);
  return painters_utils_url_fix($file_url);
}

/**
 * Returns the URL for an image derivative given a style and image path.
 *
 * @param $style_name The
 *        	name of the style to be used with this image.
 * @param $path The
 *        	path to the image.
 *
 * @return The absolute URL where a style image can be downloaded, suitable for use
 *         in an <img> tag. Requesting the URL will cause the image to be created.
 * @see image_style_deliver()
 */
function _painters_image_style_url($style_name, $path) {
  $file_url = image_style_url($style_name, $path);
  return painters_utils_url_fix($file_url);
}

/**
 *
 * @param <type> $url
 *
 * @return <type>
 */
function painters_utils_url_fix($file_url) {
  return str_replace(array('http://https://','http://','https://',), 
      array('//','//', '//',), $file_url);
}

/**
 *
 */
function painters_utils__is_multibrand() {
  $brands = _painters_utils_global_view_results('footer_brand_icons', 'block_1');
  return count($count) > 1 ? TRUE : FALSE;
}