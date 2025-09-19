<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Wydarzenia</title>
</head>
<body>
    <h1>Wydarzenia</h1>
    <?php 
        $conn = mysqli_connect("localhost", "root", "", "dataczas");
        //$query = "SELECT nazwa, DATE_FORMAT(data_i_czas_dodania, '%d.%m.%Y %H:%i') AS data_dodania FROM wydarzenia";

        $query ="SELECT nazwa, CONCAT(DATE_FORMAT(data_wydarzenia, '%d.%m.%Y'),' ', DATE_FORMAT(godzina_rozpoczecia, '%H:%i')) AS data_dodania FROM wydarzenia;";

        $result = mysqli_query($conn, $query);

        if(mysqli_num_rows($result) == 0){
            echo "<p>Nie znalieziono wydarzeń</p>";
        }else{
            echo "<table>";
            echo "<tr>";
            echo "<th>Nazwa</th><th>Data</th>";            
            echo "</tr>";
            while($row = mysqli_fetch_row($result)){
                echo "<tr>";
                echo "<td>$row[0]</td><td>$row[1]</td>";            
                echo "</tr>";
            }
            echo "</table>";
        }
        mysqli_close($conn);
    ?>
</body>
</html>