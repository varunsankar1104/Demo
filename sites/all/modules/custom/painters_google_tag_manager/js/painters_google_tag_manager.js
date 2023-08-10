/*
 * @file
 * Code for the painters_google_tag_manager.js 
 */

var prd_arr_listing = 0;
var prd_arr_cart = 0;

//The behaviors will be executed on every AJAX requests
(function ($) {
  /**
   * Function returns only text
   */
  $.fn.justtext = function () {
    return $(this).clone() //clone the element
            .children() //select all the children
            .remove() //remove all the children
            .end() //again go back to selected element
            .text(); //get the text of element
  };

  Drupal.paintersGTM = {};
  /**
   * returns IP address
   */
  Drupal.paintersGTM.clientIp = function () {
    $.getJSON(Drupal.settings.basePath + 'get-client-ip?nocache=1', function (responseJson) {
      //Drupal.settings.painters_google_tag_manager.data_layer.trafficClassificationID = responseJson.ip;
      //Pass CLient Ip to dataLayer
      dataLayer.push({event: "user-event", trafficClassificationID: responseJson.ip});
    }).error(function (jqXHR, textStatus, errorThrown) {
    });
  }
  /**
   * returns Referrer URL
   */
  Drupal.paintersGTM.referrerUrl = function () {
    if (typeof document.referrer !== 'undefined' && document.referrer != '') {
      //Pass Referrer URL to dataLayer
      dataLayer.push({event: "user-event", 'referringURL': document.referrer});
    }
  }
  /**
   * Get DLR data from Drupal Settings
   */
  Drupal.paintersGTM.PassDLRtoJS = function () {
    if (typeof Drupal.settings.painters_google_tag_manager !== 'undefined' &&
            typeof Drupal.settings.painters_google_tag_manager.data_layer !== 'undefined') {
      var painters_data_layer = Drupal.settings.painters_google_tag_manager.data_layer;
      //Product Listing page
      if (typeof painters_data_layer.page.category !== 'undefined') {
        if (typeof painters_data_layer.page.category.primaryCategory !== 'undefined' &&
                painters_data_layer.page.category.primaryCategory === 'Product'
                && typeof painters_data_layer.page.category.pageType !== 'undefined' &&
                painters_data_layer.page.category.pageType === 'Decision') {
          if ($('.product-lister .card-product-s').length) {
            //var painters_products_listing_data_layer = Drupal.settings.painters_google_tag_manager.data_layer;
            if (typeof painters_data_layer.products === 'undefined') {
              painters_data_layer['products'] = {};
            }
            $('.product-lister .card-product-s').each(function () {
              var listPrdGlobalId = $(this).attr('data-globalid');
              var listPrdName = $(this).attr('data-pname');
              var listPrdCategory = $(this).attr('data-pcategory');
              painters_data_layer['products'][prd_arr_cart] = {"productInfo": {
                  "productID": listPrdGlobalId,
                  "productName": listPrdName,
                },
                "category": {
                  "primaryCategory": listPrdCategory,
                }
              };

              if ($(this).attr('data-colorid') !== '') {
                var listPrdColorid = $(this).attr('data-colorid');
                painters_data_layer['products'][prd_arr_cart]['productInfo']['colourID'] = listPrdColorid;
              }
              if ($(this).attr('data-colorname') !== '') {
                var listPrdColor = $(this).attr('data-colorname');
                painters_data_layer['products'][prd_arr_cart]['productInfo']['colourName'] = listPrdColor;
              }
              if ($(this).attr('data-colorcollection') !== '') {
                var listPrdColllection = $(this).attr('data-colorcollection');
                painters_data_layer['products'][prd_arr_cart]['productInfo']['colourCollection'] = listPrdColllection;
              }
              prd_arr_cart++;
            });
            //Pushing cartProducts to dataLayer
            if (typeof painters_data_layer.products !== 'undefined') {
              if (Object.keys(painters_data_layer.products).length === 0) {
                painters_data_layer.products = undefined;
              }
            }
          }
          Drupal.paintersGTM.PassToDLR(painters_data_layer);
        }
      }
      //Product overview page
      if (typeof painters_data_layer.page.category != 'undefined') {
        if ($('body').hasClass('page-products-compare')) {
          if ($('.product-compare__header .compare-product-remove').length) {
            //var painters_products_listing_data_layer = Drupal.settings.painters_google_tag_manager.data_layer;
            if (typeof painters_data_layer.products === 'undefined') {
              painters_data_layer['products'] = {};
            }
            $('.product-compare__header .compare-product-remove').each(function () {
              var listPrdGlobalId = $(this).attr('data-globalid');
              var listPrdName = $(this).attr('data-ptitle');
              var listPrdCategory = $(this).attr('data-ptype');
              painters_data_layer['products'][prd_arr_cart] = {"productInfo": {
                  "productID": listPrdGlobalId,
                  "productName": listPrdName,
                },
                "category": {
                  "primaryCategory": listPrdCategory,
                }
              };


              if ($(this).attr('data-colorcollection') !== '') {
                var listPrdColllection = $(this).attr('data-colorcollection');
                painters_data_layer['products'][prd_arr_cart]['productInfo']['colourCollection'] = listPrdColllection;
              }
              prd_arr_cart++;
            });
            //Pushing cartProducts to dataLayer
            if (typeof painters_data_layer.products !== 'undefined') {
              if (Object.keys(painters_data_layer.products).length === 0) {
                painters_data_layer.products = undefined;
              }
            }
          }
          Drupal.paintersGTM.PassToDLR(painters_data_layer);
        }
      }

      //Color Search page
      if ($('body').hasClass('page-colours-search')) {
        if (typeof $('.colour-basic-grid__header--main').data('search-count') !== 'undefined' && $('.colour-basic-grid__header--main').data('search-count') !== '') {
          painters_data_layer['page']['attributes']['searchResultCategory2'] = $('.colour-basic-grid__header--main').data('search-count');
          painters_data_layer['page']['attributes']['searchResultCategory6'] = $('.colour-basic-grid__header--main').data('search-count');
        }
        Drupal.paintersGTM.PassToDLR(painters_data_layer);
      }

      //Product Search page
      if ($('body').hasClass('page-products-search')) {
        if (typeof $('.search-result__header--main').data('search-count') !== 'undefined' &&
                $('.search-result__header--main').data('search-count') !== '') {
          painters_data_layer['page']['attributes']['searchResultCategory1'] = $('.search-result__header--main').data('search-count');
          painters_data_layer['page']['attributes']['searchResultCategory6'] = $('.search-result__header--main').data('search-count');
        }
        if (typeof painters_data_layer.products === 'undefined') {
          painters_data_layer['products'] = {};
        }
        $('.card-product-s').each(function () {
          var listPrdGlobalId = $(this).attr('data-globalid');
          var listPrdName = $(this).attr('data-pname');
          var listPrdCategory = $(this).attr('data-pcategory');
          painters_data_layer['products'][prd_arr_cart] = {
            "productInfo": {
              "productID": listPrdGlobalId,
              "productName": listPrdName,
            },
            "category": {
              "primaryCategory": listPrdCategory,
            }
          };

          if ($(this).attr('data-colorcollection') !== '') {
            var listPrdColllection = $(this).attr('data-colorcollection');
            painters_data_layer['products'][prd_arr_cart]['productInfo']['colourCollection'] = listPrdColllection;
          }
          prd_arr_cart++;
        });
        Drupal.paintersGTM.PassToDLR(painters_data_layer);
      }


      //General Search page
      if ($('body').hasClass('page-search')) {
        if (typeof $('.search-result-products-count').data('search-count') !== 'undefined'
                && $('.search-result-products-count').data('search-count') !== '') {
          painters_data_layer['page']['attributes']['searchResultCategory1'] = $('.search-result-products-count').data('search-count');
        }
        if (typeof $('.search-result-colors-count').data('search-count') !== 'undefined' && $('.search-result-colors-count').data('search-count') !== '') {
          painters_data_layer['page']['attributes']['searchResultCategory2'] = $('.search-result-colors-count').data('search-count');
        }
        if (typeof $('.search-result-articles-count').data('search-count') !== 'undefined' && $('.search-result-articles-count').data('search-count') !== '') {
          painters_data_layer['page']['attributes']['searchResultCategory3'] = $('.search-result-articles-count').data('search-count');
        }
        if (typeof $('.search-result__header').data('search-count') !== 'undefined' && $('.search-result__header').data('search-count') !== '') {
          painters_data_layer['page']['attributes']['searchResultCategory6'] = $('.search-result__header').data('search-count');
        }
        if (typeof painters_data_layer.products === 'undefined') {
          painters_data_layer['products'] = {};
        }
        $('.card-product-s').each(function () {
          var listPrdGlobalId = $(this).attr('data-globalid');
          var listPrdName = $(this).attr('data-pname');
          var listPrdCategory = $(this).attr('data-pcategory');
          painters_data_layer['products'][prd_arr_cart] = {
            "productInfo": {
              "productID": listPrdGlobalId,
              "productName": listPrdName,
            },
            "category": {
              "primaryCategory": listPrdCategory,
            }
          };

          if ($(this).attr('data-colorcollection') !== '') {
            var listPrdColllection = $(this).attr('data-colorcollection');
            painters_data_layer['products'][prd_arr_cart]['productInfo']['colourCollection'] = listPrdColllection;
          }
          prd_arr_cart++;
        });
        Drupal.paintersGTM.PassToDLR(painters_data_layer);
      }

      //page-shopping-list Listing
      if ($('body').hasClass('page-shopping-list')) {
        if (typeof painters_data_layer.products == 'undefined') {
          painters_data_layer['products'] = {};
        }
        $('.product-shoppinglist__item-close').each(function () {
          painters_data_layer['products'][prd_arr_cart] = {
            "productInfo": {
              "productID": $(this).attr('data-globalid'),
              "productName": $(this).attr('data-pname'),
            },
            "category": {
              "primaryCategory": $(this).attr('data-type'),
            }
          };

          if ($(this).attr('data-colorid') !== '') {
            painters_data_layer['products'][prd_arr_cart]['productInfo']['colourID'] = $(this).attr('data-colorid');
          }
          if ($(this).attr('data-colorname') !== '') {
            painters_data_layer['products'][prd_arr_cart]['productInfo']['colourName'] = $(this).attr('data-colorname');
          }
          if ($(this).attr('data-collection') !== '') {
            painters_data_layer['products'][prd_arr_cart]['productInfo']['colourCollection'] = $(this).attr('data-collection');
          }
          prd_arr_cart++;
        });
        Drupal.paintersGTM.PassToDLR(painters_data_layer);
      }

      //workspace overview page
      if ($('body').hasClass('page-workspace') && painters_data_layer.page.category.pageType === 'Overview') {
        if (typeof painters_data_layer.products === 'undefined') {
          painters_data_layer['products'] = {};
        }
        $('.dlr-workspace-add-product-shoppinglist').each(function () {
          painters_data_layer['products'][prd_arr_cart] = {
            "productInfo": {
              "productID": $(this).attr('data-globalid'),
              "productName": $(this).attr('data-ptitle'),
            },
            "category": {
              "primaryCategory": $(this).attr('data-category'),
            }
          };

          if ($(this).attr('data-colorid') !== '') {
            painters_data_layer['products'][prd_arr_cart]['productInfo']['colourID'] = $(this).attr('data-colorid');
          }
          if ($(this).attr('data-colorname') !== '') {
            painters_data_layer['products'][prd_arr_cart]['productInfo']['colourName'] = $(this).attr('data-colorname');
          }
          if ($(this).attr('data-collection') !== '') {
            painters_data_layer['products'][prd_arr_cart]['productInfo']['colourCollection'] = $(this).attr('data-collection');
          }
          prd_arr_cart++;
        });
        Drupal.paintersGTM.PassToDLR(painters_data_layer);
      }

      ////workspace job detail page
      if ($('body').hasClass('page-workspace-detail')) {
        if (typeof painters_data_layer.products === 'undefined') {
          painters_data_layer['products'] = {};
        }
        $('.painters-workspace-delete-asset-product').each(function () {
          painters_data_layer['products'][prd_arr_cart] = {
            "productInfo": {
              "productID": $(this).attr('data-id'),
              "productName": $(this).attr('data-name'),
            },
            "category": {
              "primaryCategory": $(this).attr('data-category'),
            }
          };

          if ($(this).attr('data-colorid') !== '') {
            painters_data_layer['products'][prd_arr_cart]['productInfo']['colourID'] = $(this).attr('data-colorid');
          }
          if ($(this).attr('data-colorname') !== '') {
            painters_data_layer['products'][prd_arr_cart]['productInfo']['colourName'] = $(this).attr('data-colorname');
          }
          if ($(this).attr('data-collection') !== '') {
            painters_data_layer['products'][prd_arr_cart]['productInfo']['colourCollection'] = $(this).attr('data-collection');
          }
          prd_arr_cart++;
        });
        Drupal.paintersGTM.PassToDLR(painters_data_layer);
      }

      //Datasheet Listing
      if ($('body').hasClass('page-products-datasheets')) {
        if (typeof $('.table-doc-downloads').length !== 'undefined' && $('.table-doc-downloads').length !== '') {
          painters_data_layer['page']['attributes']['searchResultCategory4'] = $('.table-doc-downloads').length;
        }
        Drupal.paintersGTM.PassToDLR(painters_data_layer);
      } 

      //Datasheet Search
      if ($('body').hasClass('page-data-sheet-search')) {
        if (typeof $('.table-doc-downloads').length !== 'undefined' && $('.table-doc-downloads').length !== '') {
          painters_data_layer['page']['attributes']['searchResultCategory4'] = $('.table-doc-downloads').length;
        }
        Drupal.paintersGTM.PassToDLR(painters_data_layer);
      }

      if (typeof painters_data_layer.page.category !== 'undefined' && typeof painters_data_layer.page.category.subCategory2 !== 'undefined'
              && painters_data_layer.page.category.subCategory2 === 'Knowledge center category') {
        if (typeof $('.product-categorybar .product-categorybar__inner .category-block.active').find('span').text() !== 'undefined') {
          painters_data_layer['page']['category']['subCategory2'] = $('.product-categorybar .product-categorybar__inner .category-block.active').find('span').text();
        }
        Drupal.paintersGTM.PassToDLR(painters_data_layer);
      }
      if ($('div').hasClass('js-location-input')) {
           $('.inpage-searchbox-container').once('painters_google_tag_manager').change(function (e) {
               painters_data_layer['page']['attributes']['searchResultCategory5'] = 10;
               Drupal.paintersGTM.PassToDLR(painters_data_layer);
           });
      }
    }

  }

  /**
   * returns IP address
   */
  Drupal.paintersGTM.PassToDLR = function (paintersDatalayer) {
    paintersDatalayer.event = 'ga-virtualPageView';
    dataLayer.push(paintersDatalayer);
  }

  Drupal.behaviors.painters_google_tag_manager = {
    attach: function (context, settings) {
      //DLR function call only 1 time
      $('body').once(function () {
        Drupal.paintersGTM.PassDLRtoJS();
        //Drupal.paintersGTM.referrerUrl();
        Drupal.paintersGTM.clientIp();
      });
      //Collection detail page Events
      $('.node-type-color-collection .detail-page__content--btn-wrap .show-all-colours-link', context).once('painters_google_tag_manager').click(function (e) {
        if (typeof $('.content-hero-b-xl--content h1').text() !== 'undefined') {
          analyticsEventCall('Colour collection', 'Show all colours', $('.content-hero-b-xl--content h1').text(), undefined, false);
        }
      });

      $('.hue-selector__hues .hue-selector__hue', context).once('painters_google_tag_manager').click(function (e) {
        var colorHue = $(this).attr('data-name')
        if (typeof colorHue !== 'undefined') {
          analyticsEventCall('Colour picker', 'Select hue', colorHue, undefined, false);
        }
      });

      $('.page-colours .colour-filters__catalogue select.select-picker', context).once('painters_google_tag_manager').change(function (e) {
        if (typeof $(this).parents('.form-type-select').find('label').text() !== 'undefined' && typeof $("option:selected", this).text() !== 'undefined') {
          analyticsEventCall('Colour picker', 'Select catalogue', $("option:selected", this).text(), undefined, false);
        }
      });

      $('.page-colours .form-type-select select.select-picker', context).once('painters_google_tag_manager').change(function (e) {
        if (typeof $(this).parents('.form-type-select').find('label').text() !== 'undefined' && typeof $("option:selected", this).text() !== 'undefined') {
          analyticsEventCall('Colour picker', $(this).parents('.form-type-select').find('label').text(), $("option:selected", this).text(), undefined, false);
        }
      });

      $('.colour-filters__btn-clear', context).once('painters_google_tag_manager').click(function (e) {
        analyticsEventCall('Colour picker', 'Clear filters', undefined, undefined, false);
      });

      $('.colour-detail__main--btn_product', context).once('painters_google_tag_manager').click(function (e) {
        analyticsEventCall('Colour picker', 'Choose product', $('.colour-detail__main--colour-number').text() + ' | ' + $('.colour-detail__main--colour-number').attr('data-colorid'), undefined, false);
      });

      $('.colour-detail__main--bottom-testers > div > a', context).once('painters_google_tag_manager').click(function (e) {
        Drupal.attachBehaviors($('.colour-detail__main--bottom-testers'), Drupal.settings);
        if ($(this).attr('data-toggle') === 'popover') {
          analyticsEventCall('Colour testers', 'Show more information', $('.colour-detail__main--colour-number').text() + ' | ' + $('.colour-detail__main--colour-number').attr('data-colorid'), undefined, false);
        }
        else if ($(this).hasClass('colour-detail__main--btn-save')) {
          //analyticsEventCall('Scrapbook','Save colour',$('.colour-detail__main--colour-number').text() + ' | ' + $('.colour-detail__main--colour-number').attr('data-colorid'),undefined,false);
        }
        else if ($(this).hasClass('colour-detail__main--btn-order')) {
          analyticsEventCall('Scrapbook', 'Order tester', $('.colour-detail__main--colour-number').text() + ' | ' + $('.colour-detail__main--colour-number').attr('data-colorid'), undefined, false);
        }
      });


      $('.product-colour-detail--btn-remove-colour', context).once('painters_google_tag_manager').click(function (e) {
        if ($('body').hasClass('node-type-platform-product')) {
          $colorDetailData = $('.colour-name');
          analyticsEventCall('Colour picker', 'Remove colour', $colorDetailData.attr('data-colorname') + ' | ' + $colorDetailData.attr('data-colorid'), undefined, false);
        }
      });

      $('.product-colour-detail--btn-change-colour', context).once('painters_google_tag_manager').click(function (e) {
        if ($('body').hasClass('node-type-platform-product')) {
          $colorDetailData = $('.colour-name');
          analyticsEventCall('Colour picker', 'Choose other colour', $colorDetailData.attr('data-colorname') + ' | ' + $colorDetailData.attr('data-colorid'), undefined, false);
        }
      });

      $('.product-no-colour a', context).once('painters_google_tag_manager').click(function (e) {
        if ($('body').hasClass('node-type-platform-product')) {
          $productDetAttr = $('.painters-product-detail-page-product');
          analyticsEventCall('Colour picker', 'Choose colour', $productDetAttr.attr('data-productname') + ' | ' + $productDetAttr.attr('data-productid'), undefined, false);
        }
      });

      //Home page carousel click event generation
      $('.fork-carousel').once('painters_google_tag_manager').on('click', '.slick-arrow, .slick-dots > li', function (e) {
         if ($(this).hasClass('carousel-prev-btn')) {
            var eventAction = 'Click previous';
         }
        else if ($(this).hasClass('carousel-next-btn')) {
            var eventAction = 'Click next';
        }
        else if ($(this).attr('aria-controls')) {
            var eventAction = 'Click circle navigation';
        }
        if (typeof $('.slick-track .slick-current .fork-caption h2').text() != 'undefined') {
          var evntLabel = $('.slick-track .slick-current .fork-caption h2').text();
          if ($('.slick-track .slick-current .fork-caption h2').text() == '') {
            var slideIndex = $('.slick-track .slick-active').index() + 1;
            evntLabel = 'Slide ' + slideIndex;
          }
          analyticsEventCall('Image slider', eventAction, evntLabel, undefined, false);
        }
      });

      $('.main-footer__social .main-footer__social-btn > a', context).once('painters_google_tag_manager').click(function (e) {
        if (typeof $(this).text() !== 'undefined' && $(this).text() !== '') {
          //var platformName = $(this).attr('title').split('specifiers');
          //platformName = platformName[0].split('decorators');
          analyticsEventCall('Social', 'Visit', upperFirsctchar($(this).text()), undefined, false);
        }
      });

      $('.painters-product-category-dlr-event', context).once('painters_google_tag_manager').click(function (e) {
        if (typeof $(this).justtext() !== 'undefined' && $(this).justtext() !== '') {
          analyticsEventCall('Product filter', 'Select product category', $(this).justtext(), undefined, false);
        }
      });

      $('.category-dropdown #product-categories.select-picker', context).once('painters_google_tag_manager').change(function (e) {
        analyticsEventCall('Product filter', 'Select product category', $('option:selected', this).text(), undefined, false);
      });

      $('.product-filter-section--wrap .product-filter-section .collapser', context).once('painters_google_tag_manager').click(function (e) {
        if ($(this).hasClass('collapsed') && typeof $(this).find('h3').text() !== 'undefined' && $(this).find('h3').text() !== '') {
          analyticsEventCall('Product filter', 'Open filter category', $(this).find('h3').text(), undefined, false);
        }
        else if (typeof $(this).find('h3').text() !== 'undefined' && $(this).find('h3').text() !== '') {
          analyticsEventCall('Product filter', 'Close filter category', $(this).find('h3').text(), undefined, false);
        }
      });

      $('.product-filter-section .product-filter-section__item input', context).once('painters_google_tag_manager').click(function (e) {
        var filterAction = $(this).parents('.product-filter-section').find('.collapser h3').text();
        var filterLabel = $(this).parent('.product-filter-section__item').find('label').text();
        if (typeof filterAction !== 'undefined' && filterAction !== '' && typeof filterLabel !== 'undefined' && filterLabel !== '') {
          analyticsEventCall('Product filter', filterAction, filterLabel, undefined, false);
        }
      });

      $('.product-filter-section--wrap .btn-clear-form-xs a, .page-products-listing .product-filter .product-filter__btn-clear', context).once('painters_google_tag_manager').click(function (e) {
        analyticsEventCall('Product filter', 'Clear filter', undefined, undefined, false);
      });

      $('.product-compare__change', context).once('painters_google_tag_manager').click(function (e) {
        analyticsEventCall('Product comparison', 'Change products', undefined, undefined, false);
      });

      $(".card-product-s .card-product-s__content--compare [type='checkbox']", context).once('painters_google_tag_manager').on('change', function (e) {
        var prdValues = $(this).parents('.card-product-s');
        var prdGlobalId = prdValues.attr('data-globalid');
        var prdName = prdValues.find('.card-product-s__content--container p').text();
        if (typeof prdName !== 'undefined' && prdName !== '' && typeof prdGlobalId !== 'undefined' && prdGlobalId !== '') {
          if ($(this).is(':checked')) {
              analyticsEventCall('Product comparison', 'Select product', prdName + ' | ' + prdGlobalId, undefined, false);
            
          }
          else {
              analyticsEventCall('Product comparison', 'Remove product', prdName + ' | ' + prdGlobalId, undefined, false);
          }
        }
      });

      $('.product-detail__section .product-detail___buttons .add-to-shoppinglist-product', context).once('painters_google_tag_manager').click(function (e) {
        $productDetAttr = $('.painters-product-detail-page-product');
        analyticsEventCall('Shoppinglist', 'Add product', $productDetAttr.attr('data-productname') + ' | ' + $productDetAttr.attr('data-productid'), undefined, false)
      });

      $('.compare-addto-shoppinglist, .dlr-workspace-add-product-shoppinglist, .dlr-workspace-detail-add-product-shoppinglist', context).once('painters_google_tag_manager').click(function (e) {
        analyticsEventCall('Shoppinglist', 'Add product', $(this).attr('data-ptitle') + ' | ' + $(this).attr('data-globalid'), undefined, false);
      });

      $('.product-shoppinglist__item-close', context).once('painters_google_tag_manager').click(function (e) {
        analyticsEventCall('Shoppinglist', 'Remove product', $(this).attr('data-pname') + ' | ' + $(this).attr('data-globalid'), undefined, false);
      });

      $('.page-shopping-list .product-quantity', context).once('painters_google_tag_manager').change(function (e) {
        analyticsEventCall('Shoppinglist', 'Change quantity', $(this).val(), undefined, false);
      });

      $('.page-shopping-list select.select-picker.product-size', context).once('painters_google_tag_manager').change(function (e) {
        analyticsEventCall('Shoppinglist', 'Change size pack', $('option:selected', this).text(), undefined, false);
      });

      $('.page-shopping-list .dlr-shopping-list-find-store', context).once('painters_google_tag_manager').click(function (e) {
        var products_array = [];
        $('.product-shoppinglist__item-close').each(function () {
          products_array.push($(this).attr('data-pname') + ' | ' + $(this).attr('data-globalid'));
        });
        analyticsEventCall('Shoppinglist', 'Send to store', products_array.join(' + '), undefined, false);
      });

      $('.compare-product-remove', context).once('painters_google_tag_manager').click(function (e) {
        analyticsEventCall('Product comparison', 'Remove product', $(this).attr('data-ptitle') + ' | ' + $(this).attr('data-globalid'), undefined, false);
      });

      $('.product-detail__input--quantity input', context).once('painters_google_tag_manager').change(function (e) {
        analyticsEventCall('Product detail', 'Change quantity', $(this).val(), undefined, false);
      });

      $('.product-detail__input--sizepack #select-box-quantity', context).once('painters_google_tag_manager').change(function (e) {
        analyticsEventCall('Product detail', 'Change size pack', $('option:selected', this).text(), undefined, false);
      });

      $('.node-type-panopoly-landing-page #block-views-article-new-block-block .view-content .js-clickable, #block-painters-deployment-article-new-block .row .js-clickable', context).once('painters_google_tag_manager').click(function (e) {
        if (typeof $(this).find('.panel__content .js-equalheight-item').text() !== 'undefined' && $(this).find('.panel__content .js-equalheight-item').text() !== '') {
          analyticsEventCall('Advice filter', 'Select new article', $(this).find('.panel__content .js-equalheight-item').text(), undefined, false);
        }
      });

      $('.node-type-painters-article .js-clickable', context).once('painters_google_tag_manager').click(function (e) {
        if (typeof $(this).find('.panel__content .js-equalheight-item').text() !== 'undefined' && $(this).find('.panel__content .js-equalheight-item').text() !== '') {
          analyticsEventCall('Advice filter', 'Select new article', $(this).find('.panel__content .js-equalheight-item').text(), undefined, false);
        }
      });
      
      $('.storelist', context).once('painters_google_tag_manager').on('click', 'a.js-current-location', function (e) {
        analyticsEventCall('Storefinder', 'Current location', undefined, undefined, false);
      });

      $('.get-dir-training-gtm', context).once('painters_google_tag_manager').click(function (e) {
        //$('.node-type-training .content-intro .h2').text()
        if (typeof $('.store-name-gtm').text() !== 'undefined' && $('.store-name-gtm').text() !== '') {
          analyticsEventCall('Training courses', 'Get directions', $('.store-name-gtm').text(), undefined, false);
        }
      });

      $('.node-type-training .training__register-button', context).once('painters_google_tag_manager').click(function (e) {
        if (typeof $('.node-type-training .content-intro .h2').text() !== 'undefined' && $('.node-type-training .content-intro .h2').text() !== '') {
          analyticsEventCall('Training courses', 'Register', $('.node-type-training .content-intro .h2').text(), undefined, false);
        }
      });

      $('.node-type-faq .product-detail__collapse .collapser', context).once('painters_google_tag_manager').click(function (e) {
        if ($(this).hasClass('collapsed') && typeof $(this).find('h3').text() !== 'undefined' && $(this).find('h3').text() !== '' && typeof $('.product-categorybar__inner .category-block.active span').text() !== 'undefined' && $('.product-categorybar__inner .category-block.active span').text() !== '') {
          analyticsEventCall('FAQ', $('.product-categorybar__inner .category-block.active span').text(), $(this).find('h3').text(), undefined, false);
        }
      });


      $('.node-type-panopoly-landing-page #advice-articles', context).once('painters_google_tag_manager').change(function (e) {
        if (typeof $("option:selected", this).text() !== 'undefined') {
          analyticsEventCall('Advice filter', 'Select audience', $("option:selected", this).text(), undefined, false);
        }
      });

    },
    detach: function (context, settings, trigger) { //this function is option
      //$('.yourclass').unbind(); //or do whatever you want;
    }
  };

  if (Drupal.ajax) {
    /**
     * Handle an event that triggers an AJAX response.
     *
     * We unfortunately need to override this function, which originally comes from
     * misc/ajax.js, in order to be able to cache loaded tabs, i.e. once a tab
     * content has loaded it should not need to be loaded again.
     *
     * I have removed all comments that were in the original core function, so that
     * the only comments inside this function relate to the Quicktabs modification
     * of it.
     */
    Drupal.ajax.prototype.eventResponse = function (element, event) {
      var ajax = this;

      if (ajax.ajaxing) {
        return false;
      }

      try {
        if (ajax.form) {
          if (ajax.setClick) {
            element.form.clk = element;
          }
          ajax.form.ajaxSubmit(ajax.options);
        }
        else {
          // Do not perform an ajax request for already loaded Quicktabs content.
          var painters_data_layer = Drupal.settings.painters_google_tag_manager.data_layer;
          if (!$(element).hasClass('quicktabs-loaded')) {
            ajax.beforeSerialize(ajax.element, ajax.options);
            $.ajax(ajax.options);
            if ($(element).parents('ul').hasClass('quicktabs-tabs')) {
              $(element).addClass('quicktabs-loaded');
            }
            if ($(element).hasClass('advice-knowledge-dlr')) {
              //Trigger DLR event
              analyticsEventCall('Advice filter', 'Select article category', $(element).text(), undefined, false);
              //Pass virtualPageView DLR params
              painters_data_layer['page']['pageInfo']['pageID'] = 'advice/' + $(element).attr('data-termname');
              painters_data_layer['page']['pageInfo']['pageName'] = $(element).text();
              delete painters_data_layer['page']['category']['subCategory1'];
            }
          }
          else {
            if ($(element).hasClass('advice-knowledge-dlr')) {
              //Trigger DLR event
              analyticsEventCall('Advice filter', 'Select article category', $(element).text(), undefined, false);
              //Pass virtualPageView DLR params
              painters_data_layer['page']['pageInfo']['pageID'] = 'advice/' + $(element).attr('data-termname');
              painters_data_layer['page']['pageInfo']['pageName'] = $(element).text();
              delete painters_data_layer['page']['category']['subCategory1'];
            }
          }
          if ($(element).attr('data-termname') == 'all') {
            painters_data_layer['page']['pageInfo']['pageID'] = 'advice/knowledge';
            painters_data_layer['page']['pageInfo']['pageName'] = $('#page-title').text();
            painters_data_layer['page']['category']['subCategory1'] = 'Knowledge center';
          }
          Drupal.paintersGTM.PassToDLR(painters_data_layer);
        }
      }
      catch (e) {
        ajax.ajaxing = false;
        alert("An error occurred while attempting to process " + ajax.options.url + ": " + e.message);
      }
      return false;
    };
  }

})(jQuery);

