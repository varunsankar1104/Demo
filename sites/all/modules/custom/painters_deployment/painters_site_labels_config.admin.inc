<?php

/*
 * Menu page call back implementation for the shopping list labels creation
 */

function painters_create_workspace_labels($form, &$form_state) {
  $form = array();
  global $base_url;

  $form['settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Create workspace Label settings'),
  );
  $form['shopping_list_shoppinglist_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Shoppinglist Label'),
    '#default_value' => painters_utils_get_label('shopping_list_shoppinglist_label', '', FALSE),
    '#description' => t('Enter label for "Shoppinglist".'),
    '#size' => 100,
    '#maxlength' => 100,
    '#required' => TRUE,
      // make this field required
  );
  $form['shopping_list_pickup_store_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Shopping list pickup store Label'),
    '#default_value' => painters_utils_get_label('shopping_list_pickup_store_label', '', FALSE),
    '#description' => t('Enter label for the "Pick up store".'),
    '#size' => 100,
    '#maxlength' => 100,
    '#required' => TRUE,
      // make this field required
  );
  $form['shopping_list_products_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Shopping list Products Label'),
    '#default_value' => painters_utils_get_label('shopping_list_products_label', '', FALSE),
    '#description' => t('Enter label for the field "Products".'),
    '#size' => 100,
    '#maxlength' => 100,
    '#required' => TRUE,
      // make this field required
  );
  $form['shopping_list_color_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Color Label'),
    '#default_value' => painters_utils_get_label('shopping_list_color_label', '', FALSE),
    '#description' => t('Enter label for the field "Color".'),
    '#size' => 100,
    '#maxlength' => 100,
    '#required' => TRUE,
      // make this field required
  );
  $form['shopping_list_quantity_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Quantity Label'),
    '#default_value' => painters_utils_get_label('shopping_list_quantity_label', '', FALSE),
    '#description' => t('Enter label for the field "Quantity".'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['shopping_list_size_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Size Label'),
    '#default_value' => painters_utils_get_label('shopping_list_size_label', '', FALSE),
    '#description' => t('Enter label for the field "Size packs".'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['shopping_list_price_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Price Label'),
    '#default_value' => painters_utils_get_label('shopping_list_price_label', '', FALSE),
    '#description' => t('Enter label for the field "Price".'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['shopping_list_notes_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Notes Label'),
    '#default_value' => painters_utils_get_label('shopping_list_notes_label', '', FALSE),
    '#description' => t('Enter label for the field "Notes".'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['shopping_list_notes_placeholder'] = array(
    '#type' => 'textfield',
    '#title' => t('Shopping list Find store Label'),
    '#default_value' => painters_utils_get_label('shopping_list_notes_placeholder', '', FALSE),
    '#description' => t('Enter label for the field "Find store".'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['shopping_list_price_text'] = array(
    '#type' => 'textarea',
    '#title' => t('Shopping list Price text configuration'),
    '#default_value' => painters_utils_get_label('shopping_list_price_text', '', FALSE),
    '#description' => t('Enter text for the price column'),
  );
  $form['shopping_list_save_button'] = array(
    '#type' => 'textfield',
    '#size' => 60,
    '#maxlength' => 250,
    '#title' => t('Save button (notes)'),
    '#default_value' => painters_utils_get_label('shopping_list_save_button', '', FALSE),
    '#description' => t('Enter label for the save note button.'),
  );
  $form['shopping_list_pdf_download_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Shopping list Down load PDF text'),
    '#default_value' => painters_utils_get_label('shopping_list_pdf_download_label', '', FALSE),
    '#description' => t('Enter text for the download button'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['shopping_list_find_store_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Find store Label'),
    '#default_value' => painters_utils_get_label('shopping_list_find_store_label', '', FALSE),
    '#description' => t('Enter label for the field "Find store".'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['shopping_list_add_product_sccuess_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Add Product to shopping list sccuess Label'),
    '#default_value' => painters_utils_get_label('shopping_list_add_product_sccuess_label', '', FALSE),
    '#description' => t('Enter label for the field "Add Product to shopping list sccuess".'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['shopping_list_add_product_error_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Add Product to shopping list error Label'),
    '#default_value' => painters_utils_get_label('shopping_list_add_product_error_label', '', FALSE),
    '#description' => t('Enter label for the field "Add Product to shopping list error".'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['shopping_list_delete_product_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Delete Product from shopping list Label'),
    '#default_value' => painters_utils_get_label('shopping_list_delete_product_label', '', FALSE),
    '#description' => t('Enter label for the field "Delete Product from shopping list".'),
    '#size' => 60,
    '#maxlength' => 250,
  );

  // Jon label settings
  $form['myworkspace_menu_link_label'] = array(
    '#type' => 'textfield',
    '#title' => t('"my workspace" menu link label'),
    '#default_value' => painters_utils_get_label('myworkspace_menu_link_label', '', FALSE),
    '#description' => t('Enter label for "my workspace" menu link .'),
  );
  $form['myworkspace_label'] = array(
    '#type' => 'textfield',
    '#title' => t('My workspace label'),
    '#default_value' => painters_utils_get_label('myworkspace_label', '', FALSE),
    '#description' => t('Enter label for "My Workspace".'),
  );
  $form['myworkspace_label_without_login'] = array(
    '#type' => 'textfield',
    '#title' => t('My workspace label for without login Users'),
    '#default_value' => painters_utils_get_label('myworkspace_label_without_login', '', FALSE),
    '#description' => t('This value will be used in brand home pages when user is not logged in.'),
  );

  $form['jobs'] = array(
    '#type' => 'textfield',
    '#title' => 'jobs',
    '#default_value' => painters_utils_get_label('jobs', '', FALSE),
    '#size' => 100,
    '#maxlength' => 100,
    '#required' => TRUE,
      // make this field required
  );
  $form['workspace_suggestions_label'] = array(
    '#type' => 'textfield',
    '#title' => 'Suggestions label',
    '#default_value' => painters_utils_get_label('workspace_suggestions_label', '', FALSE),
    '#description' => t('Enter label for "Suggestions"'),
    '#size' => 100,
    '#maxlength' => 100,
    '#required' => TRUE,
      // make this field required
  );
  $form['create_new_job_label'] = array(
    '#type' => 'textfield',
    '#title' => 'Create a new job',
    '#default_value' => painters_utils_get_label('create_new_job_label', '', FALSE),
    '#size' => 100,
    '#maxlength' => 100,
    '#required' => TRUE,
      // make this field required
  );
  $form['create_job_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Job Name Label'),
    '#default_value' => painters_utils_get_label('create_job_label', '', FALSE),
    '#description' => t('Enter label for the feild "Job Name".'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['workspace_create_job_placeholder'] = array(
    '#type' => 'textfield',
    '#title' => t('Please enter New job Label'),
    '#default_value' => painters_utils_get_label('workspace_create_job_placeholder', '', FALSE),
    '#description' => t('Enter label for "New job".'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['workspace_create_job_error'] = array(
    '#type' => 'textfield',
    '#title' => t('Please enter a job name Label'),
    '#default_value' => painters_utils_get_label('workspace_create_job_error', '', FALSE),
    '#description' => t('Enter label for "Please enter a job name".'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['workspace_create_job_save_button_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Enter create job form "Save" Label'),
    '#default_value' => painters_utils_get_label('workspace_create_job_save_button_label', '', FALSE),
    '#description' => t('Enter create job form "Save" Label'),
    '#size' => 60,
    '#maxlength' => 250,
  );

  $form['description_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Description (Optional) Label'),
    '#default_value' => painters_utils_get_label('description_label', '', FALSE),
    '#description' => t('Enter label for the feild "Description".'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['workspace_description_job_placeholder'] = array(
    '#type' => 'textfield',
    '#title' => t('Enter Use this area to describe your job Label'),
    '#default_value' => painters_utils_get_label('workspace_description_job_placeholder', '', FALSE),
    '#description' => t('Enter label for "Use this area to describe your job".'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['workspace_edit_job_form_header'] = array(
    '#type' => 'textfield',
    '#title' => t('Enter Job Edit form "Edit job" header'),
    '#default_value' => painters_utils_get_label('workspace_edit_job_form_header', '', FALSE),
    '#description' => t('Enter Job Edit form header label for "Edit job".'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['workspace_edit_job_save_button_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Enter Job Edit form "Save" Label'),
    '#default_value' => painters_utils_get_label('workspace_edit_job_save_button_label', '', FALSE),
    '#description' => t('Enter Job Edit form label for "Save".'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['workspace_edit_job_delete_button_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Enter Job Edit form "Delete" Label'),
    '#default_value' => painters_utils_get_label('workspace_edit_job_delete_button_label', '', FALSE),
    '#description' => t('Enter Job Edit form label for "Delete".'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['workspace_create_new_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Create new label'),
    '#default_value' => painters_utils_get_label('workspace_create_new_label', '', FALSE),
    '#description' => t('Enter label for the feild "Create new".'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['workspace_color_save_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Save Color label'),
    '#default_value' => painters_utils_get_label('workspace_color_save_label', '', FALSE),
    '#description' => t('Enter label for the feild "Save Color".'),
    '#size' => 60,
    '#maxlength' => 250,
  );

  $form['workspace_product_save_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Save Product label'),
    '#default_value' => painters_utils_get_label('workspace_product_save_label', '', FALSE),
    '#description' => t('Enter label for the feild "Save Product".'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['workspace_product_add_to_job_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Add to jobs in your workspace label'),
    '#default_value' => painters_utils_get_label('workspace_product_add_to_job_label', '', FALSE),
    '#description' => t('Enter label for the feild "Add to jobs in your workspace".'),
    '#size' => 60,
    '#maxlength' => 250,
  );

  $form['my_workspace_overview_saved_products'] = array(
    '#type' => 'textfield',
    '#title' => t('Myworkspace Saved Products'),
    '#default_value' => painters_utils_get_label('my_workspace_overview_saved_products', '', FALSE),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['my_workspace_overview_saved_colors'] = array(
    '#type' => 'textfield',
    '#title' => t('Myworkspace Saved Colours'),
    '#default_value' => painters_utils_get_label('my_workspace_overview_saved_colors', '', FALSE),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['my_workspace_overview_saved_aricles'] = array(
    '#type' => 'textfield',
    '#title' => t('Myworkspace Saved articles'),
    '#default_value' => painters_utils_get_label('my_workspace_overview_saved_aricles', '', FALSE),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['my_workspace_overview_help_text'] = array(
    '#type' => 'textfield',
    '#title' => t('Myworkspace Help link'),
    '#default_value' => painters_utils_get_label('my_workspace_overview_help_text', '', FALSE),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['my_workspace_overview_nojob_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Myworkspace No Jobs Title'),
    '#default_value' => painters_utils_get_label('my_workspace_overview_nojob_title', '', FALSE),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['my_workspace_overview_nojob_desc'] = array(
    '#type' => 'textfield',
    '#title' => t('Myworkspace No Jobs Description'),
    '#default_value' => painters_utils_get_label('my_workspace_overview_nojob_desc', '', FALSE),
    '#size' => 60,
    '#maxlength' => 250,
  );

  $form['painters_my_workspace_job_empty'] = array(
    '#type' => 'textfield',
    '#title' => t('This job is empty label'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_job_empty', '', FALSE),
    '#description' => t('Enter "This job is empty" label.'),
    '#size' => 60,
    '#maxlength' => 250,
  );

  $form['job_category_settings']['painters_my_workspace_view_job'] = array(
    '#type' => 'textfield',
    '#title' => t('View Job label'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_view_job', '', FALSE),
    '#description' => t('Enter "View Job" label.'),
    '#size' => 60,
    '#maxlength' => 250,
  );

  $form['painters_my_workspace_job_empty_message'] = array(
    '#type' => 'textfield',
    '#title' => t('This job is empty Description'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_job_empty_message', '', FALSE),
    '#description' => t('Enter "This job is empty" Description.'),
    '#size' => 60,
    '#maxlength' => 250,
  );

  $form['painters_my_workspace_job_help_message'] = array(
    '#type' => 'textfield',
    '#title' => t('My workspace help message'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_job_help_message', '', FALSE),
    '#description' => t('Enter help text.'),
    '#size' => 60,
    '#maxlength' => 250,
  );

  $form['painters_my_workspace_job_more_info'] = array(
    '#type' => 'textfield',
    '#title' => t('More information label'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_job_more_info', '', FALSE),
    '#description' => t('Enter "More information" label.'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['painters_my_workspace_no_color'] = array(
    '#type' => 'textfield',
    '#title' => t('No colour label'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_no_color', '', FALSE),
    '#description' => t('Enter "No colour" label.'),
    '#size' => 60,
    '#maxlength' => 250,
  );

  $form['painters_my_workspace_jobs_show_more'] = array(
    '#type' => 'textfield',
    '#title' => t('Jobs Show more label'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_jobs_show_more', '', FALSE),
    '#description' => t('Enter label for Jobs "more results".'),
  );
  $form['painters_my_workspace_jobs_show_less'] = array(
    '#type' => 'textfield',
    '#title' => t('Jobs Show less label'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_jobs_show_less', '', FALSE),
    '#description' => t('Enter label for Jobs "Show less".'),
  );
  $form['painters_my_workspace_colors_show_more'] = array(
    '#type' => 'textfield',
    '#title' => t('Colors Show more label'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_colors_show_more', '', FALSE),
    '#description' => t('Enter label for Colors "more results".'),
  );
  $form['painters_my_workspace_colors_show_less'] = array(
    '#type' => 'textfield',
    '#title' => t('Colors Show less label'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_colors_show_less', '', FALSE),
    '#description' => t('Enter label for Colors "Show less".'),
  );
  $form['painters_my_workspace_product_show_more'] = array(
    '#type' => 'textfield',
    '#title' => t('Products Show more label'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_product_show_more', '', FALSE),
    '#description' => t('Enter label for Products "Show more".'),
  );
  $form['painters_my_workspace_product_show_less'] = array(
    '#type' => 'textfield',
    '#title' => t('Products Show less label'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_product_show_less', '', FALSE),
    '#description' => t('Enter label for Products "Show less".'),
  );
  $form['painters_my_workspace_job_updated'] = array(
    '#type' => 'textfield',
    '#title' => t('Updated label'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_job_updated', '', FALSE),
    '#description' => t('Enter label for "Updated".'),
  );
  $form['painters_my_workspace_job_updated_today'] = array(
    '#type' => 'textfield',
    '#title' => t('Today label'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_job_updated_today', '', FALSE),
    '#description' => t('Enter label for "Today".'),
  );
  $form['painters_my_workspace_job_updated_yesterday'] = array(
    '#type' => 'textfield',
    '#title' => t('Yesterday label'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_job_updated_yesterday', '', FALSE),
    '#description' => t('Enter label for "Yesterday".'),
  );

  $form['job_category_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Job category label settings'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['job_category_settings']['painters_my_workspace_job_heading'] = array(
    '#type' => 'textfield',
    '#title' => t('Job display heading'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_job_heading', '', FALSE),
    '#description' => t('Enter workspace job heading.'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['job_category_settings']['painters_my_workspace_jd_category_link'] = array(
    '#type' => 'textfield',
    '#title' => t('My Workspace category link label'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_jd_category_link', '', FALSE),
    '#description' => t('Enter "My Workspace category link" label.'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['job_category_settings']['painters_my_workspace_jd_created'] = array(
    '#type' => 'textfield',
    '#title' => t('Created date label'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_jd_created', '', FALSE),
    '#description' => t('Enter "Created" label.'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['job_category_settings']['painters_my_workspace_jd_edit_link'] = array(
    '#type' => 'textfield',
    '#title' => t('Edit link label'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_jd_edit_link', '', FALSE),
    '#description' => t('Enter "Edit" link label.'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['job_category_settings']['painters_my_workspace_jd_slide_show'] = array(
    '#type' => 'textfield',
    '#title' => t('Slideshow label'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_jd_slide_show', '', FALSE),
    '#description' => t('Enter "Slideshow" label.'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['job_category_settings']['painters_my_workspace_jd_add_desc'] = array(
    '#type' => 'textfield',
    '#title' => t('Job description link label'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_jd_add_desc', '', FALSE),
    '#description' => t('Enter "Add description" link label.'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['job_category_settings']['painters_my_workspace_jd_add_shopping'] = array(
    '#type' => 'textfield',
    '#title' => t('Add to shoppinglist label'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_jd_add_shopping', '', FALSE),
    '#description' => t('Enter "Add to shoppinglist" label.'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['job_category_settings']['painters_my_workspace_delete_job_header'] = array(
    '#type' => 'textfield',
    '#title' => t('Delete job modal header'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_delete_job_header', '', FALSE),
    '#description' => t('Enter "Delete job" label.'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['job_category_settings']['painters_my_workspace_delete_job_content'] = array(
    '#type' => 'textfield',
    '#title' => t('Delete job modal content text'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_delete_job_content', '', FALSE),
    '#description' => t('Enter "Delete job modal" content.'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['job_category_settings']['painters_my_workspace_jd_delete_button'] = array(
    '#type' => 'textfield',
    '#title' => t('Yes, delete label in delete job modal'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_jd_delete_button', '', FALSE),
    '#description' => t('Enter "Yes, delete" label.'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['job_category_settings']['painters_my_workspace_jd_delete_cancel'] = array(
    '#type' => 'textfield',
    '#title' => t('No, cancel label'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_jd_delete_cancel', '', FALSE),
    '#description' => t('Enter "No, cancel" label.'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['job_category_settings']['painters_my_workspace_jd_find_products'] = array(
    '#type' => 'textfield',
    '#title' => t('Find products label'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_jd_find_products', '', FALSE),
    '#description' => t('Enter "Find products" label.'),
    '#size' => 60,
    '#maxlength' => 250,
  );

  $jobs = _get_my_workspace_job_categories();
  foreach ($jobs as $key => $job) {
    $form['job_category_settings']['painters_my_workspace_' . $key . '_jobs_group'] = array(
      '#type' => 'fieldset',
      '#title' => t($job . ' category settings'),
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
    );
    $form['job_category_settings']['painters_my_workspace_' . $key . '_jobs_group']['painters_my_workspace_' . $key . '_job_label'] = array(
      '#type' => 'textfield',
      '#title' => t($job . ' display label'),
      '#default_value' => painters_utils_get_label('painters_my_workspace_' . $key . '_job_label', '', FALSE),
      '#description' => t('Enter label for the ' . $key . ' field'),
      '#size' => 60,
      '#maxlength' => 250,
    );
    $form['job_category_settings']['painters_my_workspace_' . $key . '_jobs_group']['painters_my_workspace_' . $key . '_description_label'] = array(
      '#type' => 'textfield',
      '#title' => t($job . ' display description'),
      '#default_value' => painters_utils_get_label('painters_my_workspace_' . $key . '_description_label', '', FALSE),
      '#description' => t('Enter description for the ' . $key . ' field'),
      '#size' => 60,
      '#maxlength' => 250,
    );

    $form['job_category_settings']['painters_my_workspace_' . $key . '_jobs_group']['painters_my_workspace_' . $key . '_saved_label'] = array(
      '#type' => 'textfield',
      '#title' => t($job . ' Block label'),
      '#default_value' => painters_utils_get_label('painters_my_workspace_' . $key . '_saved_label', '', FALSE),
      '#description' => t('Enter "' . $job . ' Block" label.'),
      '#size' => 60,
      '#maxlength' => 250,
    );
    $form['job_category_settings']['painters_my_workspace_' . $key . '_jobs_group']['painters_my_workspace_' . $key . '_remove_label'] = array(
      '#type' => 'textfield',
      '#title' => t($job . ' Remove label'),
      '#default_value' => painters_utils_get_label('painters_my_workspace_' . $key . '_remove_label', '', FALSE),
      '#description' => t('Enter "' . $job . ' Remove" label.'),
      '#size' => 60,
      '#maxlength' => 250,
    );
    $form['job_category_settings']['painters_my_workspace_' . $key . '_jobs_group']['painters_my_workspace_' . $key . '_icon'] = array(
      '#type' => 'textfield',
      '#title' => t($job . ' SVG Icon Class'),
      '#default_value' => painters_utils_get_label('painters_my_workspace_' . $key . '_icon', '', FALSE),
      '#description' => t('Enter "' . $job . '" SVG Icon Class without "#".'),
      '#size' => 60,
      '#maxlength' => 250,
    );
  }

  $form['job_category_settings']['painters_my_workspace_images_jobs_group']['painters_my_workspace_images_upload_modal_text'] = array(
    '#type' => 'textfield',
    '#title' => t('Image Upload Body text'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_images_upload_modal_text', '', FALSE),
    '#description' => t('Enter Image Upload Body text'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['job_category_settings']['painters_my_workspace_images_jobs_group']['painters_my_workspace_images_upload_modal_see_text'] = array(
    '#type' => 'textfield',
    '#title' => t('"Also see our" text'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_images_upload_modal_see_text', '', FALSE),
    '#description' => t('Enter "Also see our" text'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['job_category_settings']['painters_my_workspace_images_jobs_group']['painters_my_workspace_images_upload_modal_terms_cond'] = array(
    '#type' => 'textfield',
    '#title' => t('"Terms & Conditions" text'),
    '#default_value' => variable_get('painters_my_workspace_images_upload_modal_terms_cond', '', FALSE),
    '#description' => t('Enter "Terms & Conditions" text'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['job_category_settings']['painters_my_workspace_images_jobs_group']['painters_my_workspace_images_upload_modal_terms_cond_link'] = array(
    '#type' => 'textfield',
    '#title' => t('"Terms & Conditions" Link'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_images_upload_modal_terms_cond_link', '', FALSE),
    '#description' => t('Enter "Terms & Conditions" Link'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['job_category_settings']['painters_my_workspace_images_jobs_group']['painters_my_workspace_images_upload_modal_yes_button'] = array(
    '#type' => 'textfield',
    '#title' => t('"Yes, upload images" button'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_images_upload_modal_yes_button', '', FALSE),
    '#description' => t('Enter "Yes, upload images" button label'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['job_category_settings']['painters_my_workspace_images_jobs_group']['painters_my_workspace_images_upload_modal_no_button'] = array(
    '#type' => 'textfield',
    '#title' => t('"No, cancel" button'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_images_upload_modal_no_button', '', FALSE),
    '#description' => t('Enter "No, cancel" button label'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  // My Workspace Anonymous User
  $form['my_workspace_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('My workspace label settings for Anonymous User'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['my_workspace_settings']['painters_my_workspace_heading'] = array(
    '#type' => 'textfield',
    '#title' => t('My workspace heading'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_heading', '', FALSE),
    '#description' => t('Enter workspace heading.'),
    '#size' => 60,
    '#maxlength' => 250,
  );

  $form['my_workspace_settings']['painters_my_workspace_detail_page_heading'] = array(
    '#type' => 'textfield',
    '#title' => t('My workspace detail page heading'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_detail_page_heading', '', FALSE),
    '#description' => t('Enter workspace detail page heading.'),
    '#size' => 60,
    '#maxlength' => 250,
  );

  $form['my_workspace_settings']['painters_my_workspace_login_reg_or'] = array(
    '#type' => 'textfield',
    '#title' => t('"or" label'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_login_reg_or', '', FALSE),
    '#description' => t('Enter "or" label.'),
    '#size' => 60,
    '#maxlength' => 250,
  );

  $form['my_workspace_settings']['painters_my_workspace_description'] = array(
    '#type' => 'textfield',
    '#title' => t('My workspace description'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_description', '', FALSE),
    '#description' => t('Enter workspace description.'),
    '#size' => 60,
    '#maxlength' => 250,
  );

  $form['my_workspace_settings']['painters_my_workspace_account'] = array(
    '#type' => 'textfield',
    '#title' => t('My workspace account label'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_account', '', FALSE),
    '#description' => t('Enter workspace registration label.'),
    '#size' => 60,
    '#maxlength' => 250,
  );

  $form['my_workspace_settings']['painters_my_workspace_signin'] = array(
    '#type' => 'textfield',
    '#title' => t('My workspace sign in label'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_signin', '', FALSE),
    '#description' => t('Enter workspace signin label.'),
    '#size' => 60,
    '#maxlength' => 250,
  );

  // My Workspace Edit Configurations
  $form['my_workspace_edit_config'] = array(
    '#type' => 'fieldset',
    '#title' => t('My workspace label settings for Anonymous User'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['my_workspace_edit_config']['painters_my_workspace_heading'] = array(
    '#type' => 'textfield',
    '#title' => t('My workspace heading'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_heading', '', FALSE),
    '#description' => t('Enter workspace heading.'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['my_workspace_edit_config']['painters_my_workspace_description'] = array(
    '#type' => 'textfield',
    '#title' => t('My workspace description'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_description', '', FALSE),
    '#description' => t('Enter workspace description.'),
    '#size' => 60,
    '#maxlength' => 250,
  );

  // My Workspace Edit Configurations
  $form['my_workspace_slideshow_popup'] = array(
    '#type' => 'fieldset',
    '#title' => t('My workspace slideshow popup labels'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['my_workspace_slideshow_popup']['painters_my_workspace_popupheading'] = array(
    '#type' => 'textfield',
    '#title' => t('My workspace slideshow popup heading'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_popupheading', '', FALSE),
    '#description' => t('Enter popup heading.'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['my_workspace_slideshow_popup']['painters_my_workspace_popupdescription'] = array(
    '#type' => 'textarea',
    '#title' => t('My workspace slideshow popup description'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_popupdescription', '', FALSE),
    '#description' => t('Enter popup description.'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  $form['my_workspace_slideshow_popup']['painters_my_workspace_popupbutton'] = array(
    '#type' => 'textfield',
    '#title' => t('My workspace popup button label'),
    '#default_value' => painters_utils_get_label('painters_my_workspace_popupbutton', '', FALSE),
    '#description' => t('Enter popup button label.'),
    '#size' => 60,
    '#maxlength' => 250,
  );
  return system_settings_form($form);
}

/**
 *
 * @global <type> $base_url
 */
function painters_my_workspace_createjob_labels() {
  $form = array();
  global $base_url;

  $form['settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Create job Label settings'),
  );
}

/*
 * Menu page call back implementation for the shopping list labels creation
 */

function painters_home_brand_labels($form, &$form_state) {
  $form = array();

  $form['settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Create Home page Label settings'),
  );
  $form['home_page_header_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Home page Solutions for professional painters label'),
    '#default_value' => painters_utils_get_label('home_page_header_label', '', FALSE),
    '#description' => t('Enter label for "Solutions for professional painters".'),
  );
  $form['home_page_otherbrands_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Home page other brands label'),
    '#default_value' => painters_utils_get_label('home_page_otherbrands_label', '', FALSE),
    '#description' => t('Enter label for "Our other brands".'),
  );
  $form['home_page_brand_read_more_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Home page read more label'),
    '#default_value' => painters_utils_get_label('home_page_brand_read_more_label', '', FALSE),
    '#description' => t('Enter label for "Read more" for Running your business section.'),
  );

  return system_settings_form($form);
}

/**
 *
 * @param <type> $form
 * @param <type> $form_state
 *
 * @return <type>
 */
function painters_color_listing_details_labels($form, &$form_state) {
  $form = array();

  $form['settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Create Color listing & details Label settings'),
  );
  $form['color_listing_banner_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Color listing banner label'),
    '#default_value' => painters_utils_get_label('color_listing_banner_label', '', FALSE),
    '#description' => t('Enter label for "Color listing banner".'),
  );
  $form['color_listing_search_placeholder_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Color listing search placeholder label'),
    '#default_value' => painters_utils_get_label('color_listing_search_placeholder_label', '', FALSE),
    '#description' => t('Enter label for "Color listing search placeholder".'),
  );
  $form['color_listing_hue_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Color listing hue label'),
    '#default_value' => painters_utils_get_label('color_listing_hue_label', '', FALSE),
    '#description' => t('Enter label for "Color listing hue".'),
  );
  $form['color_listing_filter_location_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Color listing filter location label'),
    '#default_value' => painters_utils_get_label('color_listing_filter_location_label', '', FALSE),
    '#description' => t('Enter label for "Color listing filter location".'),
  );
  $form['color_listing_filter_surface_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Color listing filter surface label'),
    '#default_value' => painters_utils_get_label('color_listing_filter_surface_label', '', FALSE),
    '#description' => t('Enter label for "Color listing filter surface".'),
  );
  $form['color_listing_filter_finishes_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Color listing filter finishes label'),
    '#default_value' => painters_utils_get_label('color_listing_filter_finishes_label', '', FALSE),
    '#description' => t('Enter label for "Color listing filter finishes".'),
  );
  $form['color_listing_filter_location_default_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Color listing filter location default value label'),
    '#default_value' => painters_utils_get_label('color_listing_filter_location_default_label', '', FALSE),
    '#description' => t('Enter label for "Color listing filter location default value".'),
  );
  $form['color_listing_filter_surface_default_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Color listing filter surface default value label'),
    '#default_value' => painters_utils_get_label('color_listing_filter_surface_default_label', '', FALSE),
    '#description' => t('Enter label for "Color listing filter surface default value".'),
  );
  $form['color_listing_filter_finishes_default_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Color listing filter finishes default value label'),
    '#default_value' => painters_utils_get_label('color_listing_filter_finishes_default_label', '', FALSE),
    '#description' => t('Enter label for "Color listing filter finishes default value".'),
  );
  $form['color_listing_popular_color_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Color listing popular colours label'),
    '#default_value' => painters_utils_get_label('color_listing_popular_color_label', '', FALSE),
    '#description' => t('Enter label for "Popular colours".'),
  );
  $form['color_listing_all_color_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Color listing all colours label'),
    '#default_value' => painters_utils_get_label('color_listing_all_color_label', '', FALSE),
    '#description' => t('Enter label for "All colours".'),
  );
  $form['color_listing_count_color_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Color listing count colours label'),
    '#default_value' => painters_utils_get_label('color_listing_count_color_label', '', FALSE),
    '#description' => t('Enter label for "Count colours".'),
  );
  $form['color_listing_clear_filters_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Color listing clear filters label'),
    '#default_value' => painters_utils_get_label('color_listing_clear_filters_label', '', FALSE),
    '#description' => t('Enter label for "Clear filters".'),
  );

  // Color details label config
  $form['color_details_save_job_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Color detail Save to job label'),
    '#default_value' => painters_utils_get_label('color_details_save_job_label', '', FALSE),
    '#description' => t('Enter label for "Save to job".'),
  );
  $form['color_details_choose_product'] = array(
    '#type' => 'textfield',
    '#title' => t('Color detail "Choose Product" label'),
    '#default_value' => painters_utils_get_label('color_details_choose_product', '', FALSE),
    '#description' => t('Enter label for "Choose Product".'),
  );
  $form['color_details_more_information'] = array(
    '#type' => 'textfield',
    '#title' => t('Color detail "more information" label'),
    '#default_value' => painters_utils_get_label('color_details_more_information', '', FALSE),
    '#description' => t('Enter label for "more information".'),
  );
  $form['color_details_per_item_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Color detail "per item" label'),
    '#default_value' => painters_utils_get_label('color_details_per_item_label', '', FALSE),
    '#description' => t('Enter label for "per item".'),
  );
  $form['color_details_order_tester'] = array(
    '#type' => 'textfield',
    '#title' => t('Color detail "Order tester" label'),
    '#default_value' => painters_utils_get_label('color_details_order_tester', '', FALSE),
    '#description' => t('Enter label for "Order tester".'),
  );
  $form['color_details_color_disclaimer_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Color detail Colour disclaimer label'),
    '#default_value' => painters_utils_get_label('color_details_color_disclaimer_label', '', FALSE),
    '#description' => t('Enter label for "Colour disclaimer".'),
  );
  $form['color_details_disclaimer_note_label'] = array(
    '#type' => 'textarea',
    '#title' => t('Color detail disclaimer note label'),
    '#default_value' => painters_utils_get_label('color_details_disclaimer_note_label', '', FALSE),
    '#description' => t('Enter label for "Disclaimer note".'),
  );

  return system_settings_form($form);
}

/**
 *
 * @param <type> $form
 * @param <type> $form_state
 *
 * @return <type>
 */
function painters_color_collection_tools_labels($form, &$form_state) {
  $form = array();

  $form['settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Create Color collection & tools Label settings'),
  );
  $form['color_collection_all_colour_collection_label'] = array(
    '#type' => 'textfield',
    '#title' => t('All Colour collection default value label'),
    '#default_value' => painters_utils_get_label('color_collection_all_colour_collection_label', '', FALSE),
    '#description' => t('Enter label for "All Colour collection default value".'),
  );
  $form['color_tools_all_audiences_label'] = array(
    '#type' => 'textfield',
    '#title' => t('All audiences default value label'),
    '#default_value' => painters_utils_get_label('color_tools_all_audiences_label', '', FALSE),
    '#description' => t('Enter label for "All audiences".'),
  );
  $form['color_collection_download_brochure_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Colour collection download brochure label'),
    '#default_value' => painters_utils_get_label('color_collection_download_brochure_label', '', FALSE),
    '#description' => t('Enter label for "Colour collection download brochure label".'),
  );
  return system_settings_form($form);
}

/**
 *
 * @param <type> $form
 * @param <type> $form_state
 *
 * @return <type>
 */
function painters_product_labels($form, &$form_state) {
  $form = array();

  $form['settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Create product Label settings for all the product pages'),
  );
  $form['products_add_to_shoppinglist_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Add to shoppinglist label'),
    '#default_value' => painters_utils_get_label('products_add_to_shoppinglist_label', '', FALSE),
    '#description' => t('Enter label for "Add to shoppinglist".'),
  );
  $form['product_listing_show_more_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Show more label'),
    '#default_value' => painters_utils_get_label('product_listing_show_more_label', '', FALSE),
    '#description' => t('Enter label for "Show more".'),
  );
  $form['product_listing_show_less_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Show less label'),
    '#default_value' => painters_utils_get_label('product_listing_show_less_label', '', FALSE),
    '#description' => t('Enter label for "Show less".'),
  );
  $form['products_download_pdf_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Download as PDF label'),
    '#default_value' => painters_utils_get_label('products_download_pdf_label', '', FALSE),
    '#description' => t('Enter label for "Download as PDF".'),
  );

  // Product overview label config
  $form['product_overview_our_products_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product overview our products label'),
    '#default_value' => painters_utils_get_label('product_overview_our_products_label', '', FALSE),
    '#description' => t('Enter label for "Product overview our products".'),
  );
  $form['product_overview_browser_products_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Browse our products label'),
    '#default_value' => painters_utils_get_label('product_overview_browser_products_label', '', FALSE),
    '#description' => t('Enter label for "Browse our products".'),
  );
  $form['product_overview_highlighted_products_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Highlighted products label'),
    '#default_value' => painters_utils_get_label('product_overview_highlighted_products_label', '', FALSE),
    '#description' => t('Enter label for "Highlighted products".'),
  );
  $form['product_overview_view_brand_label'] = array(
    '#type' => 'textfield',
    '#title' => t('View brand label'),
    '#default_value' => painters_utils_get_label('product_overview_view_brand_label', '', FALSE),
    '#description' => t('Enter label for "View brand".'),
  );
  $form['product_overview_more_about_label'] = array(
    '#type' => 'textfield',
    '#title' => t('More about label'),
    '#default_value' => painters_utils_get_label('product_overview_more_about_label', '', FALSE),
    '#description' => t('Enter label for "More about".'),
  );
  $form['product_overview_product_label'] = array(
    '#type' => 'textfield',
    '#title' => t('product label'),
    '#default_value' => painters_utils_get_label('product_overview_product_label', '', FALSE),
    '#description' => t('Enter label for "product".'),
  );

  // Product listing label config
  $form['product_listing_we_have_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product listing we have label'),
    '#default_value' => painters_utils_get_label('product_listing_we_have_label', '', FALSE),
    '#description' => t('Enter label for "Product listing we have".'),
  );
  $form['product_listing_mobile_heading'] = array(
    '#type' => 'textfield',
    '#title' => t('Product listing mobile heading'),
    '#default_value' => painters_utils_get_label('product_listing_mobile_heading', '', FALSE),
    '#description' => t('Enter label for "Product Filters".'),
  );
  $form['product_listing_no_results'] = array(
    '#type' => 'textfield',
    '#title' => t('Product search "No results"'),
    '#default_value' => painters_utils_get_label('product_listing_no_results', '', FALSE),
    '#description' => t('Enter label for "No results".'),
  );
  $form['product_listing_apply_filters'] = array(
    '#type' => 'textfield',
    '#title' => t('Product search "Apply filters"'),
    '#default_value' => painters_utils_get_label('product_listing_apply_filters', '', FALSE),
    '#description' => t('Enter label for "Apply filters".'),
  );
  $form['product_listing_clear_filters'] = array(
    '#type' => 'textfield',
    '#title' => t('Product search "Clear filters"'),
    '#default_value' => painters_utils_get_label('product_listing_clear_filters', '', FALSE),
    '#description' => t('Enter label for "Clear filters".'),
  );
  $form['product_listing_we_have_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product search "We have"'),
    '#default_value' => painters_utils_get_label('product_listing_we_have_label', '', FALSE),
    '#description' => t('Enter label for "We have".'),
  );
  $form['product_listing_we_didnt_find'] = array(
    '#type' => 'textfield',
    '#title' => t('Product search "We didn\'t find any product results for"'),
    '#default_value' => painters_utils_get_label('product_listing_we_didnt_find', '', FALSE),
    '#description' => t('Enter label for "We didn\'t find any product results for".'),
  );
  $form['product_listing_please'] = array(
    '#type' => 'textfield',
    '#title' => t('Product search "Please." labels'),
    '#default_value' => painters_utils_get_label('product_listing_please', '', FALSE),
    '#description' => t('Enter label for "Please".'),
  );
  $form['product_listing_search_again'] = array(
    '#type' => 'textfield',
    '#title' => t('Product search "Search again." labels'),
    '#default_value' => painters_utils_get_label('product_listing_search_again', '', FALSE),
    '#description' => t('Enter label for "Search again".'),
  );
  $form['product_listing_apply_filters'] = array(
    '#type' => 'textfield',
    '#title' => t('Product listing Apply filters'),
    '#default_value' => painters_utils_get_label('product_listing_apply_filters', '', FALSE),
    '#description' => t('Enter label for "Apply Filters".'),
  );
  $form['product_listing_clear_filters'] = array(
    '#type' => 'textfield',
    '#title' => t('Product listing Clear filters'),
    '#default_value' => painters_utils_get_label('product_listing_clear_filters', '', FALSE),
    '#description' => t('Enter label for "Clear Filters".'),
  );
  $form['product_listing_product_you_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product listing product for you label'),
    '#default_value' => painters_utils_get_label('product_listing_product_you_label', '', FALSE),
    '#description' => t('Enter label for "Product listing product for you".'),
  );
  $form['product_listing_filter_by_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product listing filter by label'),
    '#default_value' => painters_utils_get_label('product_listing_filter_by_label', '', FALSE),
    '#description' => t('Enter label for "Product listing filter by".'),
  );
  $form['product_listing_clear_all_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product listing clear all label'),
    '#default_value' => painters_utils_get_label('product_listing_clear_all_label', '', FALSE),
    '#description' => t('Enter label for "Product listing clear all".'),
  );
  $form['product_listing_compare_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product listing compare label'),
    '#default_value' => painters_utils_get_label('product_listing_compare_label', '', FALSE),
    '#description' => t('Enter label for "Product listing compare".'),
  );
  $form['product_listing_view_compared_label'] = array(
    '#type' => 'textfield',
    '#title' => t('View Compared label'),
    '#default_value' => painters_utils_get_label('product_listing_view_compared_label', '', FALSE),
    '#description' => t('Enter label for "View Compared".'),
  );
  // Color listing page labels
  $form['color_listing_page_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Color listing page title'),
    '#default_value' => painters_utils_get_label('color_listing_page_title', '', FALSE),
    '#description' => t('Enter label for "Color listing".'),
  );
  // product compare page labels config
  $form['product_compare_change_products_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Change products label'),
    '#default_value' => painters_utils_get_label('product_compare_change_products_label', '', FALSE),
    '#description' => t('Enter label for "Change products".'),
  );
  $form['product_compare_title_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product compare title label'),
    '#default_value' => painters_utils_get_label('product_compare_title_label', '', FALSE),
    '#description' => t('Enter label for "Product Comparison".'),
  );
  $form['product_compare_keybenefits_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product compare Key Benefits label'),
    '#default_value' => painters_utils_get_label('product_compare_keybenefits_label', '', FALSE),
    '#description' => t('Enter label for "Product compare Key Benefits".'),
  );
  $form['product_compare_location_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product compare Location label'),
    '#default_value' => painters_utils_get_label('product_compare_location_label', '', FALSE),
    '#description' => t('Enter label for "Product compare Location".'),
  );
  $form['product_compare_surface_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product compare Surface label'),
    '#default_value' => painters_utils_get_label('product_compare_surface_label', '', FALSE),
    '#description' => t('Enter label for "Product compare Surface".'),
  );
  $form['product_compare_packsize_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product compare Packsize label'),
    '#default_value' => painters_utils_get_label('product_compare_packsize_label', '', FALSE),
    '#description' => t('Enter label for "Product compare Packsize".'),
  );
  $form['product_compare_coverage_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product compare Coverage per liter label'),
    '#default_value' => painters_utils_get_label('product_compare_coverage_label', '', FALSE),
    '#description' => t('Enter label for "Product compare Coverage per liter".'),
  );
  $form['product_compare_composition_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product compare Composition label'),
    '#default_value' => painters_utils_get_label('product_compare_composition_label', '', FALSE),
    '#description' => t('Enter label for "Product compare Composition".'),
  );
  $form['product_compare_dryingtime_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product compare Drying time label'),
    '#default_value' => painters_utils_get_label('product_compare_dryingtime_label', '', FALSE),
    '#description' => t('Enter label for "Product compare Drying time".'),
  );
  $form['product_compare_numbercoats_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product compare Number of coats label'),
    '#default_value' => painters_utils_get_label('product_compare_numbercoats_label', '', FALSE),
    '#description' => t('Enter label for "Product compare Number of coats".'),
  );
  $form['products_home_page_my_products_label'] = array(
    '#type' => 'textfield',
    '#title' => t('My products label'),
    '#default_value' => painters_utils_get_label('products_home_page_my_products_label', 'My products', FALSE),
    '#description' => t('Enter label for "My products".'),
  );

  // product detail page labels config Select a colour for this paint
  $form['product_detail_download_pdf_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product detail Download as PDF label'),
    '#default_value' => painters_utils_get_label('product_detail_download_pdf_label', '', FALSE),
    '#description' => t('Enter label for "Product detail Download as PDF".'),
  );
  $form['product_detail_select_color_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product detail Select colour label'),
    '#default_value' => painters_utils_get_label('product_detail_select_color_label', '', FALSE),
    '#description' => t('Enter label for "Product detail Select a colour for this paint".'),
  );
  $form['product_detail_choose_other_color_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product detail Choose other colour label'),
    '#default_value' => painters_utils_get_label('product_detail_choose_other_color_label', '', FALSE),
    '#description' => t('Enter label for "Product detail Choose other colour".'),
  );
  $form['product_detail_add_job_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product detail Add to job label'),
    '#default_value' => painters_utils_get_label('product_detail_add_job_label', '', FALSE),
    '#description' => t('Enter label for "Product detail Add to job".'),
  );
  $form['product_detail_quantity_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product detail Quantity label'),
    '#default_value' => painters_utils_get_label('product_detail_quantity_label', '', FALSE),
    '#description' => t('Enter label for "Product detail Quantity".'),
  );
  $form['product_detail_size_pack_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product detail Size Pack label'),
    '#default_value' => painters_utils_get_label('product_detail_size_pack_label', '', FALSE),
    '#description' => t('Enter label for "Product detail Size Pack".'),
  );
  $form['product_detail_select_store_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product detail Select a store label'),
    '#default_value' => painters_utils_get_label('product_detail_select_store_label', '', FALSE),
    '#description' => t('Enter label for "Product detail Select a store".'),
  );
  $form['product_detail_add_shoppinglist_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product detail Add shoppinglist label'),
    '#default_value' => painters_utils_get_label('product_detail_add_shoppinglist_label', '', FALSE),
    '#description' => t('Enter label for "Product detail Add shoppinglist".'),
  );
  $form['product_detail_description_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product detail Description label'),
    '#default_value' => painters_utils_get_label('product_detail_description_label', '', FALSE),
    '#description' => t('Enter label for "Product detail Description".'),
  );
  $form['product_detail_special_features_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product detail Special Features label'),
    '#default_value' => painters_utils_get_label('product_detail_special_features_label', '', FALSE),
    '#description' => t('Enter label for "Product detail Special Features".'),
  );
  $form['product_detail_technical_information_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product detail Technical Information label'),
    '#default_value' => painters_utils_get_label('product_detail_technical_information_label', '', FALSE),
    '#description' => t('Enter label for "Product detail Technical Information".'),
  );
  $form['product_detail_coverage_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product detail Coverage label'),
    '#default_value' => painters_utils_get_label('product_detail_coverage_label', '', FALSE),
    '#description' => t('Enter label for "Product detail Coverage".'),
  );
  $form['product_detail_thinning_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product detail Thinning label'),
    '#default_value' => painters_utils_get_label('product_detail_thinning_label', '', FALSE),
    '#description' => t('Enter label for "Product detail Thinning".'),
  );
  $form['product_detail_sheen_scale_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product detail Sheen Scale label'),
    '#default_value' => painters_utils_get_label('product_detail_sheen_scale_label', '', FALSE),
    '#description' => t('Enter label for "Product detail Sheen Scale".'),
  );
  $form['product_detail_hse_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product detail HSE label'),
    '#default_value' => painters_utils_get_label('product_detail_hse_label', '', FALSE),
    '#description' => t('Enter label for "Product detail HSE".'),
  );
  $form['product_detail_datasheet_documents_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product detail Datasheet & Documents label'),
    '#default_value' => painters_utils_get_label('product_detail_datasheet_documents_label', '', FALSE),
    '#description' => t('Enter label for "Product detail Datasheet & Documents".'),
  );
  $form['product_detail_product_information_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product detail Product Information label'),
    '#default_value' => painters_utils_get_label('product_detail_product_information_label', '', FALSE),
    '#description' => t('Enter label for "Product detail Product Information".'),
  );
  $form['product_detail_info_typical_use_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product detail Typical Use label'),
    '#default_value' => painters_utils_get_label('product_detail_info_typical_use_label', '', FALSE),
    '#description' => t('Enter label for "Product detail Typical Use".'),
  );
  $form['product_detail_info_composition_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product detail Composition label'),
    '#default_value' => painters_utils_get_label('product_detail_info_composition_label', '', FALSE),
    '#description' => t('Enter label for "Product detail Composition".'),
  );
  $form['product_detail_info_key_benefits_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product detail Key Benefits label'),
    '#default_value' => painters_utils_get_label('product_detail_info_key_benefits_label', '', FALSE),
    '#description' => t('Enter label for "Product detail Key Benefits".'),
  );
  $form['product_detail_info_pack_size_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product detail Pack size label'),
    '#default_value' => painters_utils_get_label('product_detail_info_pack_size_label', '', FALSE),
    '#description' => t('Enter label for "Product detail Pack size".'),
  );
  $form['product_detail_info_colour_range_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product detail Colour Range label'),
    '#default_value' => painters_utils_get_label('product_detail_info_colour_range_label', '', FALSE),
    '#description' => t('Enter label for "Product detail Colour Range".'),
  );
  $form['product_detail_info_film_thickness_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product detail Film Thickness label'),
    '#default_value' => painters_utils_get_label('product_detail_info_film_thickness_label', '', FALSE),
    '#description' => t('Enter label for "Product detail Film Thickness".'),
  );
  $form['product_detail_info_volume_solids_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product detail Volume Solids label'),
    '#default_value' => painters_utils_get_label('product_detail_info_volume_solids_label', '', FALSE),
    '#description' => t('Enter label for "Product detail Volume Solids".'),
  );
  $form['product_detail_info_recoatable_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product detail Recoatable label'),
    '#default_value' => painters_utils_get_label('product_detail_info_recoatable_label', '', FALSE),
    '#description' => t('Enter label for "Product detail Recoatable".'),
  );
  $form['product_detail_info_touch_dry_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product detail Touch dry label'),
    '#default_value' => painters_utils_get_label('product_detail_info_touch_dry_label', '', FALSE),
    '#description' => t('Enter label for "Product detail Touch dry".'),
  );
  $form['product_detail_application_method_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product detail Application Method label'),
    '#default_value' => painters_utils_get_label('product_detail_application_method_label', '', FALSE),
    '#description' => t('Enter label for "Product detail Application Method".'),
  );
  $form['product_detail_system_information_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product detail System Information label'),
    '#default_value' => painters_utils_get_label('product_detail_system_information_label', '', FALSE),
    '#description' => t('Enter label for "Product detail System Information".'),
  );
  return system_settings_form($form);
}

/**
 *
 * @param <type> $form
 * @param <type> $form_state
 *
 * @return <type>
 */
function painters_product_datasheet_labels($form, &$form_state) {
  $form = array();

  $form['settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Product datasheet Label settings'),
  );
  $form['product_datasheet_title_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product data sheet title label'),
    '#default_value' => painters_utils_get_label('product_datasheet_title_label', '', FALSE),
    '#description' => t('Enter label for "Product data sheet title".'),
  );
  $form['product_datasheet_search_placeholder_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product data sheet search pleaseholder label'),
    '#default_value' => painters_utils_get_label('product_datasheet_search_placeholder_label', '', FALSE),
    '#description' => t('Enter label for "Product data sheet search pleaseholder".'),
  );
  $form['product_datasheet_search_no_results_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product data sheet search no results label'),
    '#default_value' => painters_utils_get_label('product_datasheet_search_no_results_label', '', FALSE),
    '#description' => t('Enter label for "No results found".'),
  );
  $form['product_datasheet_download_all_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product data sheet search download all label'),
    '#default_value' => painters_utils_get_label('product_datasheet_download_all_label', '', FALSE),
    '#description' => t('Enter label for "Download all".'),
  );
  $form['product_datasheet_clear_all_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product data sheet search clear all label'),
    '#default_value' => painters_utils_get_label('product_datasheet_clear_all_label', '', FALSE),
    '#description' => t('Enter label for "clear all".'),
  );
  $form['product_datasheet_show_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product data sheet search show label'),
    '#default_value' => painters_utils_get_label('product_datasheet_show_label', '', FALSE),
    '#description' => t('Enter label for "show datasheets".'),
  );
  $form['product_datasheet_hide_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product data sheet search hide label'),
    '#default_value' => painters_utils_get_label('product_datasheet_hide_label', '', FALSE),
    '#description' => t('Enter label for "hide datasheets".'),
  );
  $form['product_datasheet_your_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product data sheet your datasheets label'),
    '#default_value' => painters_utils_get_label('product_datasheet_your_label', '', FALSE),
    '#description' => t('Enter label for "your datasheets".'),
  );
  $form['product_datasheet_selected_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product datasheet selected label'),
    '#default_value' => painters_utils_get_label('product_datasheet_selected_label', '', FALSE),
    '#description' => t('Enter label for "selected datasheets".'),
  );
  $form['product_datasheet_clear_search_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product datasheet "clear" search label'),
    '#default_value' => painters_utils_get_label('product_datasheet_clear_search_label', '', FALSE),
    '#description' => t('Enter label for "Clear" text for searchbox.'),
  );
  $form['product_datasheet_view_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product datasheet view label'),
    '#default_value' => painters_utils_get_label('product_datasheet_view_label', '', FALSE),
    '#description' => t('Enter label for "View".'),
  );
  return system_settings_form($form);
}

/*
 * Contact us page labels
 */

function painters_contact_us_labels($form, &$form_state) {
  $form = array();

  $form['settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Contact us Label settings'),
  );
  $form['contactus_link_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Contactus link label'),
    '#default_value' => painters_utils_get_label('contactus_link_label', '', FALSE),
    '#description' => t('Enter label for "Contact Information".'),
  );
  $form['contactus_page_title_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Contactus page title label'),
    '#default_value' => painters_utils_get_label('contactus_page_title_label', '', FALSE),
    '#description' => t('Enter label for "Contactus page title".'),
  );
  $form['contactus_visit_us'] = array(
    '#type' => 'textfield',
    '#title' => t('Visit us label'),
    '#default_value' => painters_utils_get_label('contactus_visit_us', '', FALSE),
    '#description' => t('Enter label for "Visit us" title on contact us block.'),
  );
  $form['contactus_visit_us_placeholder'] = array(
    '#type' => 'textfield',
    '#title' => t('Visit us block search placeholder'),
    '#default_value' => painters_utils_get_label('contactus_visit_us_placeholder', '', FALSE),
    '#description' => t('Enter label for "Location, storename" Visit us block search placeholder.'),
  );
  $form['contactus_header_iam_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Contactus header I am label'),
    '#default_value' => painters_utils_get_label('contactus_header_iam_label', '', FALSE),
    '#description' => t('Enter label for "Contactus header I am".'),
  );
  $form['contactus_header_needof_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Contactus header Need of label'),
    '#default_value' => painters_utils_get_label('contactus_header_needof_label', '', FALSE),
    '#description' => t('Enter label for "Contactus header Need of".'),
  );
  $form['contactus_header_from_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Contactus header From label'),
    '#default_value' => painters_utils_get_label('contactus_header_from_label', '', FALSE),
    '#description' => t('Enter label for "Contactus header From".'),
  );
  $form['contactus_form_salutions_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Contactus Form salutions label'),
    '#default_value' => painters_utils_get_label('contactus_form_salutions_label', '', FALSE),
    '#description' => t('Enter label for "Contactus Form salutions".'),
  );
  $form['contactus_form_sir_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Contactus Form Sir label'),
    '#default_value' => painters_utils_get_label('contactus_form_sir_label', '', FALSE),
    '#description' => t('Enter label for "Contactus Form Sir".'),
  );
  $form['contactus_form_madam_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Contactus Form Madam label'),
    '#default_value' => painters_utils_get_label('contactus_form_madam_label', '', FALSE),
    '#description' => t('Enter label for "Contactus Form Madam".'),
  );
  $form['contactus_form_last_name_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Contactus Form Last name label'),
    '#default_value' => painters_utils_get_label('contactus_form_last_name_label', '', FALSE),
    '#description' => t('Enter label for "Contactus Form Last name".'),
  );
  $form['contactus_form_last_name_error_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Contactus Form Last name error label'),
    '#default_value' => painters_utils_get_label('contactus_form_last_name_error_label', '', FALSE),
    '#description' => t('Enter label for "Contactus Form Last name error".'),
  );
  $form['contactus_form_email_address_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Contactus Form Email address label'),
    '#default_value' => painters_utils_get_label('contactus_form_email_address_label', '', FALSE),
    '#description' => t('Enter label for "Contactus Form Email address".'),
  );
  $form['contactus_form_email_address_error_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Contactus Form Email address error label'),
    '#default_value' => painters_utils_get_label('contactus_form_email_address_error_label', 'Please enter your email address', FALSE),
    '#description' => t('Enter label for "Contactus Form Email address error".'),
  );
  $form['contactus_form_telephone_number_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Contactus Form Telephone number label'),
    '#default_value' => painters_utils_get_label('contactus_form_telephone_number_label', '', FALSE),
    '#description' => t('Enter label for "Contactus Form Telephone number".'),
  );
  $form['contactus_form_telephone_number_error_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Contactus Form Telephone number error label'),
    '#default_value' => painters_utils_get_label('contactus_form_telephone_number_error_label', '', FALSE),
    '#description' => t('Enter label for "Contactus Form Telephone number error".'),
  );
  $form['contactus_form_message_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Contactus Form Message label'),
    '#default_value' => painters_utils_get_label('contactus_form_message_label', '', FALSE),
    '#description' => t('Enter label for "Contactus Form Message".'),
  );
  $form['contactus_form_message_error_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Contactus Form Message error label'),
    '#default_value' => painters_utils_get_label('contactus_form_message_error_label', '', FALSE),
    '#description' => t('Enter label for "Contactus Form Message error".'),
  );
  $form['contactus_form_send_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Contactus Form Send label'),
    '#default_value' => painters_utils_get_label('contactus_form_send_label', '', FALSE),
    '#description' => t('Enter label for "Contactus Form Send".'),
  );
  $form['contactus_form_submit_validation_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Contactus Form Submit validation label'),
    '#default_value' => painters_utils_get_label('contactus_form_submit_validation_label', '', FALSE),
    '#description' => t('Enter label for "Contactus Form Submit validation".'),
  );
  $form['contactus_form_thankyou_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Contactus Form Thank you label'),
    '#default_value' => painters_utils_get_label('contactus_form_thankyou_label', '', FALSE),
    '#description' => t('Enter label for "Contactus Form Thank you".'),
  );
  $form['contactus_form_thankyou_message_label'] = array(
    '#type' => 'textarea',
    '#title' => t('Contactus Form Thank you message label'),
    '#default_value' => painters_utils_get_label('contactus_form_thankyou_message_label', '', FALSE),
    '#description' => t('Enter label for "Contactus Form Thank you message".'),
  );
  return system_settings_form($form);
}

/*
 * Training page labels
 *
 */

function painters_training_labels($form, &$form_state) {
  $form = array();

  $form['settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Training Label settings'),
  );
  $form['training_register_for_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Register for label'),
    '#default_value' => painters_utils_get_label('training_register_for_label', '', FALSE),
    '#description' => t('Enter label for "Training Register for".'),
  );
  $form['training_email_address_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Email address label'),
    '#default_value' => painters_utils_get_label('training_email_address_label', '', FALSE),
    '#description' => t('Enter label for "Training Email address".'),
  );
  $form['training_email_address_placeholder_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Email address placeholder label'),
    '#default_value' => painters_utils_get_label('training_email_address_placeholder_label', '', FALSE),
    '#description' => t('Enter label for "Training Email address placeholder".'),
  );
  $form['training_email_address_required_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Email address required validation label'),
    '#default_value' => painters_utils_get_label('training_email_address_required_label', '', FALSE),
    '#description' => t('Enter label for "Training Email address required validation label".'),
  );
  $form['training_email_address_error_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Email address error label'),
    '#default_value' => painters_utils_get_label('training_email_address_error_label', '', FALSE),
    '#description' => t('Enter label for "Training Email address error".'),
  );
  $form['training_people_attending_label'] = array(
    '#type' => 'textfield',
    '#title' => t('People attending label'),
    '#default_value' => painters_utils_get_label('training_people_attending_label', '', FALSE),
    '#description' => t('Enter label for "Training People attending".'),
  );
  $form['training_submit_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Training submit label'),
    '#default_value' => painters_utils_get_label('training_submit_label', '', FALSE),
    '#description' => t('Enter label for "Training Submit".'),
  );
  $form['training_thankyou_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Training thank you label'),
    '#default_value' => painters_utils_get_label('training_thankyou_label', '', FALSE),
    '#description' => t('Enter label for "Training Thank you".'),
  );
  $form['training_success_one_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Training success part 1 label'),
    '#default_value' => painters_utils_get_label('training_success_one_label', '', FALSE),
    '#description' => t('Enter label for "Training Success part 1".'),
  );
  $form['training_success_two_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Training success part 2 label'),
    '#default_value' => painters_utils_get_label('training_success_two_label', '', FALSE),
    '#description' => t('Enter label for "Training Success part 2".'),
  );
  $form['training_success_three_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Training success part 3 label'),
    '#default_value' => painters_utils_get_label('training_success_three_label', '', FALSE),
    '#description' => t('Enter label for "Training Success part 3".'),
  );
  $form['training_related_courses_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Training related courses label'),
    '#default_value' => painters_utils_get_label('training_related_courses_label', '', FALSE),
    '#description' => t('Enter label for "Training Related courses label".'),
  );
  $form['training_register_error_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Training registration error label'),
    '#default_value' => painters_utils_get_label('training_register_error_label', '', FALSE),
    '#description' => t('Enter label for "Training Registration error label".'),
  );
  $form['training_register_read_more_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Training registration read more label'),
    '#default_value' => painters_utils_get_label('training_register_read_more_label', '', FALSE),
    '#description' => t('Enter label for "Read More label".'),
  );
  return system_settings_form($form);
}

