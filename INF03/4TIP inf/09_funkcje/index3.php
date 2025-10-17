<?php

$oceny = [5,6,2,2,1,5,6,3,4];

$dl = count($oceny);
echo $dl . "<br>";
echo $oceny[$dl-1] . "<br>"; //ostatni element tablicy

//sort($oceny); //sortowanie rosnąco
rsort($oceny); //sortowanie malejąco

for($i=0; $i<$dl; $i++){
    echo $oceny[$i] . " ";
}
echo "<br>";

$oceny_semestralne = [
    "j.polski" => 4,
    "matematyka" => 5,
    "biologia" => 3,
    "chemia" => 2,
    "j.angielski" => 3,
    "wf" => null
];
//Tablice asocjacyjne
//asort($oceny_semestralne); //rosnąco po wartościach
//arsort($oceny_semestralne); //malejąco po wartościach
//ksort($oceny_semestralne); //rosnąco po kluczach
krsort($oceny_semestralne); //malejąco po kluczach

foreach($oceny_semestralne as $przedmiot => $ocena){
    echo "<p>$przedmiot: $ocena</p>";
}

var_dump(in_array(2, $oceny_semestralne)); //czy wartość istnieje w tablicy
var_dump(array_key_exists("wf", $oceny_semestralne));//czy dany klucz istnieje w tablicy
var_dump(isset($oceny_semestralne['j.rosyjski'])); //czy w tablicy istnieje dany klucz
var_dump(!empty($oceny_semestralne['wf'])); //czy jest pusta / !empty - nie puste