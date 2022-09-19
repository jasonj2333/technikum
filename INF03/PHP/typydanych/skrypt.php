<?php
echo "<h2>Typ całkowity</h2>";
$n = 0x4F;
echo 'Przykładowa zmienna typu int: $n=0x4F. ';
echo "Zinterpretowana zmienna $n";
echo "<br>Typ zmiennej ".gettype($n);

echo "<h2>Typ zmiennoprzecinkowy (float)</h2>";
$n = 0.89;
echo 'Przykładowa zmienna typu int: $n=0.89. ';
echo "Zinterpretowana zmienna $n";
echo "<br>Typ zmiennej ".gettype($n);

echo "<h2>Typ tekstowy (string)</h2>";
$n = 'Tekst';
$n1 = "Tekst";

$n2 = <<<'tx'
Funkcja var_dump jest bardziej zaawansowana, zwraca ona nie tylko typ zmiennej, ale i jej wartość. Ponadto funkcji var_dump możemy użyć nie tylko do sprawdzania typu zmiennej, ale także do szczegółowego sprawdzania tablic i obiektów. Funkcja jako argument może przyjąć obiekt, zmienną, funkcję, a nawet wyrażenie. 
Funkcja ta nie zwraca wartości, a bezpośrednio wyświetla zrzut struktury $n podanego argumentu.
tx;

echo 'Przykładowa zmienna typu int: $n="Tekst". ';
echo "Zinterpretowana zmienna $n2";
echo "<br>Typ zmiennej ".gettype($n2);

echo "<h2>Typ boolean</h2>";
$n = false;
echo 'Przykładowa zmienna typu int: $n=true. ';
echo "Zinterpretowana zmienna $n";
echo "<br>Typ zmiennej ".gettype($n);

echo'<br>';
$x = 123;
$y = (string) $x;
echo $y.' '.gettype($y);

$x = 123;
$y = (string) $x;

settype($x, 'float');

echo gettype($x);
echo $y + $x;