/**
 * @file
 * Handles Carousel content form functionality.
 */
(function ($) {
  Drupal.behaviors.brandsPromoListing = {
    attach: function (context, settings) {
      // Code to be run on page load, and
      // on ajax load added here
      // redirect to product listing page
      $('.complementory-brand').click(function (ev) {
        if ($('.dropdown-menu .selected').attr('data-original-index') !== 0) {
          window.location.href = $(this).attr('data-url') + jQuery(".select-picker.form-select option").eq($('.dropdown-menu .selected').attr('data-original-index')).val();
        }
        else {
          window.location.href = $(this).attr('data-url') + $(this).attr('data-urltid');
        }
      });
    }
  };
}(jQuery));
