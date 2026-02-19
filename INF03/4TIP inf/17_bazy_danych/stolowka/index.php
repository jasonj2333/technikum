<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Stołówka</title>
</head>
<body>
    <h2>Uczniowie</h2>
    <?php 
        $conn = mysqli_connect("localhost", "root", "", "stolowka");
        $query = "SELECT imie, nazwisko, klasa, nazwa FROM uczniowie LEFT JOIN typy_alergii ON uczniowie.id_alergii = typy_alergii.id_alergii;";
        $result = mysqli_query($conn, $query);

        while($row = mysqli_fetch_assoc($result)){
            echo "<p>";
            echo $row['imie']." ".$row['nazwisko']." klasa: ".$row['klasa'];
            $alergia = $row['nazwa'];
            if(is_null($alergia)) $alergia = "brak";
            echo " Alergia: ". $alergia;
            echo "</p>";
        }

        mysqli_close($conn);
    
    ?>
    <h2>Posiłki</h2>
    <?php 
        $conn = mysqli_connect("localhost", "root", "", "stolowka");
        $query = "SELECT p.nazwa, tp.nazwa, p.wegetarianski, p.kalorie FROM posilki p JOIN typy_posilkow tp ON p.id_typu = tp.id_typu;";
        $result = mysqli_query($conn, $query);

        while($row = mysqli_fetch_row($result)){
            echo "<p>";
            $wegetarianski = $row[2] ? "TAK" : "NIE";
            echo $row[0]." ".$row[1]." Wegetarianski: ".$wegetarianski." - ".$row[3]." kalorii";
            echo "</p>";
        }

        mysqli_close($conn);
    
    ?>
</body>
</html>