<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Poziomy rzek</title>
    <link rel="stylesheet" href="styl.css">
</head>
<body>
    <header>
        <section>
            <img src="obraz1.png" alt="Mapa Polski">
        </section>
        <section>
            <h1>Rzeki w województwie dolnośląskim</h1>
        </section>
    </header>
    <nav>
        <form action="" method="post">
            
            <label for="wszystkie" class="stany">
                <input type="radio" name="stany" id="wszystkie"  value="wszystkie">Wszystkie
            </label>

            
            <label for="ostrzegawczy" class="stany">
                <input type="radio" name="stany" id="ostrzegawczy"  value="ostrzegawczy">Ponad stan ostrzegawczy
            </label>

            
            <label for="alarmowy" class="stany">
                <input type="radio" name="stany" id="alarmowy" value="alarmowy">Ponad stan alarmowy
            </label>
            
            <button>Pokaż</button>
        </form>
    </nav>
    <main>
        <section id="lewy">
            <h3>Stany na dzień 2022-05-05</h3>
            <table>
                <tr>
                    <th>Wodomierz</th>
                    <th>Rzeka</th>
                    <th>Ostrzegawczy</th>
                    <th>Alarmowy</th>
                    <th>Aktualny</th>
                </tr>
                <?php 
                    $conn = mysqli_connect("localhost", "root", "", "ja_rzeki1");
                    if(isset($_POST['stany'])){
                        $stan = $_POST['stany'];
                        if($stan == "wszystkie"){
                            $query = "SELECT nazwa, rzeka, stanOstrzegawczy, stanAlarmowy, stanWody FROM wodowskazy AS w INNER JOIN pomiary AS p ON w.id = p.wodowskazy_id WHERE dataPomiaru = '2022-05-05';";
                        }
                        else if($stan == "ostrzegawczy"){
                            $query = "SELECT nazwa, rzeka, stanOstrzegawczy, stanAlarmowy, stanWody FROM wodowskazy AS w INNER JOIN pomiary AS p ON w.id = p.wodowskazy_id WHERE dataPomiaru = '2022-05-05' AND stanWody > stanOstrzegawczy;";
                        }
                        else if($stan == "alarmowy"){
                            $query = "SELECT nazwa, rzeka, stanOstrzegawczy, stanAlarmowy, stanWody FROM wodowskazy AS w INNER JOIN pomiary AS p ON w.id = p.wodowskazy_id WHERE dataPomiaru = '2022-05-05' AND stanWody > stanAlarmowy;";
                        }

                        $result = mysqli_query($conn, $query);
                        while($row = mysqli_fetch_row($result)){
                            echo "<tr>
                                <td>$row[0]</td>
                                <td>$row[1]</td>
                                <td>$row[2]</td>
                                <td>$row[3]</td>
                                <td>$row[4]</td>
                            </tr>";
                        }
                    }
                ?>
                <!-- skrypt PHP -->
            </table>
        </section>
        <section id="prawy">
            <h3>Informacje</h3>
            <ul>
                <li>Brak ostrzeżeń o burzach z gradem</li>
                <li>Smog w mieście Wrocław</li>
                <li>Silny wiatr w Karkonoszach</li>
            </ul>
            <h3>Średnie stany wód</h3>
            <!-- skrypt 2 PHP -->
             <?php 
                $query = "SELECT dataPomiaru, AVG(stanWody) FROM pomiary GROUP BY dataPomiaru";
                $result = mysqli_query($conn, $query);
                while($row = mysqli_fetch_row($result)){
                    echo "<p>$row[0]: $row[1]</p>";
                }
                mysqli_close($conn);
             ?>
             <a href="https://komunikaty.pl">Dowiedz się więcej</a>
             <img src="obraz2.jpg" alt="rzeka">
        </section>
    </main>
    <footer>
        <p>Stronę wykonał: 11122233344</p>
    </footer>
</body>
</html>