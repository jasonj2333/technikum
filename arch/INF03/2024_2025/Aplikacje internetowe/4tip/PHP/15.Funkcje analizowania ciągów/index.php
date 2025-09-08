<?php

$napis = "Senatorowie siedzą - czemuż praw nie uchwalą?";
echo "<p>Tekst: \"".$napis."\"</p>";

$dlugosc = strlen($napis);
echo "<br>";
$dlugosc2 = mb_strlen($napis);
echo "<p>Napis ma długość: $dlugosc</p>";
echo "<p>Napis ma długość: $dlugosc2</p>";
echo $napis[0];
echo $napis[$dlugosc-1];
echo "<br>";

for ($i=0; $i < $dlugosc; $i++) { 
    echo $napis[$i] . " ";
}
echo "<br>";
foreach (mb_str_split($napis) as $znak) {
    echo $znak . " ";
}

echo "<br>";
echo strstr($napis, "praw");
echo "<br>";

$dane = "Jan Kowalski, ul. Długa 23, 80-874 Gdańsk, tel. 678-890-789";
echo strstr($dane, "tel. ");
echo "<br>";
echo strpos($dane, "tel. ");
echo "<br>";
echo substr($dane, 45+5, 11);
echo "<br>";
echo substr($dane, -11);
echo "<br>";
$ciag = strtok($dane, ",");
while(is_string($ciag)){
    echo $ciag."<br>";
    $ciag = strtok(",");
}

$tablica_danych = explode(",", $dane);
var_dump($tablica_danych);
echo ltrim( $tablica_danych[2] );

