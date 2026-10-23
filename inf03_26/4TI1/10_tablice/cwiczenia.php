<?php

$produkty = ["Klawiatura", "Mysz", "Monitor", "Pendrive", "Pamięć ram 32GB"];
$ceny = [120, 60, 500, 35, 2500];

$suma = 0;

for($i = 0; $i < count($produkty); $i++){
    echo $produkty[$i] . " - " . $ceny[$i] . " zł <br>";
    $suma += $ceny[$i];
}

echo "<p>Suma wartości produktów wynosi $suma zł</p>";