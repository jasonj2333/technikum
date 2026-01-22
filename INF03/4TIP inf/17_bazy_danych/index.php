<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Bazy danych</title>
</head>
<body>
    <?php 
        $server = "localhost";
        $user = "root";
        $pass = "";
        $db = "firma";

        $conn = mysqli_connect($server, $user, $pass, $db);
        //$conn = mysqli_connect("localhost", "root", "", "firma");
        $query = "SELECT imie, nazwisko, email FROM klienci;";
        $result = mysqli_query($conn, $query);
        //$result = mysqli_query($conn, "SELECT imie, nazwisko, email FROM klienci;");
        
        //Rozpakować - fetch
        echo "<h2>Funkcja mysqli_fetch_row()</h2>";
        while($row = mysqli_fetch_row($result)){
            //var_dump($row);
            echo "<p>";
            echo "$row[0] ";
            echo "$row[1] - ";
            echo "$row[2]";
            echo "</p>";
        }

    
        echo "<h2>Funkcja mysqli_fetch_assoc()</h2>";
        $result = mysqli_query($conn, $query);
        while($row = mysqli_fetch_assoc($result)){
            
            echo "<p>";
            //var_dump($row);
            echo $row['imie']." ";
            echo $row['nazwisko']." - ";
            echo $row['email'];
            echo "</p>";
        }

        echo "<h2>Funkcja mysqli_fetch_array()</h2>";
        $result = mysqli_query($conn, $query);
        while($row = mysqli_fetch_array($result)){
            
            echo "<p>";
            //
            echo $row['imie']." ";
            echo $row[1]." - ";
            echo $row['email'];
            echo "</p>";
        }

        echo "<h2>Funkcja mysqli_fetch_object()</h2>";
        $result = mysqli_query($conn, $query);
        while($row = mysqli_fetch_object($result)){
            
            echo "<p>";
            //var_dump($row);
            echo "$row->imie ";
            echo "$row->nazwisko - ";
            echo $row->email;
            echo "</p>";
        }

        mysqli_close($conn); //Zakonczenie połączenia z bazą 
    ?>
</body>
</html>