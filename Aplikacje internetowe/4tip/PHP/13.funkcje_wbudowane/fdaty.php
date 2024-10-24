<?php

echo time();

echo "<br>";

$date = getdate(-432432423);

//var_dump($date);

echo $date['year'];
echo "<br>";
echo $date['mon'];
echo "<br>";
echo $date['month'];
echo "<br>";
echo $date['mday'];
echo "<br>";
echo $date['hours'];
echo "<br>";
echo $date['minutes'];

echo "<h2>Formatowanie daty</h2>";
echo date('Y-m-d H:i:s', 321321321);

echo "<br>";
$czas = mktime(0, 0, 0, 1, 1, 2000);
echo $czas;
echo "<br>";
echo date('Y-m-d H:i:s', $czas);

// Napisz funkcje która jako argument przyjmuje podany znacznik czasu
// i wyświetla datę w formacie:
//     Dzisiaj jest wtorek 23 listopada 2017 roku.

function wyswietlCzas($znacznik) {
    $date = getdate($znacznik);
    //var_dump($date);
    $day = $date['wday'];
    $days = ["", "poniedziałek", "wtorek", "środa", "czwartek", "piątek", "sobota", "niedziela"];

    $mon = $date["mon"];
    $months = ["", "stycznia", "", "", "", "", "", "", "", "", "października", "listopada", "grudnia"];

    $printDate = "Dzisiaj jest " . $days[$day] ." ". $date["mday"]." ".$months[$mon] ." ".$date["year"]." roku";
    return $printDate;
}
echo "<br>";
echo wyswietlCzas(time());