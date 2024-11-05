<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Temperatury</title>
</head>
<body>
    <?php 
        if(file_exists("temperatura.txt")){
            if($file = fopen("temperatura.txt", "r")){

                while(!feof($file)){ //dopóki nie osiągneliśmy końca pliku
                    $row = fgets($file);
                    //echo "<p>$row</p>";
                    $pomiar = explode(",", $row);
                    //var_dump($pomiar);
                    $suma = 0;
                    $miejscowosc = "";
                    foreach($pomiar as $index => $wartosc){
                        if($index == 0) $miejscowosc = $wartosc;
                        else $suma = $suma + $wartosc;
                    }
                    
                }

                fclose($file);
            }else{
                echo "<p>Nie udało się otworzyć pliku</p>";
            }
        }else{
            echo "<p>Plik nie istnieje!</p>";
        }
    ?>
</body>
</html>