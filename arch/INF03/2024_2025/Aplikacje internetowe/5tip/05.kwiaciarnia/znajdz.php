<!DOCTYPE html>
<html lang="pl">

<head>
    <meta charset="UTF-8">
    <title>Kwiaty</title>
    <link rel="stylesheet" href="styl3.css">
</head>

<body>
    <header>
        <h1>Grupa Polskich Kwiaciarnii</h1>
    </header>
    <main>
        <nav>
            <h2>Menu</h2>
            <ol>
                <li><a href="index.html">Strona główna</a></li>
                <li><a href="https://www.kwiaty.pl/" target="_blank">Rozpoznaj kwiaty</a></li>
                <li>
                    <a href="znajdz.php">Znajdź kwiaciarnię</a>
                    <ul>
                        <li>w Warszawie</li>
                        <li>w Malborku</li>
                        <li>w Poznaniu</li>
                    </ul>
                </li>
            </ol>
        </nav>
        <section id="panelPrawy">
            <h2>Znajdź kwiaciarnię</h2>
            <form action="" method="post">
                <label>Podaj nazwę miejscowości
                    <input type="text" name="miasto">
                </label>
                <button type="submit" name="wyslij">SPRAWDŹ</button>
            </form>
            
            <!-- skrypt -->
             <?php 
             $con = mysqli_connect('localhost', 'root', '', 'ja_kwiaciarnia');
             if( isset($_POST['wyslij']) ){
                $miasto = $_POST['miasto'];
                $query = "SELECT nazwa, ulica FROM kwiaciarnie WHERE miasto='$miasto'";
                $result = mysqli_query($con, $query);
                while( $row = mysqli_fetch_row($result) ){
                    echo "<h3>$row[0], $row[1] </h3>";
                }

             }
             mysqli_close($con);
             ?>
            
        </section>
    </main>
    <footer>
        <p>Stronę opracował: 11111111</p>
    </footer>
</body>

</html>