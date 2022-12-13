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
        if(!$plik = file('plik.txt')){
            echo "Nie można otworzyć pliku";
        }else{
           //var_dump($plik);
            foreach($plik as $linia){
                echo nl2br($linia);
            }
        }

        

    ?>
</body>
</html>