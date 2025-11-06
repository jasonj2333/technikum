<?php
/*
Zadanie 1 – Silnia liczby
Napisz funkcję silnia($n), która:
Obliczy silnię liczby $n (czyli 1 * 2 * 3 * ... * n) przy użyciu pętli for.
Zwróci wynik.
Wywołaj funkcję dla przykładowej liczby, np. 5, i wyświetl wynik w formacie:
Silnia liczby 5 wynosi: 120
Wskazówka: pamiętaj, że 0! = 1.
*/

function silnia($n){
    if($n == 0) return 1;

    $wynik = 1;

    for($i=1; $i<=$n; $i++){
        $wynik *= $i;
    }

    return $wynik;
}

echo silnia(5);
echo "<br>";
echo silnia(0);
echo "<br>";
echo silnia(-6); //Błędny wynik - nie ma silnie dla liczb ujemnych
?>
