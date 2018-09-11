<?php

/**
 * @file labels.inc
 *
 * @param <type> $variables
 * @param <type> $hook
 */

/**
 *
 * @return string
 */
function _get_painters_labels() {
  $default_labels = array();
  //User & My account labels
  $user_labels = array(
    'user_account_settings_label' => 'Your settings',
    'user_account_signout_label' => 'Log out',
    'user_registration_register_tab' => 'Register',
    'user_registration_signin_tab' => 'Sign in',
    'user_account_page_title' => 'My account',
    'user_registration_header_title' => 'Registration',
    'user_registration_header_description' => 'Please register or sign in for Dulux',
    'user_registration_register_tab' => 'Register',
    'user_registration_signin_tab' => 'Sign in',
    'user_registration_register_info_1' => 'Favorite products and colours in one place',
    'user_registration_register_info_2' => 'Favorite products and colours in one place',
    'user_registration_register_info_3' => 'All your jobs on all your devices',
    'user_registration_error' => 'Error. Not sufficient permissions set to complete this operation. Adjust your social account permissions or register by email below.',
    'user_registration_server_error' => 'Server Error. Please register after few hours',
    'user_access_gigya_error' => 'Not able to create account. Please access after few hours',
    'user_registration_i_agree' => 'I agree with the',
    'user_registration_email_label' => 'Email',
    'user_login_password_label' => 'Password',
    'user_login_email_placeholder' => 'Please enter your email address',
    'user_login_email_required' => 'Please enter your email address',
    'user_login_email_valid' => 'Please enter a valid email address',
    'user_login_social_network' => 'Login using social networks',
    'user_registration_or_label' => 'or',
    'user_registration_show_pass' => 'Show',
    'user_registration_hide_pass' => 'Hide',
    'user_registration_password_label' => 'Password',
    'user_registration_password_valid' => 'Password requires at least 6 characters including at least 1 digit',
    'user_registration_password_require' => 'Please enter a password',
    'user_registration_news_discounts' => array('value' => 'I consent to receiving the personalized newsletter from  [Insert brand name], to be informed about AkzoNobel products (and services), including from other <a href="#" target="_blank">AkzoNobel Group companies</a>,', 'format' => NULL),
    'user_registration_news_discounts_extra' => array('value' => 'events and promotions (including offers and discounts), for which AkzoNobel may analyse my personal data, including the preferences I shared with AkzoNobel, my online and offline shopping history, and my registered use of AkzoNobel websites and apps. AkzoNobel can contact me through <i>E-mail, Mail, SMS, Apps, Social Media or though other communication channels provided by me.</i> <a href="second-layer-policy">What does this mean?</a>', 'format' => NULL),
    'user_registration_terms_conditions' => 'Terms and Conditions',
    'user_registration_terms_conditions_link' => 'terms-use',
    'user_registration_akzonobel_group_label' => 'AkzoNobel Group companies',
    'user_registration_meaning_label' => 'What does this mean?',
    'user_registration_privacy_policy' => 'Concerned about your privacy? Read our',
    'user_registration_privacy_policy_link_label' => 'Privacy Policy',
    'user_registration_create_button' => 'Create your account',
    'user_login_header_title' => 'Sign in',
    'user_login_or_label' => 'or',
    'user_login_header_description' => 'Please register or sign in for Dulux',
    'user_login_submit_button' => 'Sign in',
    'user_loggedin_message' => 'Welcome! You are succesfully logged in!',
    'user_signin_forgot_password' => 'Forgot password?',
    'user_forgot_password_header_description' => 'Type in your email address below and we\'ll send you an email with instructions.',
    'user_reset_password_header_title' => 'Reset your password',
    'user_reset_password_header_description' => 'Choose a new password below. It should be at least 6 characters and 1 number.',
    'user_account_header_title' => 'Account information',
    'user_personal_header_title' => 'Personal information',
    'user_address_header_title' => 'Address information',
    'user_address_required_error' => 'Please enter an address.',
    'user_address_city_required_error' => 'Please enter a city.',
    'user_address_zip_required_error' => 'Please enter zip code.',
    'user_company_header_title' => 'Company information',
    'user_company_name_title' => 'Enter your full company name',
    'user_company_employees_title' => 'Employees',
    'user_company_brands_title' => 'AkzoNobel brands used',
    'user_company_cancel_title' => 'Cancel',
    'user_company_save_title' => 'Save',
    'user_password_current_pass' => 'Current Password',
    'user_password_new_pass' => 'New Password',
    'user_password_check_mail' => 'Please check your email',
    'user_password_link_sent_to' => 'The link has been send to',
    'user_password_to_create_new' => 'To create a new password, click the link in the e-mail and enter a new password',
    'user_personal_first_name_title' => 'First name',
    'user_personal_last_name_title' => 'Last name',
    'user_personal_role_title' => 'Role',
    'user_personal_mob_title' => 'Mobile number',
    'user_personal_cancel_title' => 'Cancel',
    'user_personal_save_title' => 'Save',
    'user_address_street_title' => 'Street',
    'user_address_postcode_title' => 'Postcode',
    'user_address_city_title' => 'City',
    'user_address_cancel_title' => 'Cancel',
    'user_address_save_title' => 'Save',
    'user_profile_completion_message' => 'You\'ve filled out all your information!',
    'user_profile_imported_from' => 'Imported from',
    'user_profile_completed_label' => 'completed',
    'user_profile_completion_message' => 'You\'ve filled out all your information!',
    'user_profile_completion_message_2' => 'We will e-mail you your promotion code',
    'user_profile_completion_button' => 'OK, I get it',
    'user_profile_incomplete_message' => 'Fill out the rest of your info and get',
    'user_profile_incomplete_free_message' => 'free',
    'user_profile_incomplete_shipping_message' => 'shipping on your next order',
    'user_profile_incomplete_improve_message' => 'We will use your info to improve our site and services. We will not send info to third parties',
    'user_profile_delete_account' => 'Delete your account',
    'user_delete_header_title' => 'Are you sure you want to delete your account?',
    'user_delete_header_description' => 'When choosing to delete your account, all your saved and favorited content will be deleted from your Workspace and from the Xpert app.',
    'user_delete_checkbox_data' => 'I want to delete my account and all my data',
    'user_delete_confirm_message' => 'You need to confirm if you want to delete your account',
    'email_preferences' => 'Email preferences',
    'newsletter_unsubscribe_page_title' => 'Unsubscribe from News letter',
    'newsletter_unsubscribe_success_page_title' => 'Successfully unsubscribed from News letter',
    'user_unsubscribe_header_title' => 'Wish to unsubscribe',
    'user_unsubscribe_header_description' => 'That is not a problem. Please choose one of the options below.',
    'user_unsubscribe_not_relevant' => 'Newsletters are irrelevant',
    'user_unsubscribe_too_frequent' => 'Newsletters are too frequent',
    'user_unsubscribe_address_shared' => 'You have concerns your address is being shared/sold',
    'user_unsubscribe_dont_recall' => 'You dont recall signing up',
    'user_unsubscribe_privacy_concerns' => 'You have privacy concerns',
    'user_unsubscribe_submit' => 'Unsubscribe Newsletter',
    'user_unsubscribe_success_header_title' => 'You are unsubscribed',
    'user_unsubscribe_success_header_description' => 'we will no longer send newsletters to',
    'user_unsubscribe_success_extra' => 'Have a nice day!',
    'user_unsubscribe_success_button' => ' To homepage',
    'user_registration_terms_conditions' => 'Registration',
    'user_registration_terms_conditions' => 'Registration',
    'user_terms_conditions_error' => 'Accepting Terms and Conditions is required.',
  );
  $default_labels += $user_labels;

  //Shopping list labels
  $shopping_list_labels = array(
    'shopping_list_shoppinglist_label' => 'Shoppinglist',
    'shopping_list_pickup_store_label' => 'Pick up in store',
    'shopping_list_products_label' => 'Products',
    'shopping_list_color_label' => 'Color',
    'shopping_list_quantity_label' => 'Quantity',
    'shopping_list_size_label' => 'Size Packs',
    'shopping_list_price_label' => 'Price',
    'shopping_list_notes_label' => 'Notes',
    'shopping_list_notes_placeholder' => 'Here you can write a little note.',
    'shopping_list_price_text' => 'Price is not available online. Please <a href="/advice/contact-us">contact</a> your store for more information',
    'shopping_list_save_button' => 'save',
    'shopping_list_pdf_download_label' => 'Download as PDF',
    'shopping_list_find_store_label' => 'Find a Store',
    'shopping_list_add_product_sccuess_label' => 'Product was added to your shoppinglist.',
    'shopping_list_add_product_error_label' => 'Product was not added to your shoppinglist.',
    'shopping_list_delete_product_label' => 'product was deleted from shoppinglist',
  );
  $default_labels += $shopping_list_labels;


  $my_workspace_slideshow = array(
    'painters_my_workspace_popupbutton' => 'OK, I get it',
    'painters_my_workspace_popupheading' => 'Present your skills to potential clients',
    'painters_my_workspace_popupdescription' => 'Add images to your best work<br> by clicking on the "Slide show"<br> button and show your<br> images in a professional way.<br><br><br>',
    'slideshow_popup_button' => 'OK, I get it',
  );
  $default_labels += $my_workspace_slideshow;

  $workspace_labels = array(
    'myworkspace_menu_link_label' => 'my workspace',
    'myworkspace_label' => 'My Workspace',
    'myworkspace_label_without_login' => 'Create your account',
    'workspace_overview_create_job_label' => 'You donâ€™t have a job yet',
    'jobs' => 'My jobs',
    'create_new_job_label' => 'Add a new job',
    'create_job_label' => 'Job name',
    'workspace_create_job_placeholder' => "e.g. John's house, Doors and windows",
    'workspace_create_job_error' => 'Please enter a job name',
    'description_label' => 'Description',
    'workspace_description_job_placeholder' => 'Add notes about your job',
    'workspace_create_job_save_button_label' => 'Create a job',
    'workspace_edit_job_save_button_label' => 'Save',
    'workspace_edit_job_delete_button_label' => 'Delete job',
    'workspace_create_new_label' => 'Add new job',
    'workspace_product_add_to_job_label' => 'Save to My Workspace',
    'workspace_color_save_label' => 'Save Color',
    'painters_utils_get_label' => 'Suggestions',
    'workspace_suggestions_label' => 'Suggestions',
    'workspace_edit_job_form_header' => 'Edit job',
    'workspace_product_save_label' => 'Save Product',
    'my_workspace_overview_saved_products' => 'My saved products',
    'painters_my_workspace_no_color' => 'No colour',
    'painters_my_workspace_jd_add_shopping' => 'Add to shoppinglist',
    'painters_my_workspace_product_show_more' => 'See all products',
    'painters_my_workspace_product_show_less' => 'See fewer products',
    'painters_my_workspace_job_updated_yesterday' => 'Yesterday',
    'painters_my_workspace_job_updated_today' => 'Today',
    'my_workspace_overview_saved_colors' => 'My saved colours',
    'my_workspace_overview_nojob_title' => 'You dont have a job yet',
    'my_workspace_overview_help_text' => 'How it works?',
    'my_workspace_overview_saved_aricles' => 'Articles you might like',
    'my_workspace_overview_nojob_desc' => 'Create your first job in My workspace and find out how easly you can keep all job information together, like products, colours and images.',
    'painters_my_workspace_job_empty' => 'This job is empty',
    'painters_my_workspace_view_job' => 'View Job',
    'painters_my_workspace_jd_slide_show' => 'Showcase',
    'painters_my_workspace_job_empty_message' => 'You currently have to visualisations, colours or products in this job',
    'painters_my_workspace_job_help_message' => 'How can this Workspace help you in your work',
    'painters_my_workspace_job_more_info' => 'More information',
    'painters_my_workspace_description' => 'Use My Workspace to manage jobs and win new clients',
    'painters_my_workspace_signin' => 'sign in',
    'painters_my_workspace_account' => 'Create My Workspace account',
    'painters_my_workspace_description' => 'Use My Workspace to manage jobs and win new clients',
    'painters_my_workspace_login_reg_or' => 'or',
    'painters_my_workspace_heading' => 'My Workspace',
    'painters_my_workspace_detail_page_heading' => 'Workspace detail',
    'painters_my_workspace_images_upload_modal_no_button' => 'No, cancel',
    'painters_my_workspace_images_upload_modal_yes_button' => 'Yes, upload images',
    'painters_my_workspace_images_upload_modal_terms_cond_link' => 'terms-use',
    'painters_my_workspace_images_upload_modal_terms_cond' => 'Terms & Conditions.',
    'painters_my_workspace_images_upload_modal_see_text' => 'Also see our',
    'painters_my_workspace_images_upload_modal_text' => 'When you use photos from the homes of clients, be aware of the fact that you need consent from them to use them.',
    'painters_my_workspace_jd_find_products' => 'Find products',
    'painters_my_workspace_jd_delete_cancel' => 'No, cancel',
    'painters_my_workspace_jd_delete_button' => 'Yes, delete',
    'painters_my_workspace_delete_job_content' => 'Are you sure? All notes, photos and saved items will be deleted.',
    'painters_my_workspace_delete_job_header' => 'Delete job',
    'painters_my_workspace_jd_add_shopping' => 'Add to shoppinglist',
    'painters_my_workspace_jd_add_desc' => 'Add description',
    'painters_my_workspace_jd_edit_link' => 'Edit',
    'painters_my_workspace_jd_created' => 'Created',
    'painters_my_workspace_jd_category_link' => 'My Workspace',
    'painters_my_workspace_job_heading' => 'What next?',
    'painters_my_workspace_job_updated_yesterday' => 'Yesterday',
    'painters_my_workspace_job_updated_today' => 'Today',
    'painters_my_workspace_job_updated' => 'Updated',
    'painters_my_workspace_product_show_less' => 'See fewer products',
    'painters_my_workspace_product_show_more' => 'See all products',
    'painters_my_workspace_colors_show_less' => 'See fewer colours',
    'painters_my_workspace_colors_show_more' => 'See all colours',
    'painters_my_workspace_jobs_show_less' => 'See fewer jobs',
    'painters_my_workspace_jobs_show_more' => 'See all jobs',
    'painters_my_workspace_images_saved_label' => 'My saved photos',
    'painters_my_workspace_products_saved_label' => 'My saved products',
    'painters_my_workspace_colours_saved_label' => 'My saved colours',
    'painters_my_workspace_images_job_label' => 'Add a photo',
    'painters_my_workspace_products_job_label' => 'Add a product',
    'painters_my_workspace_colours_job_label' => 'Add a colour',
    'painters_my_workspace_images_description_label' => 'Upload photos of this job to your showcase',
    'painters_my_workspace_products_description_label' => 'Add products for the job',
    'painters_my_workspace_colours_description_label' => 'Add colours for the job',
  );
  $default_job_urls = array(
    'images' => '',
    'products' => 'products-listing',
    'colours' => 'colours',
  );
  $jobs = _get_my_workspace_job_categories();
  foreach ($jobs as $key => $job) {
    //$workspace_labels['painters_my_workspace_' . $key . '_job_label'] = 'Add '.$key;
    //$workspace_labels['painters_my_workspace_' . $key . '_description_label'] = 'Add '.$key;
    $workspace_labels['painters_my_workspace_' . $key . '_job_url'] = isset($default_job_urls[$key]) ? $default_job_urls[$key] : '';
    //$workspace_labels['painters_my_workspace_' . $key . '_saved_label'] = 'Job '. $key;
    $workspace_labels['painters_my_workspace_' . $key . '_remove_label'] = '';
    $workspace_labels['painters_my_workspace_' . $key . '_icon'] = '';
  }
  $default_labels += $workspace_labels;

  //Shopping list labels
  $node_labels = array();
  $default_labels += $node_labels;

  //Shopping list labels
  $faq_labels = array(
    'faq_categories_label' => 'FAQ Categories',
    'faq_banner_title_label' => 'Answers to your questions',
  );
  $default_labels += $faq_labels;

  //Store labels
  $store_search_labels = array(
    'store_search_label' => 'Find a store near you',
    'store_search_placeholder_label' => 'Search postal code or city',
    'store_search_current_location_label' => 'Use current location',
    'store_search_clear_search_label' => 'Clear',
    'store_search_store_for_label' => 'stores for',
    'store_search_more_information_label' => 'See more',
    'store_search_direction_label' => 'Directions',
    'store_search_filter_label' => 'Filter by',
    'store_search_address_label' => 'Address',
    'store_search_telephone_label' => 'Telephone',
    'store_filter_label' => 'Filter',
    'back_to_result' => 'Back to results',
  );
  $default_labels += $store_search_labels;

  //Shopping list labels
  $color_search_labels = array(
    'product_search_banner_text_label' => 'What products do you need?',
    'product_search_placeholder_label' => 'Start searching',
    'product_search_noproduct_found_label' => 'No products found',
    'product_search_searchbox_clear_label' => 'Clear',
    'color_search_nocolor_found_label' => 'No colours found',
    'color_search_color_found_label' => 'colors found for',
    'color_search_searchbox_clear_label' => 'Clear',
  );
  $default_labels += $color_search_labels;

  //Shopping list labels
  $search_labels = array(
    'generic_search_no_results_search_again_label' => 'Please search again.',
    'generic_search_no_results_find_out_label' => 'We didnâ€™t find any color results for',
    'generic_search_no_results_title_label' => 'No results for ',
    'generic_search_enter_your_search_label' => 'Enter your search',
    'search_autocomplete_view_all_link' => 'View all results',
  );
  $default_labels += $search_labels;


  $datasheet_labels = array(
    'product_datasheet_title_label' => 'Product Datasheet &amp; Documents',
    'product_datasheet_search_placeholder_label' => 'Search datasheets',
    'product_datasheet_search_no_results_label' => 'No datasheet titles match your search query.',
    'product_datasheet_download_all_label' => 'Download All',
    'product_datasheet_clear_all_label' => 'Clear all',
    'product_datasheet_show_label' => 'Show Datasheets',
    'product_datasheet_hide_label' => 'Hide Datasheets',
    'product_datasheet_your_label' => 'Your datasheets',
    'product_datasheet_selected_label' => 'datasheet(s) selected',
    'product_datasheet_view_label' => 'View',
    'product_datasheet_clear_search_label' => 'Clear',
  );
  $default_labels += $datasheet_labels;

  $footer_labels = array(
    'footer_copyright' => 'Copyright ©',
    'footer_copyright_brand' => 'Akzo Nobel N.V.',
  );
  $default_labels += $footer_labels;

  //Shopping list labels
  $contact_labels = array(
    // Home page visit us block
    'contactus_visit_us' => 'Visit us',
    'contactus_visit_us_placeholder' => 'Location, storename',
    'contactus_page_title_label' => 'Get in touch',
    'contactus_form_sir_label' => 'Sir',
    'contactus_form_madam_label' => 'Madam',
    'contactus_header_iam_label' => 'I am a',
    'contactus_header_needof_label' => 'who needs',
    'contactus_header_from_label' => 'from',
    'contactus_form_salutions_label' => 'Fill in your details below',
    'contactus_form_last_name_label' => 'Your name',
    'contactus_form_last_name_error_label' => 'Please enter your last name',
    'contactus_form_email_address_error_label' => 'Please enter your email address',
    'contactus_form_email_address_label' => 'Email',
    'contactus_form_telephone_number_error_label' => 'Please enter a valid telephone number',
    'contactus_form_telephone_number_label' => 'Phone number',
    'contactus_form_message_error_label' => 'Please enter a message',
    'contactus_form_message_label' => 'How can we help?',
    'contactus_form_send_label' => 'Send your message',
    'contactus_header_iam_label' => 'I am a',
    'contactus_header_needof_label' => 'who needs',
    'contactus_header_from_label' => 'from',
    'contactus_form_thankyou_label' => 'Thank you!',
    'contactus_form_thankyou_message_label' => 'Thank you! We have received your question. How is this going to continue? We treat your question as soon as possible. Preferably the same day and within 2 days.',
    'painters_utils_get_label' => 'Error in submitting Your question',
    'contactus_link_label' => 'Contact Information',
  );
  $default_labels += $contact_labels;

  $training_labels = array(
    'training_register_for_label' => 'Register for',
    'training_email_address_label' => 'Email address',
    'training_email_address_placeholder_label' => 'Your email address',
    'training_email_address_required_label' => 'Please enter your email address',
    'training_email_address_error_label' => 'Please enter a valid email address',
    'training_people_attending_label' => 'How many people will be attending?',
    'training_submit_label' => 'Register',
    'training_thankyou_label' => 'Thank you',
    'training_success_one_label' => 'You have sucessfully registered',
    'training_success_two_label' => 'persons for the',
    'training_success_three_label' => 'training. You will receive an e-mail confirmation of your registration at',
    'training_related_courses_label' => 'Related training courses',
    'training_register_error_label' => 'Error in submitting your registration',
    'training_register_read_more_label' => 'Read more',
  );
  $default_labels += $training_labels;

  $product_labels = array(
    'product_detail_system_information_label' => 'System Information',
    'product_detail_application_method_label' => 'Application Method',
    'product_detail_info_touch_dry_label' => 'Touch dry',
    'product_detail_info_recoatable_label' => 'Recoatable',
    'product_detail_info_volume_solids_label' => 'Volume Solids',
    'product_detail_info_film_thickness_label' => 'Film Thickness',
    'product_detail_coverage_label' => 'Coverage',
    'product_detail_thinning_label' => 'Thinning',
    'product_detail_sheen_scale_label' => 'Sheen Scale',
    'product_detail_hse_label' => 'HSE',
    'product_detail_info_typical_use_label' => 'Typical Use',
    'product_detail_info_colour_range_label' => 'Colour Range',
    'product_detail_info_pack_size_label' => 'Pack size',
    'product_detail_info_key_benefits_label' => 'Key Benefits',
    'product_detail_info_composition_label' => 'Composition',
    'product_detail_info_typical_use_label' => 'Typical Use',
    'product_detail_product_information_label' => 'Product Information',
    'product_detail_datasheet_documents_label' => 'Datasheet & Documents',
    'product_detail_thinning_label' => 'Thinning',
    'product_detail_coverage_label' => 'Coverage',
    'product_detail_technical_information_label' => 'Technical Information',
    'product_detail_special_features_label' => 'Special Features',
    'product_detail_description_label' => 'About this product',
    'product_detail_add_shoppinglist_label' => 'Add to list',
    'product_detail_select_store_label' => 'Find a store',
    'product_detail_size_pack_label' => 'Size Pack',
    'product_detail_quantity_label' => 'Quantity',
    'product_detail_add_job_label' => 'Add to job',
    'product_detail_select_color_label' => 'Select a colour for this paint',
    'product_detail_choose_other_color_label' => 'See more colours',
    'product_detail_download_pdf_label' => 'Download as PDF',
    'products_home_page_my_products_label' => 'My products',
    'product_compare_numbercoats_label' => 'Number of coats',
    'product_compare_dryingtime_label' => 'Drying time',
    'product_compare_composition_label' => 'Composition',
    'product_compare_coverage_label' => 'Coverage per liter',
    'product_compare_packsize_label' => 'Packsize',
    'product_compare_surface_label' => 'Surface',
    'product_compare_location_label' => 'Location',
    'product_compare_keybenefits_label' => 'Key Benefits',
    'product_compare_title_label' => 'Compare your products',
    'product_compare_change_products_label' => 'Change products',
    'color_listing_page_title' => 'Color listing',
  );
  $default_labels += $product_labels;

  $product_listing_labels = array(
    'product_listing_view_compared_label' => 'See compared',
    'product_listing_compare_label' => 'Compare',
    'product_listing_clear_all_label' => 'Clear all',
    'product_listing_filter_by_label' => 'Filter by',
    'product_listing_product_you_label' => 'results for you',
    'product_listing_popular_product' => 'Popular product',
    'product_listing_products_for' => 'Products for',
    'product_listing_no_results' => 'No results',
    'product_listing_we_didnt_find' => 'We didn\'t find any product results for',
    'product_listing_please' => 'Please',
    'product_listing_search_again' => 'search again.',
    'product_listing_we_have_label' => 'We have',
    'product_listing_mobile_heading' => 'Product Filters',
    'product_listing_apply_filters' => 'Apply filters',
    'product_listing_clear_filters' => 'Clear filters',
    'product_listing_show_more_label' => 'See more',
    'product_listing_show_less_label' => 'See less',
    'products_download_pdf_label' => 'Download as PDF',
    'products_add_to_shoppinglist_label' => 'Add to list',
  );
  $default_labels += $product_listing_labels;

  $product_overview_labels = array(
    'product_overview_product_label' => 'product',
    'product_overview_more_about_label' => 'More about',
    'product_overview_view_brand_label' => 'View brand',
    'product_overview_highlighted_products_label' => 'Highlighted products',
    'product_overview_browser_products_label' => 'What products do you need?',
    'product_overview_our_products_label' => 'Our products',
  );
  $default_labels += $product_overview_labels;

  $color_tool_labels = array(
    'color_tools_all_audiences_label' => 'All audiences',
    'color_collection_all_colour_collection_label' => 'All colour collections',
    'color_collection_download_brochure_label' => 'Download the brochure',
  );
  $default_labels += $color_tool_labels;

  $color_detail_labels = array(
    'color_details_disclaimer_note_label' => 'The colour on your screen may be slightly different to the colour of the paint itself.',
    'color_details_color_disclaimer_label' => 'Please note',
    'color_details_order_tester' => 'Order tester',
    'color_details_per_item_label' => 'per item',
    'color_details_more_information' => 'more information',
    'color_listing_count_color_label' => 'colors',
    'color_details_save_job_label' => 'Save to favourites',
    'color_details_choose_product' => 'What finish do you need?',
    'color_listing_all_color_label' => 'All colours',
    'color_listing_popular_color_label' => 'Popular colours',
    'color_listing_hue_label' => 'Colour',
    'color_listing_filter_location_label' => 'Location',
    'color_listing_filter_surface_label' => 'Surface',
    'color_listing_filter_finishes_label' => 'Finishes',
    'color_listing_filter_location_default_label' => 'All location',
    'color_listing_filter_surface_default_label' => 'All surfaces',
    'color_listing_filter_finishes_default_label' => 'All finishes',
    'color_listing_search_placeholder_label' => 'Choose a colour...',
    'color_listing_banner_label' => 'Find the perfect colours for every client',
    'color_listing_clear_filters_label' => 'Clear filters',
  );
  $default_labels += $color_detail_labels;

  $home_page_labels = array(
    'home_page_otherbrands_label' => 'Our other brands',
    'home_page_brand_read_more_label' => 'Read more',
    'home_page_header_label' => 'Solutions for professional painters',
  );
  $default_labels += $home_page_labels;

  $knowledge_center_labels = array(
    'new_articles_header_label' => 'New',
    'new_articles_read_more_label' => 'Read More',
    'other_articles_all_advice_header_label' => 'Other articles in all advice',
    'new_articles_tabs_label_all' => 'All',
    'new_articles_tabs_label_categories' => 'Categories',
    'new_articles_tabs_page_heading' => 'Knowledge',
    'new_articles_tabs_page_read_more' => 'Read More',
  );
  $default_labels += $knowledge_center_labels;

  return $default_labels;
}

/**
 * @implements hook_potx_find_t_calls()
 */
function painters_deployment_potx_find_t_calls($file_name, $save_callback) {
  $labels = _get_painters_labels();
  $line = 0;
  foreach ($labels as $variable_name => $default_label) {
    $label = variable_get($variable_name, $default_label);
    $save_callback($label, NULL, $file_name, $line);
    $line++;
  }
}
