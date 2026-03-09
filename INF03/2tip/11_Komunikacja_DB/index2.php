<?php

$host = "localhost";
$user = "root";
$pass = "";
$db = "stolowka";

$conn = new mysqli($host, $user, $pass, $db);
$query = "SELECT imie, nazwisko, klasa FROM uczniowie;";
$result = $conn->query($query);

while($row = $result->fetch_object()){
    echo "<p>$row->imie $row->nazwisko - $row->klasa</p>";
}

echo"<hr>";

//$result = mysqli_query($conn, $query);
$result = $conn->query($query);

while($row = $result->fetch_row()){
    echo "<p>$row[0] $row[1] - $row[2]</p>";
}

$conn->close();