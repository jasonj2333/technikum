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
        if(!$plik = fopen('plik.txt', 'r')){
            echo "Nie można otworzyć pliku";
        }else{
            // while (!feof($plik)) {
            // $linia = fgets($plik, 100); //linia po linii
            // echo $linia;
            // }

            // while(($znak = fgetc($plik)) !== false) {//po znaku
            //     echo $znak;
            // }

            while (!feof($plik)) {
                $blok = fread($plik, 32); //blok tekstu
                echo $blok ."<br>";
            }

            fclose($plik);
        }

        

    ?>
</body>
</html>