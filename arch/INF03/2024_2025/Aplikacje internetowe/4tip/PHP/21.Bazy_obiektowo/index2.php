<?php

$conn = new mysqli("localhost", "root", "", "4tip_test");

$update = "UPDATE dania set cena = 40 WHERE id = 1";
$result = $conn->query($update);

if($result){
    echo "<p>Dane zostały zmienione</p>";
}else{
    echo "<p>Błąd w zapytaniu</p>";
}

$conn->close();