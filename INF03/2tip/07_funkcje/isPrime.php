<?php

// ### **Polecenie:**

// Napisz funkcję:

// ```php
// function sumaPierwszych(int $od, int $do): int
// ```

// która zwróci sumę **wszystkich liczb pierwszych** (czyli takich, które dzielą się tylko przez 1 i przez siebie same) z przedziału od `$od` do `$do` (włącznie).

// Jeśli `$od` jest większe niż `$do`, zamień je miejscami.

// ### **Podpowiedź:**

// * Napisać pomocniczą funkcję `isPrime(int $n): bool`, która sprawdzi, czy liczba jest pierwsza.
// * W `isPrime()` sprawdź, czy `n` > 1, a następnie sprawdź dzielniki od 2 do `sqrt(n)`.
// * W `sumaPierwszych()` użyj pętli `for` od `$od` do `$do`, wywołuj `isPrime()` i jeśli `true` — dodawaj do sumy.

function isPrime(int $n): bool {
    if($n < 2) return false;

    for($i = 2; $i <= sqrt($n); $i++){
        if($n % $i == 0) return false;
    }
    return true;
}

function sumaPierwszych(int $od, int $do): int {
    if($do < $od){
        $temp = $od;
        $od = $do;
        $do = $temp;
    }

    $suma = 0;
    
    for($i = $od; $i <= $do; $i++){
        if(isPrime($i)) $suma += $i;
    }
    return $suma;
}

echo sumaPierwszych(10, 1);