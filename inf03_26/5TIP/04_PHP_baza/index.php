<?php 
    if(isset($_POST['isbn'])){
        $isbn = $_POST['isbn'];
        $tytul = $_POST['tytul'];
        $rokWydania = $_POST['rokWydania'];
        $id_autor = $_POST['autor'];

        $conn = mysqli_connect("localhost", "root", "", "biblioteka2");
        $query = "INSERT INTO ksiazki (isbn, tytul, rokWydania, id_autor) VALUES ('$isbn', '$tytul', $rokWydania, $id_autor)";
        $result = mysqli_query($conn, $query);
        mysqli_close($conn);
    }
?>

<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Biblioteka</title>
</head>
<body>
    <h1>Biblioteka</h1>
    <?php 
        $conn = mysqli_connect("localhost", "root", "", "biblioteka2");
        //$conn = new mysqli("localhost", "root", "", "biblioteka2");
        mysqli_set_charset($conn, "utf8");
        //$conn->set_charset("utf8");
        //var_dump($conn);
        $query = "SELECT isbn, tytul, rokWydania, imie, nazwisko FROM ksiazki k JOIN autor a ON k.id_autor = a.id";
        $result = mysqli_query($conn, $query);
        //$result = $conn->query($query);
        //var_dump($result);
        echo "<table>";
        echo "<tr>
            <th>ISBN</th>
            <th>Tytuł</th>
            <th>Rok wydania</th>
            <th>Autor</th>
        </tr>";
        while($row = mysqli_fetch_row($result)){
            echo "<tr>
                <td>$row[0]</td>
                <td>$row[1]</td>
                <td>$row[2]</td>
                <td>$row[3] $row[4]</td>
            </tr>";
        }
        // while($row = mysqli_fetch_assoc($result)){
        //     echo "<tr>
        //         <td>{$row['isbn']}</td>
        //         <td>{$row['tytul']}</td>
        //         <td>{$row['rokWydania']}</td>
        //     </tr>";
        // }
        // while($row = $result->fetch_object()){
        //     echo "<tr>
        //         <td>$row->isbn</td>
        //         <td>$row->tytul</td>
        //         <td>$row->rokWydania</td>
        //     </tr>";
        // }
        echo "</table>";
        mysqli_close($conn);
        //$conn->close();
    ?>

    <h2>Dodaj książkę</h2>
    <form action="" method="post">
        <label for="isbn">ISBN</label>
        <input type="text" id="isbn" name="isbn">
        <label for="tytul">Tytuł</label>
        <input type="text" id="tytul" name="tytul">
        <label for="rokWydania">Rok wydania</label>
        <input type="number" id="rokWydania" name="rokWydania">
        <select name="autor" id="autor">
            <option value="1">Bolesław Prus</option>
            <option value="2">Henryk Sienkiewicz</option>
        </select>
        <button>Dodaj</button>
    </form>
</body>
</html>