<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Operacje na plikach</title>
</head>
<body>
    <?php 
        // touch('plik.txt');
        // echo filesize('plik.txt');
        // echo "<br>";
        //unlink('plik.txt');

        //$plik = fopen('plik.txt', 'w'); //do zapisu
        // $plik = fopen('plik.txt', 'a'); //dopisywanie
        // $text = "Jutro sobota, będzie wolne\n";
        // fwrite($plik, $text);
        // fclose($plik);

        //$plik = fopen('plik1.txt', 'r'); //do odczytu - plik musi istnieć

        if(!$plik = fopen('plik.txt', 'r')){
            echo "Nie można otworzyć pliku";
        }
        else{
                // while(!feof($plik)){
                //     $linia = fgets($plik, 100);
                //     echo $linia ."<br>";
                // }


                // while(!feof($plik)){
                //     $znak = fgetc($plik);
                //     echo $znak;
                // }

                while(!feof($plik)){
                    $blok = fread($plik, 10);
                    echo $blok."<br>";
                }

                fclose($plik);

        }
    ?>    
</body>
</html>