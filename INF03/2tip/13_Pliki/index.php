<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Operacje na plikach</title>
</head>
<body>
    <?php 
    //touch("plik.txt");
    // echo file_exists("plik.txt") . "<br>";
    // echo filesize("plik.txt");
    // unlink("plik.txt");

    //$plik = fopen("plik.txt", 'w'); //zapis
    // $plik = fopen("plik.txt", 'a'); //dodawanie
    // fwrite($plik, "Jutro sobota, będzie wolne\n");
    // fclose($plik);

    
    $tekst = file_get_contents("plik.txt");
    echo nl2br($tekst);

    echo "<hr>";
    $plik = fopen("plik.txt", 'r'); //odczyt - plik musi istnieć
    while(!feof($plik)){
        $linia = fgets($plik);
        echo $linia . "!<br>";
    }
    fclose($plik);

    echo "<hr>";
    $plik = fopen("plik.txt", 'r'); //odczyt - plik musi istnieć
    while(!feof($plik)){
        $znak = fgetc($plik);
        echo $znak . "-";
    }
    fclose($plik);


    echo "<hr>";
    $plik = fopen("plik.txt", 'r'); //odczyt - plik musi istnieć
    while(!feof($plik)){
        $blok = fread($plik, 10);
        echo $blok . "<br>";
    }
    fclose($plik);
    
    echo "<hr>";

    if(!$plik = file("plik.txt")){
        echo "Nie można odczytać pliku";
    }else{
        foreach($plik as $linia){
            echo nl2br($linia);
        }
    }


    ?>
</body>
</html>