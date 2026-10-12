<?php 

$produkty = ["Klawiatura", "Mysz", "Monitor", "Słuchawki", "Pendrive", "Pamięć RAM 32 GB"];
$ceny = [120, 60, 850, 150, 35, 2500];

$suma = 0;
$maks_id = 0;
$min_id = 0;
$licznik = 0;

for ($i=0; $i < count($produkty); $i++) { 
    echo $produkty[$i] . " - " . $ceny[$i] . " zł <br>";
    $suma += $ceny[$i];
    if($ceny[$i] > $ceny[$maks_id]) $maks_id = $i;
    if($ceny[$i] < $ceny[$min_id]) $min_id = $i;
    if($ceny[$i] > 500) $licznik++;
}

echo "<p>Suma wartości produktów: $suma zł</p>";
echo "<p>Najdroższy produkt to: $produkty[$maks_id] za $ceny[$maks_id]zł</p>";
echo "<p>Najtańszy produkt to: $produkty[$min_id] za $ceny[$min_id]zł</p>";
echo "<p>Liczna produktów powyżej 500 zł: $licznik</p>";

#Zadanie 2 Kino
$miejsca_zajete = [
    [1, 3],
    [1, 4],
    [2, 7],
    [3, 8], 
    [3, 9],
    [4, 4],
    [5, 1],
    [5, 8]   
];

echo "<h2>Miejsca zajęte</h2>";
foreach($miejsca_zajete as $miejsca){
    echo "rząd $miejsca[0] miejse $miejsca[1] <br>";
}

$liczba_rzedow = 5;
$liczba_miejsc = 8;

echo "<h3>Sala kinowa</h3>";

for($i = 0; $i <= $liczba_rzedow; $i++){
    echo $i;
    for($j = 1; $j <= $liczba_miejsc; $j++){
        if($i == 0) echo " $j ";
        else if( in_array([$i, $j], $miejsca_zajete) ) echo " x ";
        else echo " 0 ";
    }
    echo "<br>";
}


