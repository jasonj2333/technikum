<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Obsługa plików</title>
</head>
<body>
    <?php
        // touch('plik.txt');
        // echo file_exists('plik.txt') . "<br>";
        
        if( !file_exists('plik.txt') ){
            touch('plik.txt');
        }

        echo filesize("plik.txt") . "<br>";

        $plik = fopen("tekst.txt", "w"); //tryb zapisu
        fwrite($plik, "Dzisiaj uczmy się obsługi plików\n");
        fwrite($plik, "W różnych trybach");
        fclose($plik);

        $plik2 = fopen("tekst.txt", "r"); //tryb odczytu - plik musi istnieć
        while(!feof($plik2)){
            $linia = fgets($plik2); //odczyt pliku linia po linii
            echo $linia . "<br>";
        }
        fclose($plik2);

        $plik3 = fopen("tekst.txt", "r");
        while(!feof($plik3)){
            $znak = fgetc($plik3); //odczyt znak po znaku
            echo $znak . " - ";
        }
        fclose($plik3);

        echo "<br>";

        $tekst = file_get_contents("tekst.txt"); //zrzut pliku do zmiennej tekstowej
        echo nl2br($tekst); //zamienia znaki końca linii \n na <br>

        echo "<br>";

        if( $tekst2 = file("tekst.txt") ){ //zrzut do tablicy
            //var_dump($tekst2);
            foreach($tekst2 as $linia){
                echo $linia . "<br>";
            }
        } else{
            echo "Nie można odczytać pliku <br>";
        }
        
    ?>
</body>
</html>
