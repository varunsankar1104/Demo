<div class="container">
  <div class="row gutter vertical-bottom">
    <div
      class="content-intro col-xs-12 col-sm-10 col-sm-offset-1 col-lg-8 col-lg-offset-2">
      <h1 class="h2"><?php
print $labels['training_thankyou_label']; ?></h1>

      <p><?php
print $labels['training_success_one_label']; print '&nbsp';
print $training_data['membercount'];
print '&nbsp';
print $labels['training_success_two_label'];
print '&nbsp';
print $training_data['name'];
print '&nbsp';
print $labels['training_success_three_label'];
print '&nbsp';
print $training_data['useremail'];
?> </p>
    </div>
    <?php
if ($training_data['training_date'] || $training_data['training_time'] || $training_data['location_address'] || $training_data['fax_value'] || $training_data['email'] || $training_data['telephone_value']):?>
      <div class="col-xs-12 highlight">
        <div class="row vertical-bottom">
          <?php if ($training_data['training_date'] || $training_data['training_time']): ?>
            <div class="col-xs-12 col-md-4">
              <h4 class="vertical-bottom"><?php print $training_data['when_label']; ?></h4>
              <?php print $training_data['training_date']; ?><br>
              <?php print $training_data['training_time']; ?>
            </div>
          <?php endif; ?>

          <?php if ($training_data['location_address']): ?>
            <div
              class="col-xs-12 highlight__divider section-divider hidden-md hidden-lg">
              <div class="col-xs-12"></div>
            </div>
            <div class="col-xs-12 col-md-4">
              <h4 class="vertical-bottom"><?php print $training_data['where_label']; ?></h4>
              <span class="highlight__label ff-semibold store-name-gtm"><?php print $training_data['location_label']; ?></span><br>
              <?php print $training_data['location_address']; ?></br>
              </br> <a class="get-dir-training-gtm"
                       href="<?php print $training_data['gmap_link']; ?>">Directions</a>
            </div>
          <?php endif; ?>
          <?php if ($training_data['fax_value'] || $training_data['email'] || $training_data['telephone_value']): ?>
            <div
              class="col-xs-12 section-divider highlight__divider hidden-md hidden-lg">
              <div class="col-xs-12"></div>
            </div>
            <div class="col-xs-12 col-md-4">
              <h4 class="vertical-bottom"><?php print $training_data['contact_label']; ?></h4>
              <table class="table-info">
                <tbody>
                  <?php if (!empty($training_data['telephone_label']) && !empty($training_data['telephone_value'])) { ?>
                    <tr>
                      <th><?php print $training_data['telephone_label']; ?>:</th>
                      <td><a
                          href="tel:<?php print $training_data['telephone_value']; ?>"><?php print $training_data['telephone_value']; ?></a></td>
                    </tr>
                  <?php } ?>
                  <?php if (!empty($training_data['fax_label']) && !empty($training_data['fax_value'])) { ?>
                    <tr>
                      <th><?php print $training_data['fax_label']; ?></th>
                      <td><a
                          href="tel:<?php print $training_data['fax_value']; ?>"><?php print $training_data['fax_value']; ?></a></td>
                    </tr>
                  <?php } ?>
                  <?php if (!empty($training_data['email_label']) && !empty($training_data['email'])) { ?>
                    <tr>
                      <th><?php print $training_data['email_label']; ?></th>
                      <td><a
                          href="mailto:<?php print $training_data['email']; ?>"><?php print $training_data['email']; ?></a></td>
                    </tr>
                  <?php } ?>
                </tbody>
              </table>
            </div>
          <?php endif; ?>
        </div>
      </div>
    <?php endif; ?>
  </div>
</div>
<div class="container-gray">
  <div class="container">
    <div class="row">
      <div class="col-xs-12">
        <h3><?php print $labels['training_related_courses_label']; ?></h3>
      </div>
    </div>
    <?php print $training_data['related_Training']; ?>
  </div>
</div>

