/**
 * @file
 * Handles Carousel content form functionality.
 */
(function ($) {
  Drupal.behaviors.carousel = {
    attach: function (context, settings) {
      // Code to be run on page load, and
      // on ajax load added here
      $('.field-name-field-carousel-button-include .form-radios .form-radio').each(function () {
        var name = $(this).attr('name');
        var slectedValue = $('input[name="' + name + '"]:checked').val();
        if (slectedValue == 0) {
          $(this).closest('tr').find('.field-name-field-carousel-link-title').show();
          $(this).closest('tr').find('.field-name-field-carousel-button-label').show();
          $(this).closest('tr').find('.field-name-field-carousel-prd-cat').hide();
          $(this).closest('tr').find('.field-name-field-carousel-brand').hide();
        }
        else if (slectedValue == 1) {
          $(this).closest('tr').find('.field-name-field-carousel-button-label').show();
          $(this).closest('tr').find('.field-name-field-carousel-prd-cat').show();
          $(this).closest('tr').find('.field-name-field-carousel-brand').show();
          $(this).closest('tr').find('.field-name-field-carousel-link-title').hide();
        }
        else {
          $(this).closest('tr').find('.field-name-field-carousel-link-title').hide();
          $(this).closest('tr').find('.field-name-field-carousel-button-label').hide();
          $(this).closest('tr').find('.field-name-field-carousel-prd-cat').hide();
          $(this).closest('tr').find('.field-name-field-carousel-brand').hide();
        }
      });
      // conditional checkbox is clicked.
      $('.field-name-field-carousel-button-include .form-radio').click(function () {
        if ($(this).val() == 1 && $(this).is(":checked")) {
          $(this).closest('tr').find('.field-name-field-carousel-button-label').show();
          $(this).closest('tr').find('.field-name-field-carousel-prd-cat').show();
          $(this).closest('tr').find('.field-name-field-carousel-brand').show();
          $(this).closest('tr').find('.field-name-field-carousel-link-title').hide();
        }
        else if ($(this).val() == 0 && $(this).is(":checked")) {
          $(this).closest('tr').find('.field-name-field-carousel-link-title').show();
          $(this).closest('tr').find('.field-name-field-carousel-button-label').show();
          $(this).closest('tr').find('.field-name-field-carousel-prd-cat').hide();
          $(this).closest('tr').find('.field-name-field-carousel-brand').hide();
        }
        else {
          $(this).closest('tr').find('.field-name-field-carousel-link-title').hide();
          $(this).closest('tr').find('.field-name-field-carousel-button-label').hide();
          $(this).closest('tr').find('.field-name-field-carousel-prd-cat').hide();
          $(this).closest('tr').find('.field-name-field-carousel-brand').hide();
        }
      });
    }
  };
}(jQuery));
