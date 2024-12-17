<?php 
    require_once "dbase.php";
?>
<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Lista użytkowników</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <h1>Lista użytkowników
        <a href="nowy_uzytkownik.html">
            <button>Dodaj użytkownika</button>
        </a>
    </h1>
    <div>
        <table>
            <tr>
                <th>ID</th>
                <th>Imie</th>
                <th>Nazwisko</th>
                <th>Telefon</th>
                <th>Email</th>
                <th>Operacje</th>
            </tr>
        <?php 
            $zapytanie = "SELECT * FROM uzytkownik";
            $wynik = mysqli_query($polaczenie, $zapytanie);
            while($wiersz = mysqli_fetch_assoc($wynik)){
                echo "<tr>
                    <td>{$wiersz['id']}</td>
                    <td>{$wiersz['imie']}</td>
                    <td>{$wiersz['nazwisko']}</td>
                    <td>{$wiersz['telefon']}</td>
                    <td>{$wiersz['email']}</td>
                    <td> </td>
                    </tr>";
            }
            mysqli_close($polaczenie);
        ?>
        </table>
    </div>
</body>
</html>