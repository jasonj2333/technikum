<?php

function wartosc($liczba = 5, $a = 2)
{
    //$liczba = $liczba + 3;
    return $liczba += $a;
}

$liczba = 2;

$liczba = wartosc(9, 9);

echo $liczba;