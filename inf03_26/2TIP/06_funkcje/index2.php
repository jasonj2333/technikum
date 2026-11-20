<?php
declare(strict_types=1);

function poleKwadratu(int $a) : int{
    return $a * $a;
}

echo poleKwadratu(5) . "<br>";

function fibonacci(int $n) : int {
    if($n == 1 || $n == 2) return 1;

    $a = 1;
    $b = 1; 

    for($i = 3; $i <= $n; $i++){
        $c = $a + $b;
        $a = $b;
        $b = $c;
    }
    return $b;
}

for($i = 1; $i <= 25; $i++){
    echo fibonacci($i) . ", ";
}
echo "<br>";

function isPrime(int $n) : bool {
    if($n < 2){
        return false;
    }

    for($i = 2; $i <= sqrt($n); $i++){
        if($n % $i == 0) return false;
    }

    return true;
}

echo isPrime(6) . "<br>";
echo isPrime(13) . "<br>";

function displayPrime(int $n) : void {
    for($i = 2; $i <= $n; $i++){
        echo $i;
        echo isPrime($i) ? " - Tak" : " - Nie";
        echo "<br>";
    }
}

displayPrime(25);
