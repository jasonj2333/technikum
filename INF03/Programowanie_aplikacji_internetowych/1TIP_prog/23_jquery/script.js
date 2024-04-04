$(document).ready(function(){
    const $element = $(".element");
    $element.css({
        "background-color" : "red",
        "color" : "white",
        "padding" : "40px"
    });
    $element.html("Jakiś tekst");

    const $main = $("#main");
    $main.addClass("zolta");
    $main.html("Jakiś inny tekst");
})