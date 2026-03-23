<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>CRUD</title>
</head>
<body>
    <h2>C - Create (dodawanie rekordów do bazy danych)</h2>
    <?php 
    $conn = new mysqli("localhost", "root", "", "firma");

    $imie = "Anna";
    $nazwisko = "Nowak";
    $email = "anna@nowak.pl";

    $query = "INSERT INTO klienci (imie, nazwisko, email) VALUES ('$imie', '$nazwisko', '$email');";
    //$result = $conn->query($query);
    $result = true;

    if($result === TRUE){
        echo "<p>Dodano nowego klienta</p>";
    }else{
        echo "<p>Błąd: ".$conn->error."</p>";
    }
    $conn->close();
    ?>
    <h2>
        R - Read (pobieranie rekordów z bazy danych)
    </h2>
    <?php
        $conn = new mysqli("localhost", "root", "", "firma");
        $query = "SELECT id, imie, nazwisko, email FROM klienci;";
        $result = $conn->query($query);

        while($row = $result->fetch_object()){
            $id = $row->id;
            echo "<p>$id | $row->imie $row->nazwisko, email: $row->email <a href='aktualizuj.php?id=$id'>Zmień</a> | <a href='index.php?id=$id'>Usuń</a></p>";
        }

        $conn->close();
    ?>

    <h2>U - Update (aktualizowanie rekordów)</h2>
    <h2>D - Delete (usuwanie rekordów)</h2>
</body>
</html>