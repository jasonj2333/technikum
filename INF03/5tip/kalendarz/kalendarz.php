<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Kalendarz</title>
    <link rel="stylesheet" href="styl.css">
</head>
<body>
    <header>
        <h1>Dni, miesiące, lata...</h1>
    </header>
    <section id="napis">
        <!-- skrypt1 -->
         <?php 
            $conn = mysqli_connect("localhost", "root", "", "kalendarz");
            $dzisiaj = date("m-d");
            $query = "SELECT imiona FROM `imieniny` WHERE data = '$dzisiaj'";
            $result = mysqli_query($conn, $query);
            var_dump($result);
         ?>
    </section>
    <main>
        <section id="lewa">
            <table>
                <tr>
                    <th>liczba dni</th>
                    <th>miesiąc</th>
                </tr>
                <tr>
                    <td rowspan="7">31</td>
                    <td>styczeń</td>
                </tr>
                <tr>
                    <td>marzec</td>
                </tr>
                <tr>
                    <td>maj</td>
                </tr>
                <tr>
                    <td>lipiec</td>
                </tr>
                <tr>
                    <td>sierpień</td>
                </tr>
                <tr>
                    <td>październik</td>
                </tr>
                <tr>
                    <td>grudzień</td>
                </tr>
                <tr>
                    <td rowspan="4">30</td>
                    <td>kwiecień</td>
                </tr>
                <tr><td>czerwiec</td></tr>
                <tr><td>wrzesień</td></tr>
                <tr><td>listopad</td></tr>
                <tr>
                    <td>28 lub 29</td>
                    <td>luty</td>
                </tr>
            </table>
        </section>
        <section id="srodek">
            <h2>Sprawdź kto ma urodziny</h2>
            <form action="" method="post">
            <input type="date" name="urodziny" id="urodziny" min="2024-01-01" max="2024-12-31" required>
            <button>Wyślij</button>    
            </form>
            <!-- skrypt2 -->
             <?php 
                mysqli_close($conn);
             ?>
        </section>
        <section id="prawa">
            <a href="https://pl.wikipedia.org/wiki/Kalendarz_Majów" target="_blank">
                <img src="kalendarz.gif" alt="Kalendarz Majów">
            </a>
            <h2>Rodzaje kalendarzy</h2>
            <ol>
                <li>
                    słoneczny
                    <ul>
                        <li>kalendarz Majów</li>
                        <li>juliański</li>
                        <li>gregoriański</li>
                    </ul>
                </li>
                <li>
                    księżycowy
                    <ul>
                        <li>starogrecki</li>
                        <li>babiloński</li>
                    </ul>
                </li>
            </ol>
        </section>
    </main>
    <footer>
        <p>Stronę opracował: 1212123213</p>
    </footer>
</body>
</html>