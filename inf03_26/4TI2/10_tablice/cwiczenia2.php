<?php

$wyniki = [8, 5, 10, 3, 7, 2, 9, 6, 4, 7, 9, 1];

$zaliczyli = 0;
$suma = 0;

for($i = 0; $i < count($wyniki); $i++){
    echo "Uczen " . $i + 1 . ": $wyniki[$i]";
    if($wyniki[$i] >= 5) {
        echo " - Zaliczył";
        $zaliczyli++;
    }
    else echo " - Nie zaliczył";
    echo "<br>";
    $suma += $wyniki[$i];
}

echo "Liczba uczniów, którzy zaliczyli: $zaliczyli <br>";
echo "Średnia punktów: ". $suma / count($wyniki)." <br>";

//Zadanie 2

$wyniki = [
    "Orły" => 12,
    "Sokoły" => 8,
    "Wilki" => 15,
    "Lisy" => 6,
    "Jastrzębie" => 10
];

$suma = 0;
$maks_id = "Orły";

echo "<h2>Wyniki drużyn</h2>";
foreach ($wyniki as $druzyna => $punkty) {
    echo "$druzyna - $punkty <br>";
    $suma += $punkty;
    if($punkty > $wyniki[$maks_id]) $maks_id = $druzyna;
}

echo "<h2>Wyniki 10 i więcej punktów</h2>";
//arsort($wyniki);
$licznik = 0;
foreach ( $wyniki as $druzyna => $punkty) {
    if($punkty >= 10) {
        echo "$druzyna - $punkty <br>";
        if($punkty > 10) $licznik++;
    }
}
echo "Drużyny z wynikiem poniżej 10 punktów: $licznik <br>";
echo "Łączna liczba punktów: $suma <br>";
echo "Najlepsza drużyna: $maks_id - $wyniki[$maks_id] pkt<br>";

