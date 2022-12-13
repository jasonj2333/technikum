<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <?php 
        touch('plik.txt');
        //echo filesize('plik.txt');
        //unlink('plik.txt');

        //$plik = fopen('plik.txt', 'r');
        //$plik = fopen('plik.txt', 'w'); //do zapisu
        $plik = fopen('plik.txt', 'a'); //dopisywanie
        //echo $plik;

        $text = "Barbarzyńcy, gdy przyjdą ustanowią prawa.\n";
        fwrite($plik, $text);

        // while (!feof($plik)) {
        //     $znak = fgets($plik, 100);
        //     echo $znak;
        // }

        fclose($plik);

    ?>
</body>
</html>