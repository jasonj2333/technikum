<?php
declare(strict_types=1);

function podwoj(int $liczba) : int{
    return $liczba * 2;
}

echo podwoj(5) . "<br>";
//echo podwoj(5.7) . "<br>"; //w trybie ścisłym błąd, w trybie słabym rzutowanie do int

function rabat(float $cena, float $procent) : float {
    return round($cena * (1 - $procent / 100), 2);
}

echo rabat(199.99, 20);

