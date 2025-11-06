<?php 
// Zadanie 2 – Średnia arytmetyczna liczb
// Napisz funkcję srednia($liczby), która:
// Przyjmuje tablicę liczb jako argument.
// Oblicza ich średnią arytmetyczną przy pomocy pętli for lub foreach.
// Zwraca wynik.
// Wywołaj funkcję np. dla tablicy [4, 6, 8, 10] i wypisz:
// Średnia wynosi: 7

$liczby = [4, 6, 8, 10, 8, 9, 12];

function srednia($tablica){
    $suma = 0;
    $n = count($tablica);

    foreach($tablica as $liczba){
        $suma += $liczba;
    }
    return $suma / $n;
}

echo srednia($liczby);
echo "<br>";
echo srednia([5, 6, 71, 4, 56, 7, 8]);

?>