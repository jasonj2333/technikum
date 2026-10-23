<?php

$grupy = [
    "A" => ["Tomek", "Iza", "Alan"],
    "C" => ["Konrad", "Zosia"],
    "B" => ["Ola", "Ala", "Wojtek"],
];

ksort($grupy); //sortowanie tablic asocjacyjnych po kluczach rosnąco
krsort($grupy); //sortowanie tablic asocjacyjnych po kluczach malejąco

echo $grupy["A"][1];
foreach($grupy as $grupa=>$lista ){
    echo "<h2>" . $grupa . "</h2>";
    foreach($lista as $uczen){
        echo "$uczen <br>";
    }
}

echo "<h2>Funkcje tablicowe</h2>";
$liczby = [2, 6, 12, 9, 8, 11, 5, 7, 12, 9, 8, 67];
echo count($liczby) . "<br>";
var_dump(in_array(16, $liczby));
sort($liczby); //sortowanie rosną po wartościach
rsort($liczby); //sortowanie malejące po wartościach

var_dump($liczby);

$adres = [
    "ulica" => "Szkolna",
    "nr_domu" => 5,
    "kod_pocztowy" => "32-005",
    "Miejscowość" => "Niepołomice",
];

asort($adres); //sortowanie tablic asocjacyjnych rosnąco po wartościach
arsort($adres);//sortowanie tablic asocjacyjnych rosnąco po wartościach

foreach($adres as $klucz => $wartosc){
    echo "<p>$klucz: $wartosc</p>";
}

echo implode("|", $liczby); //zamienia tablicę w ciąg tekstowy
echo implode(", ", $adres);

$csv = "7, 8, 9, 12, 3, 56, 8, 12, 0, 56";
$liczby2 = explode(',', $csv);
echo "<br>";
var_dump($liczby2);

$netto = [10, 40, 78, 100, 150];
$brutto = array_map(function($n){
    return $n * 1.23;
}, $netto);

echo "<br><br>";
var_dump($brutto);

$parzyste = array_filter($liczby2, function($liczba){
    return $liczba % 2 == 0;
});

echo "<br><br>";
foreach($parzyste as $liczba){
    echo $liczba . ", ";
}
echo "<br><br>";

// $suma = 0;
// foreach($netto as $cena){
//     $suma += $cena;
// }
$suma = array_reduce($netto, function($acc, $cena){
    return $acc + $cena;
});
echo $suma;
