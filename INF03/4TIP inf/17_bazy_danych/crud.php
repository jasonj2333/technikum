<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>CRUD</title>
</head>
<body>
    <h1>CRUD</h1>
    <h2>C - Create (dodawanie rekordów do bazy)</h2>
    <?php 
        $conn = mysqli_connect("localhost", "root", "", "firma");
        $imie = "Tomek";
        $nazwisko = "Atomek";
        $mail = "tomek@atomek.pl";

        $sql = "INSERT INTO klienci (imie, nazwisko, email) VALUES ('$imie', '$nazwisko', '$mail');";
        //$result = mysqli_query($conn, $sql);
        $result = TRUE;

        if($result === TRUE){
            echo "<p>Dodano nowego klienta</p>";
        }else{
            echo "<p>Błąd: ".mysqli_error($conn)."</p>";
        }
        mysqli_close($conn);
    ?>

    <h2>R - READ (pobieranie rekordów z bazy)</h2>
    <?php 
        $conn = new mysqli("localhost", "root", "", "firma");
        $query = "SELECT id, imie, nazwisko, email FROM klienci;";
        $result = $conn->query($query);

        while($row = $result->fetch_object()){
            $id = $row->id;
            echo "<p>$row->imie $row->nazwisko, email: $row->email <a href='update.php?id=$id'>Edytuj</a></p>";
        }
        $conn->close();
    ?>
</body>
</html>