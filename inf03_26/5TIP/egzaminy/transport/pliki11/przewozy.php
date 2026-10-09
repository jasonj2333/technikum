<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Firma przewozowa</title>
    <link rel="stylesheet" href="styles.css">
</head>
<body>
    <header>
        <h1>Firma przewozowa Półdarmo</h1>
    </header>
    <nav>
        <a href="kw1.jpg">kwerenda1</a>
        <a href="kw2.jpg">kwerenda2</a>
        <a href="kw3.jpg">kwerenda3</a>
        <a href="kw4.jpg">kwerenda4</a>
    </nav>
    <main>
        <section id="lewa">
            <h2>Zadania do wykonania</h2>
            <table>
                <tr>
                    <th>Zadanie do wykonania</th>
                    <th>Data realizacji</th>
                    <th>Akcja</th>
                </tr>
                <!-- skrypt 1 i 2 -->
                 <?php 
                    $conn = new mysqli("localhost", "root", "", "przewozy");

                    if(isset($_GET['id'])){
                        $id = $_GET['id'];
                        $query = "DELETE FROM zadania WHERE id_zadania = $id;";
                        $result = $conn->query($query);
                    }

                    if(isset($_POST['zadanie'])){
                        $zadanie = $_POST['zadanie'];
                        $data = $_POST['data'];
                        $query = "INSERT INTO `zadania`(`zadanie`, `data`, `osoba_id`) VALUES ('$zadanie','$data', 1);";
                        $result = $conn->query($query);
                    }

                    $query = "SELECT id_zadania, zadanie, data FROM `zadania`;";
                    $result = $conn->query($query);
                    while($row = $result->fetch_row()){
                        echo "<tr>";
                        echo "<td>$row[1]</td>";
                        echo "<td>$row[2]</td>";
                        echo "<td><a href='przewozy.php?id=$row[0]'>Usuń</a></td>";
                        echo "</tr>";
                    }

                    $conn->close();
                 ?>
            </table>
            <form action="" method="post">
                <label for="zadanie">Zadanie do wykonania:</label>
                <input type="text" id="zadanie" name="zadanie">
                <label for="data">Data realizacji:</label>
                <input type="date" id="data" name="data">
                <button>Dodaj</button>
            </form>
        </section>
        <section id="prawa">
            <img src="auto.png" alt="auto firmowe">
            <h3>Nasza specjalność</h3>
            <ul>
                <li>Przeprowadzki</li>
                <li>Przewóz mebli</li>
                <li>Przesyłki gabarytowe</li>
                <li>Wynajem pojazdów</li>
                <li>Zakupy towarów</li>
            </ul>
        </section>
    </main>
    <footer>
        <p>Stronę wykonał: 11122233344</p>
    </footer>
</body>
</html>