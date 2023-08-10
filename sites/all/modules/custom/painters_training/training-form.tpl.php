<div class="modal-header">
  <button type="button" class="modal-close" data-dismiss="modal"
          aria-label="Close">
    <svg class="icon center-block icon-close" aria-hidden="true">
    <title>close</title>
    <use xlink:href="#icon-close"
         xmlns:xlink="http://www.w3.org/1999/xlink"></use>
    </svg>
  </button>
  <h2 class="modal-title text-center" id="modalPrimaryLabel"><?php
print $labels['register_for']; print ' ';
print $training_data['name'];
?></h2>
  <p class="text-center"><?php print $training_data['training_date']; ?><br> <?php print $training_data['training_time']; ?><br> <?php print $training_data['location_address']; ?></p>
</div>

<div class="modal-body">
  <div class=" modal-register">
    <div class="form__container">
      <?php print render(drupal_get_form('painters_training_registration_form')); ?>
    </div>
  </div>
</div>

