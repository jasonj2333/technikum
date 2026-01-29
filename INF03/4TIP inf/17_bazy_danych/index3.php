<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Baza danych - podejście obiektowe</title>
</head>
<body>
    <h1>Łączenie z bazą podejście obiektowe</h1>
    <?php 
        $conn = new mysqli("localhost", "root", "", "firma");
        $query = "SELECT imie, nazwisko, email FROM klienci;";
        $result = $conn->query($query);

        while($row = $result->fetch_object()){
            echo "<p>$row->imie $row->nazwisko, email: $row->email</p>";
        }
        echo "---------------------------------";

        $result = $conn->query($query);
        while($row = $result->fetch_row()){
            echo "<p>$row[0] $row[1], email: $row[2]</p>";
        }

        echo "---------------------------------";

        $result = mysqli_query($conn, $query); //funkcja strukturalna też działa, choć nie zaleca się mieszać podejść
        while($row = $result->fetch_row()){
            echo "<p>$row[0] $row[1], email: $row[2]</p>";
        }

        $conn->close();
    ?>
</body>
</html>