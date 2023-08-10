/**
 * @file
 * Handles Carousel content form functionality.
 */
(function ($) {
  Drupal.behaviors.brandform = {
    attach: function (context, settings) {
      // Code to be run on page load, and
      // on ajax load added here
      if ($('.field-name-field-lead-brand .form-checkbox').is(":checked")) {
        $('.group-comp-brand-section').hide();
      }
      // conditional checkbox is clicked.
      $('.field-name-field-lead-brand .form-checkbox').click(function () {
        if ($(this).is(":checked")) {
          $('.group-comp-brand-section').hide();
        }
        else {
          $('.group-comp-brand-section').show();
        }
      });
    }
  };
}(jQuery));
