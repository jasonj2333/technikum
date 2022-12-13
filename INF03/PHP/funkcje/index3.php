<?php

$oceny = [5,6,2,2,1,5,6,3,4];
//$oceny = ["piątka", "jedynka", "czwórka"];

$dl = count($oceny);

//sort($oceny);
rsort($oceny);

for($i = 0; $i < $dl; $i++){
    echo $oceny[$i].' ';
}

$oceny_semestralne = [
    "j. polski" => 4,
    "matematyka" => 5,
    "biologia" => 3,
    "chemia" => 2,
    "j. angielski" => 3,
];

//asort($oceny_semestralne);
//arsort($oceny_semestralne);
//ksort($oceny_semestralne);
krsort($oceny_semestralne);

foreach($oceny_semestralne as $przed => $ocena){
    echo "<p> $przed: $ocena </p>";
}

var_dump(in_array(1, $oceny_semestralne));
var_dump(array_key_exists("wf", $oceny_semestralne));