/**
 *
 * @param <type> $form
 * @param <type> $form_state
 *
 * @return <type>
 */
function painters_store_labels($form, &$form_state) {
  $form = array();

  $form['settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Store Listing / Detail Label settings'),
  );
  $form['store_search_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Store search title label'),
    '#default_value' => painters_utils_get_label('store_search_label', '', FALSE),
    '#description' => t('Enter label for "Store search title".'),
  );
  $form['store_search_placeholder_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Store search placeholder label'),
    '#default_value' => painters_utils_get_label('store_search_placeholder_label', '', FALSE),
    '#description' => t('Enter label for "Store search placeholder".'),
  );
  $form['store_search_current_location_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Store search current location label'),
    '#default_value' => painters_utils_get_label('store_search_current_location_label', '', FALSE),
    '#description' => t('Enter label for "Store search current location".'),
  );
  $form['store_search_clear_search_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Store search clear label'),
    '#default_value' => painters_utils_get_label('store_search_clear_search_label', '', FALSE),
    '#description' => t('Enter label for "Clear".'),
  );
  $form['store_search_store_for_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Store search stores for label'),
    '#default_value' => painters_utils_get_label('store_search_store_for_label', '', FALSE),
    '#description' => t('Enter label for "Store search stores for".'),
  );
  $form['store_search_more_information_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Store search more information label'),
    '#default_value' => painters_utils_get_label('store_search_more_information_label', '', FALSE),
    '#description' => t('Enter label for "Store search more information".'),
  );
  $form['store_search_direction_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Store search direction label'),
    '#default_value' => painters_utils_get_label('store_search_direction_label', '', FALSE),
    '#description' => t('Enter label for "Store search Direction".'),
  );
  $form['store_search_filter_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Store search Filter label'),
    '#default_value' => painters_utils_get_label('store_search_filter_label', '', FALSE),
    '#description' => t('Enter label for "Store search Filter".'),
  );
  $form['store_search_address_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Store search Address label'),
    '#default_value' => painters_utils_get_label('store_search_address_label', '', FALSE),
    '#description' => t('Enter label for "Store search Address".'),
  );
  $form['store_search_telephone_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Store search Telephone label'),
    '#default_value' => painters_utils_get_label('store_search_telephone_label', '', FALSE),
    '#description' => t('Enter label for "Store search Telephone".'),
  );
  $form['store_filter_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Store filter label'),
    '#default_value' => painters_utils_get_label('store_filter_label', '', FALSE),
    '#description' => t('Enter label for "Store filter".'),
  );
  $form['back_to_result'] = array(
    '#type' => 'textfield',
    '#title' => t('Store back to result label'),
    '#default_value' => painters_utils_get_label('back_to_result', '', FALSE),
    '#description' => t('Enter label for "Store back to result".'),
  );

  return system_settings_form($form);
}

