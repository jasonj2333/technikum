<?php

// Zadanie 2.
// Napisz funkcję obliczającą pole koła.

function poleKola($r = 1){
    return pi() * $r * $r;
}

echo "Pole koła wynosi: ". poleKola(5);

// Zadanie 3.
// Napisz funkcję sprawdzającą czy przekazany do niej rok jest przestępny.
// Rok jest przestępny jeżeli:
// - jest podzielny przez 4 i nie jest podzielny przez 100
// - lub jest podzielny przez 400
function przestepny($rok = 2024){
    $jestPrzestepny = false;

    if(($rok%4 == 0 && $rok % 100 != 0) || $rok % 400 == 0) {
        $jestPrzestepny = true;
    }
    return intval(($rok%4 == 0 && $rok % 100 != 0) || $rok % 400 == 0);
}
echo "<br>";
echo przestepny(2026);

// Zadanie 4.
// Napisz funkcję sprawdzającą czy przekazana do niej liczba jest parzysta.

function parzysta($liczba){
    return $liczba % 2 == 0;
}

echo "<br>";
if( parzysta(7) ) {
    echo "Liczba jest parzysta";
}else{
    echo "Liczba jest nieparzysta";
}

// Zadanie 5.
// Napisz funkcję zamieniającą numer dnia na jego nazwę. Zastosuj w niej instrukcję switch

function dzien($nr = 1){
    switch ($nr) {
        case 1:
            return "poniedziałek";
            break;
        
        default:
            return "nie znam takiego dnia";
            break;
    }
}
echo "<br>";
echo dzien(3);

function dorosla($wiek = 18){
    return $wiek >= 18;
}
echo "<br>";
if( dorosla(13) ){
    echo "Osoba jest pełnoletnia";
}else{
    echo "Osoba nie jest pełnoletnia";
}