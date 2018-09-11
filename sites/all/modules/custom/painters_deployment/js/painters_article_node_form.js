/**
 * @file
 * Handles Carousel content form functionality.
 */
(function ($) {
  Drupal.behaviors.article = {
    attach: function (context, settings) {
      $('.field-name-field-painters-article  .form-radios .form-radio').each(function () {
        var name = $(this).attr('name');
        var slectedValue = $('input[name="' + name + '"]:checked').val();
        if (slectedValue === 'image') {
          $(this).closest('tr').find('.field-name-field-section-image').show();
          $(this).closest('tr').find('.field-type-video-embed-field').hide();
        }
        if (slectedValue === 'video') {
          $(this).closest('tr').find('.field-name-field-section-image').hide();
          $(this).closest('tr').find('.field-type-video-embed-field').show();
        }
        else if (slectedValue === 'undefined') {
          $(this).closest('tr').find('.field-name-field-section-image').hide();
          $(this).closest('tr').find('.field-type-video-embed-field').hide();
        }

      });
      // conditional checkbox is clicked.
      $('.field-name-field-painters-article .form-radio').click(function () {
        if ($(this).val() === 'image' && $(this).is(":checked")) {
          $(this).closest('tr').find('.field-name-field-section-image').show();
          $(this).closest('tr').find('.field-type-video-embed-field').hide();
        }
        if ($(this).val() === 'video' && $(this).is(":checked")) {
          $(this).closest('tr').find('.field-name-field-section-image').hide();
          $(this).closest('tr').find('.field-type-video-embed-field').show();
        }
      });
      $('.field-name-field-article-call-to-action .form-radios .form-radio').each(function () {
        var name = $(this).attr('name');
        var slectedValue = $('input[name="' + name + '"]:checked').val();
        if (slectedValue === 'article_detail') {
          $('.field-name-field-article-others-link').hide();
          $('.field-name-field-article-detail-page-link').show();
        }
        else if (slectedValue === 'others') {
          $('.field-name-field-article-others-link').show();
          $('.field-name-field-article-detail-page-link').hide();
        }
        else {
          $('.field-name-field-article-others-link').hide();
        }
      });
      // conditional checkbox is clicked.
      $('.field-name-field-article-call-to-action .form-radio').click(function () {
        if ($(this).val() === 'article_detail' && $(this).is(":checked")) {
          $('.field-name-field-article-others-link').hide();
          $('.field-name-field-article-detail-page-link').show();
        }
        if ($(this).val() === 'others' && $(this).is(":checked")) {
          $('.field-name-field-article-others-link').show();
          $('.field-name-field-article-detail-page-link').hide();
        }
      });
    }
  };
}(jQuery));