/**
 *
 * @param <type> $form
 * @param <type> $form_state
 *
 * @return <type>
 */
function painters_knowledge_center_sustainability_labels($form, &$form_state) {
  $form = array();
  $form['settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Knowledge Center / Sustainability Label settings'),
  );

  $form['new_articles_header_label'] = array(
    '#type' => 'textfield',
    '#title' => t('New Article Header label'),
    '#default_value' => painters_utils_get_label('new_articles_header_label', '', FALSE),
    '#description' => t('Enter label for "New Article Header".'),
  );

  $form['new_articles_read_more_label'] = array(
    '#type' => 'textfield',
    '#title' => t('New Article Header label'),
    '#default_value' => painters_utils_get_label('new_articles_read_more_label', '', FALSE),
    '#description' => t('Enter label for "New Article Read more link".'),
  );

  $form['other_articles_all_advice_header_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Other articles in all advice Header label'),
    '#default_value' => painters_utils_get_label('other_articles_all_advice_header_label', '', FALSE),
    '#description' => t('Enter label for "Other articles in all advice".'),
  );

  $form['tabs'] = array(
    '#type' => 'fieldset',
    '#title' => t('Knowledge Center / Tabs'),
  );
  $form['tabs']['new_articles_tabs_label_all'] = array(
    '#type' => 'textfield',
    '#title' => t('All tab label'),
    '#default_value' => painters_utils_get_label('new_articles_tabs_label_all', '', FALSE),
    '#description' => t('Enter label for "All" tab on knowledge page.'),
  );
  $form['tabs']['new_articles_tabs_label_categories'] = array(
    '#type' => 'textfield',
    '#title' => t('Tab Categories label'),
    '#default_value' => painters_utils_get_label('new_articles_tabs_label_categories', '', FALSE),
    '#description' => t('Tab categories heading for mobile layout.'),
  );

  $form['tabs']['new_articles_tabs_page_heading'] = array(
    '#type' => 'textfield',
    '#title' => t('Advise knowledge heading'),
    '#default_value' => painters_utils_get_label('new_articles_tabs_page_heading', '', FALSE),
    '#description' => t('Tab categories heading for mobile layout.'),
  );

  $form['tabs']['new_articles_tabs_page_read_more'] = array(
    '#type' => 'textfield',
    '#title' => t('Advise knowledge article Read More'),
    '#default_value' => painters_utils_get_label('new_articles_tabs_page_read_more', '', FALSE),
    '#description' => t('Read more label for Advise knowledge tab article.'),
  );

  return system_settings_form($form);
}

