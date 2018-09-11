/**
 * @file
 * Admin JS for painters
 */
(function ($) {
  Drupal.paintersAdmin = {};
  Drupal.paintersAdmin.checkValidate = function () {
    var $checked_count = $('#slides-order .form-checkbox:checked').length;
    if ($checked_count >= 2) {
      $("input:checkbox:not(:checked)").attr('disabled', true);
    } else {
      $("input:checkbox:not(:checked)").attr('disabled', false);
    }
  }

  Drupal.behaviors.paintersAdmin = {
    attach: function (context, settings) {
      $('.tabledrag-toggle-weight-wrapper').hide();
      $("#slides-order [type='checkbox']").on('change', function () {
        Drupal.paintersAdmin.checkValidate();
      });
      Drupal.paintersAdmin.checkValidate();
    }
  };
}(jQuery));