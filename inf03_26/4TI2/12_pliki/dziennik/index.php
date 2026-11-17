<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Dziennik ocen</title>
</head>
<body>
    <?php 
        $sciezka =  __DIR__ . "/dziennik.txt";
        if(isset($_POST['nazwisko'])){
            $nazwisko = $_POST['nazwisko'];
            $ocena = $_POST['ocena'];
            $przedmiot = $_POST['przedmiot'];

            if($plik = fopen($sciezka, 'a')){
                $rekord = $nazwisko.";".$przedmiot.";".$ocena."\n";
                fwrite($plik, $rekord);
                fclose($plik);
            }else{
                echo "<p>Błąd. Nie można otworzyć pliku!!!</p>";
            }

        }
    ?>
    <h1>Dziennik ocen</h1>
    <h2>Wstaw ocenę</h2>
    <form action="" method="post">
        <label for="nazwisko">Nazwisko</label>
        <input type="text" name="nazwisko" id="nazwisko">
        <br>
        <label for="przedmiot">Przedmiot</label>
        <input type="text" name="przedmiot" id="przedmiot">
        <br>
        <label for="ocena">Ocena</label>
        <input type="number" name="ocena" id="ocena" min="1" max="6">
        <br>
        <button>Dodaj ocenę</button>
    </form>
    <h2>Wyświetl oceny</h2>
    <?php 
    if($plik = file($sciezka)){
        //var_dump($plik);
        foreach($plik as $linia){
            $wpis = explode(";", $linia);
            echo "<p>Uczen: " . $wpis[0] . " Przedmiot: ". $wpis[1] ." Ocena: " . $wpis[2] . "</p>";
        }
    }else{
        echo "<p>Nie można odczytać pliku</p>";
    }
    ?>
</body>
</html>