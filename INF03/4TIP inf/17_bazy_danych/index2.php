<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Ćwiczenie</title>
</head>
<body>
    <?php 
        $conn = mysqli_connect("localhost", "root", "", "firma");
        $query = "SELECT imie, nazwisko, dzial, pensja FROM pracownicy;";
        $result = mysqli_query($conn, $query);

        while($row = mysqli_fetch_assoc($result)){
            echo "<p>";
            echo $row['imie']." ".$row['nazwisko']." Dział: ".$row['dzial']." Pensja: ".$row['pensja'];
            echo "</p>";
        }

        mysqli_close($conn);
    ?>
</body>
</html>