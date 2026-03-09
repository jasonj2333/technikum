<?php

$host = "localhost";
$user = "root";
$pass = "";
$db = "stolowka";

$conn = mysqli_connect($host, $user, $pass, $db);
$query = "SELECT imie, nazwisko, klasa FROM uczniowie;";
$result = mysqli_query($conn, $query);

echo "<h2>Fetch row</h2>";
while($row = mysqli_fetch_row($result)){
    echo "<p>$row[0] $row[1] - $row[2]</p>";
}

echo "<h2>Fetch assoc</h2>";
$result = mysqli_query($conn, $query);
while($row = mysqli_fetch_assoc($result)){
    // echo "<p>".$row['imie']." ".$row['nazwisko']." - ".$row['klasa']."</p>";
    echo "<p>{$row['imie']} {$row['nazwisko']} - {$row['klasa']}</p>";
}
echo "<hr>";

echo "<h2>Fetch array</h2>";
$result = mysqli_query($conn, $query);
while($row = mysqli_fetch_array($result)){  
    echo "<p>{$row['imie']} {$row[1]} - {$row['klasa']}</p>";
}

echo "<hr>";
echo "<h2>Fetch object</h2>";
$result = mysqli_query($conn, $query);
while($row = mysqli_fetch_object($result)){  
    echo "<p>$row->imie $row->nazwisko - $row->klasa</p>";
}

mysqli_close($conn);

