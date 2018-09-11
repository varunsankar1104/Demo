var PaintersWindowActive = true;
(function ($) {
  document.addEventListener("visibilitychange", function () {
    if (document.hidden) {
      PaintersWindowActive = false;
    } else {
      PaintersWindowActive = true;
    }
  });
  $(document).ready(function () {

    /*
     * On Focusout from Title field while creating a node
     * shows alert messgae, if user has Entered special characterSet or any 
     * other language.
     */
    $("body.page-node-edit #edit-title").once("character-check").focusout(function () {
      var inputtxt = document.getElementById("edit-title");
      var letterNumber = /[^a-zA-Z0-9\s]+/;
      if ((inputtxt.value.match(letterNumber)) && PaintersWindowActive) {
        alert('Non-English characters in the Title field can probably lead to strange and not SEO optimized generated URLs. Kindly use English characters for title only. Thank you.');
      }
    });
    $('input[id*="edit-title-field-"]').once("character-check").focusout(function () {
      var inputtxt = document.querySelector('[id^="edit-title-field-"]');
      var letterNumber = /[^a-zA-Z0-9\s]+/;
      if ((inputtxt.value.match(letterNumber)) && PaintersWindowActive) {
        alert('Non-English characters in the Title field can probably lead to strange and not SEO optimized generated URLs. Kindly use English characters for title only. Thank you.');
      }
    });

  });
}(jQuery));