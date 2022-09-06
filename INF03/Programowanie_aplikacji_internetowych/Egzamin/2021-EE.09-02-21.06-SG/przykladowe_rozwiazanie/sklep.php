<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <title>Warzywniak</title>
    <link rel="stylesheet" href="styl2.css">
</head>
<body>
    <header>
        <div class="banerL">
            <h1>Internetowy sklep z eko-warzywami</h1>
        </div>
        <div class="banerP">
            <ol>
                <li>Warzywa</li>
                <li>Owoce</li>
                <li><a href="https://terapiasokami.pl/" target="_blank">Soki</a></li>
            </ol>
        </div>
    </header>
    
    <main>
        <!--sktypt1-->
        <?php
            require("connect.php");
            $conn = connect();
            $qr="SELECT nazwa, ilosc, opis, cena, zdjecie FROM produkty WHERE produkty.Rodzaje_id = 1 || produkty.Rodzaje_id = 2";
            $result = $conn -> query($qr);
            while ($r = $result->fetch_array())
            {
                echo
                "   <section class='gen'>
                        <img src='$r[4]' alt='warzywniak'>
                        <h5>$r[0]</h5>
                        <p>opis: $r[2]</p>
                        <p>na stanie: $r[1]</p>
                        <h2>cena: $r[3]zł</h2>
                    </section>
                ";
            }
            $result->free_result();
            $conn->close();
        ?>
    </main>
    <footer>
        <form action="" method="post">
            Nazwa: <input type="text" name="nazwa" id="nazwa">
            Cena: <input type="text" step="any" name="cena" id="cena">
            <input type="submit" value="Dodaj produkt"><br>
        </form>
        <div>Stronę wykonał: 1234567890</div>
        <!--sktypt2-->
        <?php
            $conn = connect();
            if(isset($_POST['nazwa']) && isset($_POST['cena']))
            {
                $nazwa = $_POST['nazwa'];
                $cena = $_POST['cena'];
                $qr="INSERT INTO produkty(Rodzaje_id, Producenci_id, nazwa, ilosc, opis, cena, zdjecie) VALUES (1,4,'$nazwa',10,'',$cena,'owoce.jpg')" ;
                $conn->query($qr);
            }

            $conn->close();
        ?>
    </footer>
</body>
</html>