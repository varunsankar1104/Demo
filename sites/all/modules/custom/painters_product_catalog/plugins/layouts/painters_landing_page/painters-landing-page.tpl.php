<?php

/**
 * @file
 * Template for a flexible column panel layout.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 */
?>
<div class="panel-display panel-painters__landing-page clearfix"
<?php
if (!empty($css_id)) { print "id=\"$css_id\"";
}?>>
      <?php if ($content['content']): ?>
    <div
      class="painters-panel panel-region-content panel-region__wide clearfix">
    <?php print $content['content']; ?>
    </div>
<?php endif ?>
      <?php if ($content['top_wide']): ?>
    <div
      class="painters-panel panel-region-top_wide col-xs-12 panel-region__wide clearfix">
    <?php print $content['top_wide']; ?>
    </div>
    <?php endif ?>
    <?php if ($content['top_box_1'] || $content['top_box_2'] || $content['top_box_3'] || $content['top_box_4']): ?>
    <div class="row vertical-bottom equalheight js-equalheight clear">
          <?php if ($content['top_box_1']): ?>
        <div
          class="painters-panel panel-region-top_box_1 col-xs-12 <?php print $layout_classes['top']; ?>">
        <?php print $content['top_box_1']; ?>
        </div>
  <?php endif ?>
          <?php if ($content['top_box_2']): ?>
        <div
          class="painters-panel panel-region-top_box_2 col-xs-12 <?php print $layout_classes['top']; ?>">
        <?php print $content['top_box_2']; ?>
        </div>
  <?php endif ?>
          <?php if ($content['top_box_3']): ?>
        <div
          class="painters-panel panel-region-top_box_3 col-xs-12 <?php print $layout_classes['top']; ?>">
        <?php print $content['top_box_3']; ?>
        </div>
  <?php endif ?>
          <?php if ($content['top_box_4']): ?>
        <div
          class="painters-panel panel-region-top_box_4 col-xs-12 <?php print $layout_classes['top']; ?>">
        <?php print $content['top_box_4']; ?>
        </div>
    <?php endif ?>
    </div>
<?php endif ?>
  <!-- //Top section -->

  <!-- Middle section -->
<?php if ($content['mid_wide']): ?>
    <div class="row">
      <div
        class="painters-panel panel-region-mid_wide col-xs-12 panel-region__wide clearfix">
    <?php print $content['mid_wide']; ?>
      </div>
    </div>
  <?php endif ?>

    <?php if ($content['mid_box_1'] || $content['mid_box_2'] || $content['mid_box_3'] || $content['mid_box_4']): ?>
    <div class="row vertical-bottom equalheight js-equalheight">
          <?php if ($content['mid_box_1']): ?>
        <div
          class="painters-panel panel-region-mid_box_1 col-xs-12 <?php print $layout_classes['mid']; ?>">
        <?php print $content['mid_box_1']; ?>
        </div>
      <?php endif ?>

          <?php if ($content['mid_box_2']): ?>
        <div
          class="painters-panel panel-region-mid_box_2 col-xs-12 <?php print $layout_classes['mid']; ?>">
        <?php print $content['mid_box_2']; ?>
        </div>
      <?php endif ?>

          <?php if ($content['mid_box_3']): ?>
        <div
          class="painters-panel panel-region-mid_box_3 col-xs-12 <?php print $layout_classes['mid']; ?>">
        <?php print $content['mid_box_3']; ?>
        </div>
      <?php endif ?>

          <?php if ($content['mid_box_4']): ?>
        <div
          class="painters-panel panel-region-mid_box_4 col-xs-12 <?php print $layout_classes['mid']; ?>">
        <?php print $content['mid_box_4']; ?>
        </div>
    <?php endif ?>
    </div>
<?php endif ?>
  <!-- Middle section -->

  <!-- Bottom section -->
<?php if ($content['bot_wide']): ?>
    <div class="row">
      <div
        class="painters-panel panel-region-bot_wide col-xs-12 panel-region__wide clearfix">
    <?php print $content['bot_wide']; ?>
      </div>
    </div>
  <?php endif ?>
<?php if (FALSE): ?>
        <?php if ($content['bot_box_1']): ?>
      <div
        class="painters-panel panel-region-bot_box_1  <?php print $layout_classes['bot']; ?>">
      <?php print $content['bot_box_1']; ?>
      </div>
    <?php endif ?>

        <?php if ($content['bot_box_2']): ?>
      <div
        class="painters-panel panel-region-bot_box_2  <?php print $layout_classes['bot']; ?>">
      <?php print $content['bot_box_2']; ?>
      </div>
    <?php endif ?>

        <?php if ($content['bot_box_3']): ?>
      <div
        class="painters-panel panel-region-bot_box_3  <?php print $layout_classes['bot']; ?>">
      <?php print $content['bot_box_3']; ?>
      </div>
    <?php endif ?>

        <?php if ($content['bot_box_4']): ?>
      <div
        class="painters-panel panel-region-bot_box_4  <?php print $layout_classes['bot']; ?>">
      <?php print $content['bot_box_4']; ?>
      </div>
    <?php endif ?>
<?php endif ?>
<?php if ($content['bot']): ?>
    <div class="row">
      <div
        class="panel-panel panel-region-bottom col-xs-12 panel-region__wide clearfix">
    <?php print $content['bot']; ?>
      </div>
    </div>
<?php endif ?>
</div>