jQuery(document).ready(function ($) {
  if (typeof Drupal.settings.painters_google_tag_manager !== 'undefined' && typeof Drupal.settings.painters_google_tag_manager.data_layer !== 'undefined') {
    //Login/register pagewise DLR
    $('body').on('click', '.meta-topbar__btn-register.js-show-modal, .meta-topbar__btn-login.js-show-modal, .js-show-modal.js-hide-modal-login,.js-show-modal.js-hide-modal-register', function (ev) {
      var pageTypeVal = 'Login';
      if ($(this).attr("id") == "js-trigger-register-modal" || $(this).attr("data-rels") == "modal-account-register") {
        pageTypeVal = 'Register';
      }
      var painters_data_layer = Drupal.settings.painters_google_tag_manager.data_layer;
      var painters_login_data_layer = {};
      painters_login_data_layer['pageInstanceID'] = painters_data_layer.pageInstanceID;
      painters_login_data_layer['siteCode'] = painters_data_layer.siteCode;
      //painters_login_data_layer['trafficClassificationID'] = painters_data_layer.trafficClassificationID;
      painters_login_data_layer['page'] = {};
      painters_login_data_layer['page']['pageInfo'] = {};
      painters_login_data_layer['page']['pageInfo']['pageID'] = 'painters-ajax/user/register';
      painters_login_data_layer['page']['pageInfo']['pageName'] = $(this).text().trim();
      painters_login_data_layer['page']['pageInfo']['destinationUrl'] = document.location.origin + '/painters-ajax/user/register';
      if ($(this).hasClass('meta-topbar__btn-login') || $(this).hasClass('js-hide-modal-register')) {
        painters_login_data_layer['page']['pageInfo']['pageID'] = 'painters-ajax/user/login';
        //painters_login_data_layer['page']['pageInfo']['pageName'] = Drupal.t('Sign in');
        painters_login_data_layer['page']['pageInfo']['destinationUrl'] = document.location.origin + '/painters-ajax/user/login';
      }
      painters_login_data_layer['page']['pageInfo']['referringURL'] = window.location.href;
      painters_login_data_layer['page']['pageInfo']['language'] = painters_data_layer.page.pageInfo.language;
      painters_login_data_layer['page']['pageInfo']['geoRegion'] = painters_data_layer.page.pageInfo.geoRegion;
      painters_login_data_layer['page']['attributes'] = {};
      painters_login_data_layer['page']['attributes']['functionalityVersion'] = painters_data_layer.page.attributes.functionalityVersion;
      painters_login_data_layer['page']['category'] = {};
      painters_login_data_layer['page']['category']['pageType'] = pageTypeVal;
      painters_login_data_layer['page']['category']['primaryCategory'] = 'Account';
      painters_login_data_layer.event = 'ga-virtualPageView';
      dataLayer.push(painters_login_data_layer);
    });

    //.product-detail__information .product-detail__collapse .collapser .maximize
    $('body').on('click', '.product-detail__information .product-detail__collapse', function (ev) {
      if ($(this).hasClass('show-dlr')) {
        $(this).removeClass('show-dlr');
      }
      else {
        analyticsEventCall('Product information', 'Show information', $(this).find('h3').text(), undefined, false);
        $(this).addClass('show-dlr');
      }
    });

    $('body').on('click', '.colour-detail__main--bottom-testers .popover-content .popover-text a', function (ev) {
      analyticsEventCall('Colour testers', 'Read more', $('.colour-detail__main--colour-number').text() + ' | ' + $('.colour-detail__main--colour-number').attr('data-colorid'), undefined, false);
    });

    $('body').on('click', '.pane-bean-hero-section-block .panel--hero .panel__buttons a, .content-item--vertical .content-item__text a', function (ev) {
      analyticsEventCall('Colour testers', 'View all colour testers', undefined, undefined, false);
    });

    $('body').on('click', '.cookie-bar__btn--submit', function (ev) {
      $('.js-cookie-bar, .cookie-bar').hide();
      analyticsEventCall('Account', 'Accept', 'Cookie notification', undefined, false);
    });

    $('body').on('click', '.card-product-s .card-product-s__content--compare a', function (ev) {
      var productList = '';
      $('.card-product-s .card-product-s__content--compare a').each(function () {
        var prdValues = $(this).parents('.card-product-s');
        var prdGlobalId = prdValues.attr('data-globalid');
        var prdName = prdValues.find('.card-product-s__content--container p').text();
        if (productList !== '') {
          productList = productList + ' + ';
        }
        productList = productList + prdName + ' | ' + prdGlobalId;
      });
      analyticsEventCall('Product comparison', 'View comparison', productList, undefined, false);
    });

    $('body').on('submit', '#product-search-form', function (ev) {
      if ($('body').hasClass('page-product-search')) {
        analyticsEventCall('Search', 'Search again', undefined, undefined, false);
      }
    });

    $('body').on('submit', '#color-search-form', function (ev) {
      if ($('body').hasClass('page-colours-search')) {
        analyticsEventCall('Search', 'Search again', undefined, undefined, false);
      }
    });

    $('body').on('click', '.toggle-show-more .maximize__text, .toggle-show-more .toggle-show-more__icon .maximize ', function (ev) {
      if ($('body').hasClass('page-product-search') || $('body').hasClass('page-color-search') || $('body').hasClass('page-search')) {
        analyticsEventCall('Search', 'More results', undefined, undefined, false);
      }
    });
    
    $('body').on('click', '.storelist .list-view__item a.small', function (ev) {
        analyticsEventCall('Storefinder', 'Get directions', undefined, undefined, false);
    });
    
    $('body').on('click', '.storelist .list-view__item svg.icon-show-more', function (ev) {
        analyticsEventCall('Storefinder', 'More information', undefined, undefined, false);
    });
    
    $('body').on('click', '.storelist .storelist__items a.js-show-more-stores', function (ev) {
        analyticsEventCall('Storefinder', 'Show more', undefined, undefined, false);
    });

    $('body').on('change', '.stores-map-filter .filter-section__item input[name = "type-filter-group"], .stores-map-filter .filter-section__item input[name = "availability-filter-group"]', function (ev) {
      var dlrval = $('.stores-map-filter .filter-section__item input[name = "availability-filter-group"]:checked, .stores-map-filter .filter-section__item input[name = "type-filter-group"]:checked').map(function () {
        return $(this).parents('.filter-section__item').find('label').text().trim();
      }).get().join(' + ');
      if (typeof dlrval !== 'undefined' && dlrval !== '') {
        analyticsEventCall('Storefinder', 'Filter', dlrval, undefined, false);
      }
    });

    $('body').on('click', '.dlr-show-new-job-popup', function (ev) {
      analyticsEventCall('My workspace', 'Show new job popup', undefined, undefined, false);
    });

    $('body').on('click', '.workspace-add-product-to-workspace', function (ev) {
      var productData = $('.add-to-job-cart-painters');
      analyticsEventCall('My workspace', 'Save product', productData.attr('data-pname') + ' | ' + productData.attr('data-productglobalid'), undefined, false);
    });

    $('body').on('click', '.add-colors-button', function (ev) {
      analyticsEventCall('My workspace', 'Save colour', $(this).attr('data-colorname') + ' | ' + $(this).attr('data-colorno'), undefined, false);
    });

    $('body').on('click', '.js-start-upload.yes-upload, .js-trigger-upload-progress', function (ev) {
      //analyticsEventCall('My workspace','Upload image',undefined,undefined,false);
    });

    $('body').on('click', '.dlr-workspace-open-folder', function (ev) {
      analyticsEventCall('My workspace', 'Open folder', 'Job', undefined, false);
    });

    $('body').on('click', '.dlr-workspace-start-slideshow', function (ev) {
      analyticsEventCall('My workspace', 'Start presenting slideshow', undefined, undefined, false);
    });

    $('body').on('click', '.modal.modal--gallery .modal-close', function (ev) {
      analyticsEventCall('My workspace', 'Stop presenting slideshow', undefined, undefined, false);
    });


    $('body').on('submit', '#painters-contact-us-form', function (ev) {
      var lastName = $('#edit-last-name').val();
      var message = $('#edit-message').val();
      var email = $('#edit-email-address').val();
      if (typeof lastName !== 'undefined' && lastName !== '' && isEmail(email) && typeof message !== 'undefined' && message !== '') {
        analyticsEventCall('Contact', 'Form submit', $('#edit-audience').val() + ' | ' + $('#edit-request-type').val() + ' | ' + $('#edit-brands').val(), undefined, false);
      }
    });

    if (typeof Drupal.settings.painters_google_tag_manager.dlr_register_type !== 'undefined' && Drupal.settings.painters_google_tag_manager.dlr_register_type !== '') {
      analyticsEventCall('Account', 'Register', Drupal.settings.painters_google_tag_manager.dlr_register_type, undefined, false);
      $.cookie("dlr_register_type", null, {path: '/'});
      //$.removeCookie("logged_in",{ path: '/' });
    }

    if (typeof Drupal.settings.painters_google_tag_manager.dlr_login_type !== 'undefined' && Drupal.settings.painters_google_tag_manager.dlr_login_type !== '') {
      analyticsEventCall('Account', 'Login', Drupal.settings.painters_google_tag_manager.dlr_login_type, undefined, false);
      $.cookie("dlr_login_type", null, {path: '/'});
      //$.removeCookie("logged_in",{ path: '/' });
    }

    if (typeof Drupal.settings.painters_google_tag_manager.dlr_user_delete !== 'undefined' && Drupal.settings.painters_google_tag_manager.dlr_user_delete !== '') {
      analyticsEventCall('Account', 'Delete', undefined, undefined, false);
      $.cookie("dlr_user_delete", null, {path: '/'});
      //$.removeCookie("logged_in",{ path: '/' });
    }


    if (typeof Drupal.settings.painters_google_tag_manager.dlr_user_password !== 'undefined' && Drupal.settings.painters_google_tag_manager.dlr_user_password !== '') {
      analyticsEventCall('Account', 'Update', 'Password', undefined, false);
      $.cookie("dlr_user_password", null, {path: '/'});
    }

    if (typeof Drupal.settings.painters_google_tag_manager.dlr_user_personal_info !== 'undefined' && Drupal.settings.painters_google_tag_manager.dlr_user_personal_info !== '') {
      analyticsEventCall('Account', 'Update', 'Personal information', undefined, false);
      $.cookie("dlr_user_personal_info", null, {path: '/'});
    }

    if (typeof Drupal.settings.painters_google_tag_manager.dlr_user_addr_info !== 'undefined' && Drupal.settings.painters_google_tag_manager.dlr_user_addr_info !== '') {
      analyticsEventCall('Account', 'Update', 'Address information', undefined, false);
      $.cookie("dlr_user_addr_info", null, {path: '/'});
    }

    if (typeof Drupal.settings.painters_google_tag_manager.dlr_user_cmp_info !== 'undefined' && Drupal.settings.painters_google_tag_manager.dlr_user_cmp_info !== '') {
      analyticsEventCall('Account', 'Update', 'Company information', undefined, false);
      $.cookie("dlr_user_cmp_info", null, {path: '/'});
    }

  }

});

