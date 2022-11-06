<?php

$a = 6;
$b = 5;

//Operatory arytmetyczne
echo $a + $b.'<br>';
echo $a - $b.'<br>';
echo $a * $b.'<br>';
echo $a / $b.'<br>';
echo $a % $b.'<br>';
echo $a ** $b.'<br>';

//Operatory porównania
var_dump($a == $b);
var_dump($a != $b);
var_dump($a === $b);
var_dump($a !== $b);
var_dump($a >= $b);
var_dump($a <= $b);
var_dump($a < $b);
var_dump($a > $b);
var_dump($a <> $b);

//Operatory bitowe
var_dump($a & $b);
var_dump($a | $b);
var_dump(~$a);
var_dump($a << 1);
var_dump($a >> 1);

//Operatory łańcuchowe
$x = "Bardzo lubię informatykę.";
$x .= "A nie za bardzo lubie matematykę.";
echo $x;

$z = 1;
$z++;
$z--;
++$z;
--$z;
echo $z;