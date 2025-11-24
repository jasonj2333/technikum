<?php
//declare(strict_types=1);

//Definicja funkcji - bezargumentowa, niezwracająca wartości
function witaj(){
    echo "Witaj!!!";
}

//Wywołanie
witaj();
witaj();

function czesc($imie = "Anonim"){
    return "Witaj ".$imie;
}

echo czesc("Tomek") . "<br>";
echo czesc("Ala") . "<br>";
echo czesc() . "<br>";

function dodaj(int $a, int $b) : int {
    return $a + $b;
}

echo dodaj(5, 9) . "<br>";
echo dodaj(5, 9.6) . "<br>";
echo dodaj('1', 5) . "<br>";
//echo dodaj('abc', 5) . "<br>";

function iloczyn(int $a, int $b) : int {
    return $a * $b;
}

echo iloczyn(5, 7) . "<br>";
echo iloczyn(12, 5) . "<br>";

function iloraz(int $a, int $b) : ?float {
    if($b == 0) return null;
    return $a / $b;
}

echo iloraz(5,9) . "<br>";
if(iloraz(5,0) == null){
    echo "Błąd dzielenia przez 0<br>";
}else{
    echo iloraz(5,0) . "<br>";
}
    

function modulo(int $a, int $b) : ?int {
    if($b == 0) return null;
    return $a % $b;
}

echo modulo(5,9) . "<br>";
echo modulo(5,0) . "<br>";

//Obsługa wyjątków
function ilorazWyjatki(int $a, int $b) : float {
    if($b == 0) throw new Exception("Błąd dzielenia przez 0!");
    return $a / $b;
}

try{
    echo ilorazWyjatki(5,7) . "<br>";
    echo ilorazWyjatki(5,0) . "<br>"; //wyjątek powoduje przeskok do bloku catch
}catch(Exception $e){
    echo $e->getMessage();
    echo "<br>\n W pliku: ".$e->getFile();
    echo "<br>\n W linii: ".$e->getLine();
}