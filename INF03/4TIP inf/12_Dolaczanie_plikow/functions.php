<?php

function teraz(){
    $date = date("Y-m-d H:i:s");
    return $date;
}

function tnij($tekst, $znaki=50){
    $tekst = trim($tekst); //usuwa białe znaki np. spacje z początku i końca tekstu
    $tekst = substr($tekst, 0, $znaki); //pobiera i zwraca fragment tekstu
    return $tekst . "...";
}

function firma() {
    $firmy = ['Polski Węgiel', 'Polski Cukier', 'Orlen'];
    return $firmy[rand(0,2)];
}