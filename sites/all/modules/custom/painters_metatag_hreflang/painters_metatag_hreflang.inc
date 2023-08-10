<?php
// Load node.admin.inc from the node module.
module_load_include('inc', 'metatag', 'metatag');

/**
 * Link type meta tag controller.
 */
class DrupalHreflangMetaTag extends DrupalLinkMetaTag {

  public function getElement(array$options = array()) {
    // Define Static variable because,
    // function run for single field, so store value in static variable and use in last field.
    static $hreflang;
    $value = $this->getValue($options);
    $hreflang[$this->info['name']] = $value;

    if (strlen($value) === 0) {
      return array();
    }
    // The stack of elements that will be output.
    $elements = array();

    // Dynamically add each option to this setting.
    $base_element = isset($this->info['element']) ? $this->info['element'] : array();
    if (array_key_exists('hreflang:url', $hreflang)) {
      $url = $value;
      if (array_key_exists('country_list', $hreflang)) {
        $code = $hreflang['country_list'];
      }
      if (array_key_exists('lang_list', $hreflang)) {
        $lang = $hreflang['lang_list'];
      }
      if (!empty($code) && !empty($lang)) {
        $hreflang = $lang . '-' . $code;
        $element = $base_element + array(
          '#theme' => 'metatag_link_rel',
          '#tag' => 'link',
          '#id' => 'fl_herflang_' . $code,
          '#name' => $this->info['name'],
          '#value' => $url,
          '#hreflang' => $hreflang,
          '#weight' => $this->getWeight(),
        );
        $elements[] = array(
          $element,
          $element['#id'],
        );
      }
    }

    if (!empty($elements)) {
      return array(
        '#attached' => array(
          'drupal_add_html_head' => $elements,
        ),
      );
    }
  }

  /**
   * Remove unwanted formatting from a meta tag.
   *
   * @param $value string
   *        	The meta tag value to be tidied up.
   *
   * @return string The meta tag value after it has been tidied up.
   */
  public function tidyValue($value) {
    // Specifically replace encoded spaces, because some WYSIWYG editors are
    // silly. Do this before decoding the other HTML entities so that the output
    // doesn't end up with a bunch of a-circumflex characters.
    $value = str_replace('&nbsp;', ' ', $value);

    // Convert any HTML entities into regular characters.
    $value = decode_entities($value);

    // Remove any HTML code that might have been included.
    $value = strip_tags($value);

    // Strip errant whitespace.
    // $value = str_replace(array("\r\n", "\n", "\r", "\t"), ' ', $value);
    // $value = str_replace(' ', ' ', $value);
    // $value = str_replace(' ', ' ', $value);
    $value = trim($value);

    return $value;
  }
}