/**
 *
 * @param <type> $form
 * @param <type> $form_state
 *
 * @return <type>
 */
function painters_product_color_search_labels($form, &$form_state) {
  $form = array();
  $form['settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Product / color search Label settings'),
  );

  $form['product_search_banner_text_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product search banner title label'),
    '#default_value' => painters_utils_get_label('product_search_banner_text_label', '', FALSE),
    '#description' => t('Enter label for "Product search banner title".'),
  );
  $form['product_search_placeholder_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product search placeholder label'),
    '#default_value' => painters_utils_get_label('product_search_placeholder_label', '', FALSE),
    '#description' => t('Enter label for "Product search placeholder".'),
  );
  $form['product_search_searchbox_clear_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product search clear text'),
    '#default_value' => painters_utils_get_label('product_search_searchbox_clear_label', '', FALSE),
    '#description' => t('Enter label for "Clear" text on searchbox.'),
  );
  $form['product_search_noproduct_found_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Product search no products found label'),
    '#default_value' => painters_utils_get_label('product_search_noproduct_found_label', '', FALSE),
    '#description' => t('Enter label for "Product search No products found".'),
  );
  $form['color_search_nocolor_found_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Colour search no colour found label'),
    '#default_value' => painters_utils_get_label('color_search_nocolor_found_label', '', FALSE),
    '#description' => t('Enter label for "Colour search no colour found".'),
  );
  $form['color_search_color_found_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Colour search colour found label'),
    '#default_value' => painters_utils_get_label('color_search_color_found_label', '', FALSE),
    '#description' => t('Enter label for "Colour search colour found".'),
  );
  $form['color_search_searchbox_clear_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Colour search Clear label'),
    '#default_value' => painters_utils_get_label('color_search_searchbox_clear_label', '', FALSE),
    '#description' => t('Enter label for "Clear" searchbox text.'),
  );

  return system_settings_form($form);
}

