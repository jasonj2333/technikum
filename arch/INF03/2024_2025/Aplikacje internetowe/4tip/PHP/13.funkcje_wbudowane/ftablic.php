<?php

$klasa = ["Tomek", "Ania", "Zosia", "Ula", "Konrad"];
$dlugosc = count($klasa);
echo "<p> $dlugosc </p>";

for($i=0; $i<$dlugosc; $i++){
    echo "<p>$klasa[$i]</p>";
}

echo "<h2>Tablica po wykonaniu operacji np. sortowania</h2>";
//sort($klasa); //sortowanie rosnąco po wartościach
rsort($klasa); //sortowanie malejąco

foreach($klasa as $imie){
    echo "<p>$imie</p>";
}

echo "<h2>Tablice asocjacyjne</h2>";

$uzytkownicy = [
    'janek' => 'jan23',
    'tomek' => 'tom9',
    'admin' => 'admin123',
    'zosia' => 'ksiezniczka',
];

//echo $uzytkownicy['tomek'];
foreach($uzytkownicy as $login => $haslo){
    echo "<p> $login - $haslo </p>";
}
//asort($uzytkownicy); //sortowanie rosnąco po wartościach
//arsort($uzytkownicy);  //sortowanie malejąco po wartościach
//ksort($uzytkownicy); //sortowanie rosnąco po kluczach
krsort($uzytkownicy); //sortowanie malejąco po kluczach

echo "<h2>Po sortowaniu</h2>";
foreach($uzytkownicy as $login => $haslo){
    echo "<p> $login - $haslo </p>";
}

echo "<h2>Wyszukiwanie w tablicy</h2>";
echo array_search("Ania", $klasa); //zwraca indeks elementu lub false
echo "<br>";
echo array_search("tom9", $uzytkownicy);
echo "<br>";
echo array_key_exists("tomek1", $uzytkownicy);

if(array_key_exists('admin', $uzytkownicy)) //zwraca true jeśli klucz istnieje w przeciwnym razie false
    echo $uzytkownicy['admin'];

echo "<br>";
echo in_array('ksiezniczka', $uzytkownicy); //zwraca true jeżeli wartość istnieje w przeciwnym razie false
