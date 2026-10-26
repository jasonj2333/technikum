<?php

$produkty = ["Klawiatura", "Mysz", "Monitor", "Pendrive", "Pamięć ram 32GB", "Karta graficzna"];
$ceny = [120, 60, 500, 35, 2500, 5100];

$maks_id = 0;
$min_id = 0;
$suma = 0;
$licznik = 0;

for($i = 0; $i < count($produkty); $i++){
    echo $produkty[$i] . " - " . $ceny[$i] . " zł <br>";
    $suma += $ceny[$i];
    if($ceny[$i] > $ceny[$maks_id]) $maks_id = $i;
    if($ceny[$i] < $ceny[$min_id]) $min_id = $i;
    if($ceny[$i] > 500) $licznik++;
}

echo "<p>Suma wartości produktów wynosi $suma zł</p>";
echo "<p>Najdroższy produkt to: $produkty[$maks_id] - $ceny[$maks_id] zł</p>";
echo "<p>Najtańszy produkt to: $produkty[$min_id] - $ceny[$min_id] zł</p>";
echo "<p>Liczba produktów droższych niż 500 zł wynosi $licznik</p>";

//Zadanie egzamin
$wyniki = [8, 5, 10, 3, 7, 2, 9, 6, 4, 7, 9, 1];
//Wyświetl wynik punktowy z komentarzem - "zaliczył" jeżeli liczba punktów jest większa niż 5 lub
//"nie zaliczył" w przeciwnym wypadku
//Policz średnią punktów
//Policz ile osób zaliczyło egzamin
$suma = 0;
$zdali = 0;

foreach($wyniki as $wynik){
    echo $wynik;
    if($wynik > 5){
        echo " - zaliczył <br>";
        $zdali++;
    }else{
        echo " - nie zaliczył <br>";
    }
    $suma += $wynik;
}

echo "<p>Uczniowie, którzy zdali egzamin: $zdali </p>";
echo "<p>Średni wynik to: ". round($suma / count($wyniki), 2) ."</p>";

//Turniej
$punkty = [
    "Orły" => 12,
    "Sokoły" => 8,
    "Wilki" => 15,
    "Lisy" => 6,
    "Jastrzębie" => 10, 
    "Sowy" => 17,
];

$najlepsza = "Orły";

echo "<h2>Wyniki drużyn</h2>";
foreach($punkty as $nazwa => $wynik){
    echo "<p>$nazwa - $wynik pkt.</p>";
    if($punkty[$nazwa] > $punkty[$najlepsza]) $najlepsza = $nazwa;
}

$licznik = 0;

echo "<h2>Wyniki drużyn 10 i więcej punktów</h2>";
foreach($punkty as $nazwa => $wynik){
    if($wynik >= 10) {
        echo "<p>$nazwa - $wynik pkt.</p>";
        $licznik++;
    }
}
echo "<p>Drużyny z wynikiem 10 lub więcej punktów: $licznik </p>";
echo "<p>Najlepsza drużyna to: $najlepsza - $punkty[$najlepsza]</p>";