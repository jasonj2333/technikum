<?php
// Zadanie 1. Suma liczb
// Oblicz i wyświetl sumę wszystkich liczb całkowitych od 1 do 100.
// Przykładowy wynik:
// Suma: 5050
$suma = 0;
for($i = 1; $i <= 100; $i++){
    $suma += $i;
}
echo "Suma: $suma <br>";


// Zadanie 2. Potęgi liczby 2
// Wyświetl pierwsze 10 potęg liczby 2, zaczynając od:
// 2
// 4
// 8
// 16
// ...
// Wykorzystaj pętlę while oraz zmienną przechowującą aktualną wartość.
$liczba = 2;
$potega = 1;
while($potega <= 10){
    echo $liczba ** $potega . "<br>";
    $potega++;
}


// Zadanie 3. Wyświetlanie elementów tablicy
// Utwórz tablicę:
$owoce = ["jabłko", "banan", "gruszka", "śliwka", "pomarańcza"];
// Za pomocą pętli foreach:
// Wyświetl wszystkie owoce.
// Wyświetl każdy owoc w osobnej linii.
// Wyświetl komunikat Liczba owoców: 5.
foreach($owoce as $owoc){
    echo $owoc . "<br>";
}
echo "Suma owoców: " . count($owoce);

// Zadanie 4. Tablica liczb
// Utwórz tablicę:
// Wykorzystując foreach:
// Wyświetl liczby parzyste.
// Wyświetl liczby nieparzyste.
// Oblicz sumę liczb parzystych.
// Oblicz sumę liczb nieparzystych.
// Wyświetl największą liczbę.

$liczby = [12, 5, 8, 21, 4, 16, 9, 30];
$sumaP = 0;
$sumaN = 0;
$maks = $liczby[0];

echo "<h2>Liczby parzyste</h2>";

foreach($liczby as $liczba){
    if($maks < $liczba) $maks = $liczba;

    if($liczba % 2 == 0){
        echo $liczba . "<br>";
        $sumaP += $liczba;
    }
}
echo "Suma liczb parzystych: $sumaP";

echo "<h2>Liczby nieparzyste</h2>";

foreach($liczby as $liczba){
    
    if($liczba % 2 != 0){
        echo $liczba . "<br>";
        $sumaN += $liczba;
    }
}
echo "Suma liczb nieparzystych: $sumaN <br>";
echo "Największa liczba to: $maks";