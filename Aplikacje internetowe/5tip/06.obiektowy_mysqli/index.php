<?php
$server = "localhost";
$user = "root";
$pass = "";
$db = "ja_baza";

$conn = new mysqli($server, $user, $pass, $db);

//mysql_set_charset($conn, "utf8");
$conn->set_charset("utf8"); //ustawianie kodowania znaków (polskich)
//echo $conn->character_set_name(); //sprawdzenie jakie kodowanie jest ustawione

$add = "INSERT INTO dania (typ, nazwa, cena) VALUES (1, 'rosół', 20);";
$result = $conn->query($add);

if($result) echo "Dodano wpis do bazy";
else echo "Błąd w zapytaniu";

$query = "SELECT nazwa, cena FROM dania";
$result = $conn->query($query);

if($result->num_rows > 0){
    //echo $result->num_rows; //sprawdzanie ile rekordów zwraca zapytanie
    while($row = $result->fetch_object()){
        echo "<p>$row->nazwa - $row->cena zł</p>";
    }
}else{
    echo "Nie znalezionych żadnych dań";
}

$conn->close();