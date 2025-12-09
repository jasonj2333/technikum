<?php

function fibonacci(int $n) : int {
    
    
    if($n == 1) return 1;
    elseif($n == 2) return 1;
    
    $fib1 = 1;
    $fib2 = 1;

    for($i = 3; $i <= $n; $i++){
        $fib = $fib1 + $fib2; //obliczam sumę 2 poprzednich
        $fib1 = $fib2;
        $fib2 = $fib;
    }
    return $fib2;
}


echo fibonacci(14);