jQuery(window).load(function ($) {
  // executes when complete page is fully loaded, including all frames, objects and images
});

/**
 * Datalayer analytics function
 * 
 */
function analyticsEventCall(a, b, c, d, e) {
  //Arguments Description
  //a => 'eventCategory'
  //b => 'eventAction'
  //c => 'eventLabel'
  //d => 'eventValue'
  //e => 'nonInteraction'
  if (typeof b !== 'undefined' && b !== '' && isNaN(parseInt(b))) {
    b = b.trim();
  }

  if (typeof c !== 'undefined' && c !== '' && isNaN(parseInt(c))) {
    c = c.trim();
  }

  try {
    analyticsEvent(a, b, c, d, e);
  }
  catch (err) {
    dataLayer.push({event: 'ga-event', eventCategory: a, eventAction: b, eventLabel: c, eventValue: d, eventNonInt: e});
  }
}


function get_classes_split(classList, splitValue) {
  var clssssName = '';
  $.each(classList, function (index, item) {
    if (item.indexOf(splitValue) >= 0) {
      clssssName = item.split(splitValue);
      clssssName = upperFirsctchar(clssssName[1]);
    }
  });
  return clssssName;
}

//Function to convert 1st chaaracter to uppercase
function upperFirsctchar(str) {
  if (isNaN(parseInt(str))) {
    return str.charAt(0).toUpperCase() + str.slice(1);
  }
  else {
    return str;
  }
}

//Function to check Valid Email or Not
function isEmail(email) {
  var regex = /^([a-zA-Z0-9_.+-])+\@(([a-zA-Z0-9-])+\.)+([a-zA-Z0-9]{2,4})+$/;
  return regex.test(email);
}

function changeMembersCount(value) {
  analyticsEventCall('Training courses', 'Change number of people', value, undefined, false);
}

function submitTrainingForm(email) {
  if (isEmail(email.value) && typeof jQuery('.node-type-training .content-intro .h2').text() !== 'undefined'
          && jQuery('.node-type-training .content-intro .h2').text() !== '') {
    analyticsEventCall('Training courses', 'Finish registration', jQuery('.node-type-training .content-intro .h2').text(), undefined, false);
  }
}
