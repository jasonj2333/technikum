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
        $host = "localhost";
        $user = "root";
        $pass = "";
        $db = "dataczas";
        //$conn = mysqli_connect("localhost", "root", "", "dataczas");
        $conn = new mysqli($host, $user, $pass, $db);
        
        $query ="SELECT nazwa, CONCAT(DATE_FORMAT(data_wydarzenia, '%d.%m.%Y'),' ', DATE_FORMAT(godzina_rozpoczecia, '%H:%i')) AS data_dodania FROM wydarzenia;";

        $result = $conn->query($query);

        if($result->num_rows == 0){
            echo "<p>Nie znalieziono wydarzeń</p>";
        }else{
            echo "<table>";
            echo "<tr>";
            echo "<th>Nazwa</th><th>Data</th>";            
            echo "</tr>";
            while($row = $result->fetch_object()){
                echo "<tr>";
                echo "<td>$row->nazwa</td><td>$row->data_dodania</td>";            
                echo "</tr>";
            }
            echo "</table>";
        }
        $conn->close();
    ?>
</body>
</html>