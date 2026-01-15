<?php

$imiona = ["Tomek", "Anna", "Wojtek", "Zosia", "Artur"];

//Odczytaj imiona z tablicy i zapisz je do pliku imiona.txt.
$plik = fopen("imiona.txt", 'a');
foreach($imiona as $imie){
    fwrite($plik, $imie."\n");
}
fclose($plik);
//Odczytaj plik imiona i wyświetl je na ekranie.
$plik = fopen("imiona.txt", 'r');
while(!feof($plik)){
    echo fgets($plik)."<br>";
}
fclose($plik);