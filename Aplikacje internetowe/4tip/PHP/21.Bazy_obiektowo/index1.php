<?php

$conn = new mysqli("localhost", "root", "", "4tip_test");

$query = "INSERT INTO lokale (nazwa, miasto, ulica, numer) VALUES('Super smaki','Niepołomice', 'Szkolna', 15)";

$result = $conn->query($query);

if($result == true){
    echo "<p>Dodano nowy lokal</p>";
}else{
    echo "<p>Błąd !!!</p>";
}

$conn->close();