/**
 *
 * @param <type> $form
 * @param <type> $form_state
 *
 * @return <type>
 */
function painters_generic_search_labels($form, &$form_state) {
  $form = array();

  $form['settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Generic search Label settings'),
  );
  $form['generic_search_enter_your_search_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Enter your search label'),
    '#default_value' => painters_utils_get_label('generic_search_enter_your_search_label', '', FALSE),
    '#description' => t('Enter label for "Enter your search".'),
  );
  $form['generic_search_no_results_title_label'] = array(
    '#type' => 'textfield',
    '#title' => t('No results title label'),
    '#default_value' => painters_utils_get_label('generic_search_no_results_title_label', '', FALSE),
    '#description' => t('Enter label for "No results title".'),
  );
  $form['generic_search_no_results_find_out_label'] = array(
    '#type' => 'textfield',
    '#title' => t('No results find out label'),
    '#default_value' => painters_utils_get_label('generic_search_no_results_find_out_label', '', FALSE),
    '#description' => t('Enter label for "No results find out".'),
  );
  $form['generic_search_no_results_search_again_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Please search again label'),
    '#default_value' => painters_utils_get_label('generic_search_no_results_search_again_label', '', FALSE),
    '#description' => t('Enter label for "Please search again".'),
  );
  $form['search_autocomplete_view_all_link'] = array(
    '#type' => 'textfield',
    '#title' => t('View all results: Autocomplete link text'),
    '#default_value' => painters_utils_get_label('search_autocomplete_view_all_link', '', FALSE),
    '#description' => t('Enter label for "View all results".'),
  );
  return system_settings_form($form);
}

/**
 *
 * @param <type> $form
 * @param <type> $form_state
 *
 * @return <type>
 */
function painters_faq_labels($form, &$form_state) {
  $form = array();
  $form['settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('FAQ Label settings'),
  );
  $form['faq_banner_title_label'] = array(
    '#type' => 'textfield',
    '#title' => t('FAQ banner label'),
    '#default_value' => painters_utils_get_label('faq_banner_title_label', '', FALSE),
    '#description' => t('Enter label for "FAQ banner".'),
  );
  $form['faq_categories_label'] = array(
    '#type' => 'textfield',
    '#title' => t('FAQ Categories label'),
    '#default_value' => painters_utils_get_label('faq_categories_label', '', FALSE),
    '#description' => t('Enter label for "FAQ Categories".'),
  );
  return system_settings_form($form);
}
