<?php 
// Zadanie 3 – Rysowanie gwiazdek
// Napisz funkcję rysujGwiazdki($n), która:
// Przyjmuje liczbę $n.
// Wypisuje w konsoli lub przeglądarce tyle gwiazdek * w jednej linii, ile wynosi
// $n.
// Następnie przechodzi do nowej linii i wypisuje o jedną gwiazdkę więcej — aż do
// momentu, gdy w ostatnim wierszu jest $n gwiazdek.
// Przykład dla $n = 5:
// *
// **
// ***
// ****
// *****
// Użyj pętli zagnieżdżonych (for w for).

function rysujGwiazdki($n) {
    for($i = 1; $i<=$n; $i++){
        for($j = 1; $j<=$i; $j++){
            echo "*";
        }
        echo "<br>";
    }
}

rysujGwiazdki(15);

?>