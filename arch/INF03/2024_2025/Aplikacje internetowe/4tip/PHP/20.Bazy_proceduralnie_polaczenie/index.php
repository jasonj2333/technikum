<?php 

$server = 'localhost';
$user = 'root';
$password = '';
$dbase = 'ja_cukiernia';

$conn = mysqli_connect($server, $user, $password, $dbase);

$query = "SELECT * from wyroby";
$result = mysqli_query($conn, $query);
//Do rozpakowania wyników można użyć następujących funkcji
//$row = mysqli_fetch_row($result) //pola tablicy będą indeksowane liczbami od 0 np. $row[0];
//$row = mysqli_fetch_assoc($result) //uzyskamy tablicę asocjacyjną - indeksy zgodne nazwami kolumn w bazie lub z aliasami jeśli stworzymy takie w zapytaniu
//$row = mysqli_fetch_array($result) //tablica z podwójnymi danymi - dostępne indeksy zarówno numeryczne jak i asocjacyjne
//Poniższy przykład tworzy obiekt: mysqli_fetch_object($result), zamiast tablic dostajemy obiekt i za pomocą operatora -> dostajemy się do poszczególnych pól obiektu, nazwy zgodne z nazwami kolumn w bazie lub aliasami jeśli stworzymy takie w zapytaniu

while($row = mysqli_fetch_row($result)){
    echo "<p>$row[1]</p>";
}

mysqli_close($conn);