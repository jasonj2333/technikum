<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Pliki</title>
</head>
<body>
    <?php 
    //Jeżeli plik nie istnieje to utwórz
    if(!file_exists('plik.txt')){
        touch('plik.txt');
    }
    
    echo filesize('plik.txt') . "<br>"; //Sprawdza wielkość pliku w bajtach

    $plik = fopen('plik.txt', 'r');
    while(!feof($plik)){
        $linia = fgets($plik); //funkcja czytająca kolejną linie z pliku
        echo $linia . "<br>";
    }
    fclose($plik);

    $sciezka = "tekst.txt";

    $plik2 = fopen($sciezka, 'w'); //Otwarcie do zapisu
    fwrite($plik2, "Dzisiaj uczymy się obsługi plików\n");
    fwrite($plik2, "W różnych trybach\n");
    fclose($plik2);

    $plik3 = fopen($sciezka, 'a'); //Otwarcie z dodawaniem bez nadpisywania (append)
    fwrite($plik3, "I różnymi metodami\n");
    fclose($plik3);

    $plik4 = fopen('plik.txt', 'r');
    while(!feof($plik4)){
        $znak = fgetc($plik4); 
        echo $znak . "-";
    }
    fclose($plik4);

    echo "<br>";
    $tekst = file_get_contents($sciezka); //Zrzut całego pliku do zmiennej tekstowej
    echo nl2br($tekst);

    echo "<br><hr>";
    if(file_exists($sciezka)){ //Zrzut pliku do zmiennej tablicowej
        $tekst2 = file($sciezka);
        foreach($tekst2 as $linia){
            echo $linia . "<br>";
        }
    } else{
        echo "<p>Plik nie istnieje !!!</p>";
    }
    ?>
</body>
</html>