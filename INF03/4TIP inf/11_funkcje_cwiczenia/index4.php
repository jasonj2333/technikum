<?php 
// Zadanie 1
// Napisz funkcję czyParzysta($liczba), która przyjmuje jedną liczbę i zwraca komunikat:
// „Liczba jest parzysta” lub
// „Liczba jest nieparzysta”.
// Przetestuj funkcje dla argumentów 3, 12, 0

function czyParzysta($liczba) {
    if($liczba%2 == 0){
        return "Liczba jest parzysta";
    }else{
        return "Liczba nie parzysta";
    }
}

echo czyParzysta(3);
echo "<br>";
echo czyParzysta(12);
echo "<br>";
echo czyParzysta(0);

// Zadanie 2
// Napisz funkcję najwieksza($a, $b, $c), która przyjmuje trzy liczby i zwraca największą z nich.
// Wyświetl wynik w czytelny sposób.
// Przetestuj funkcje np. dla argumentów 3, 9, 5

function najwieksza($a, $b, $c){
    $max = $a;
    if($b > $max) $max = $b;
    if($c > $max) $max = $c;

    return $max;
}

echo "<p>Największa z liczb: 3, 9, 5 to ".najwieksza(3, 9, 5)."<p>";

// Zadanie 3
// Napisz funkcję srednia($a, $b, $c), która oblicza i zwraca średnią trzech podanych liczb.
// Wyświetl wynik w czytelny sposób.
// Przetestuj funkcje dla argumentów 5, 10 i 15

function srednia($a, $b, $c){
    $suma = $a + $b + $c;
    return $suma / 3;
}

echo srednia(5, 10, 15);

//Największa liczba z dowolnej tablicy liczb

$liczby = [4, 5, 6, 71, 3, 4, 22, 3];

function najwiekszaTab($tablica) {
    $max = $tablica[0];

    foreach($tablica as $liczba){
        if($liczba > $max) $max = $liczba;
    }
    return $max;
}
echo "<br>";
echo najwiekszaTab($liczby) . "<br>";
echo najwiekszaTab([3,5,9]) . "<br>";


function najmniejszaTab($tablica) {
    $min = $tablica[0];

    foreach($tablica as $liczba){
        if($liczba < $min) $min = $liczba;
    }
    return $min;
}

echo najmniejszaTab($liczby) . "<br>";
echo najmniejszaTab([3,5,1,9]) . "<br>";
?>