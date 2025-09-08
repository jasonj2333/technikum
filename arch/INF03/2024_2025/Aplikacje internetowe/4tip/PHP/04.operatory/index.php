<?php

$a = 5;
echo $a;

$b = 2; $c = 3;

echo "<br>" . $a . " " . $b . " " . $c;

//Wypisz na ekran wartość $a po czym dokonaj jej dekrementacji. Wszystko wykonaj za pomocą jednej operacji.
echo "<br>";
echo $a--;
echo "<br>";
echo $a;
//Przypisz zmiennej $parzysta resztę z dzielenia $a przez 2.
echo "<br>";
$parzysta = $a % 2;
echo $parzysta;

//Pomnóż zmienną $b przez 3, wykorzystaj zapis skrócony.
echo "<br>";
$b *= 3;
echo $b;

//Wypisz na ekran, wykorzystując konkatenację, następujący komunikat, zastępując X Y Z konkretnymi wartościami zmiennych $a, $b oraz $c: 
//Wartość zmiennej $a wynosi X, $b wynosi Y, $c wynosi Z.
echo "<br>";
echo 'Wartość zmiennej $a wynosi ' . $a . ', $b wynosi ' . $b . ', $c wynosi '. $c;

$wiek = 12;
$punkty = 10;

echo "<br>";
var_dump($wiek == $punkty);
var_dump($wiek !== $punkty);
var_dump($wiek > $punkty);
var_dump($wiek > 10 && $punkty > 10);
var_dump($wiek > 10 || $punkty > 10);
