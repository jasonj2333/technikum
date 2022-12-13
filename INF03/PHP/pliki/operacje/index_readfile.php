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
        // if(!$plik = readfile('plik.txt')){
        //     echo "Nie można otworzyć pliku";
        // }else{
        //     echo $plik;

        // }

        if(!$plik = file_get_contents('plik.txt')){
            echo "Nie można otworzyć pliku";
        }else{
            echo $plik;

        }

        

    ?>
</body>
</html>