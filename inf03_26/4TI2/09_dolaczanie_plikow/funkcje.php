<?php

function teraz(){
    $date = date("Y-m-d H:i:s");
    return $date;
}

function tnij($tekst, $dlugosc){
    $tekst = trim($tekst);
    $tekst = substr($tekst, 0, $dlugosc);
    return $tekst . "...";
}