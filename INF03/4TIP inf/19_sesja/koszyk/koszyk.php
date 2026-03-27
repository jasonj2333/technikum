<?php session_start() ?>
<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Koszyk</title>
</head>
<body>
    <h1>Zawartość koszyka</h1>
    <?php 
        if(isset($_SESSION['koszyk'])){
            var_dump(unserialize($_SESSION['koszyk']));
            echo '<ul>';
            foreach(unserialize($_SESSION['koszyk']) as $produkt){
                echo "<li>$produkt</li>";
            }
            echo '</ul>';
        }else{
            echo "<p>Brak produktów w koszyku</p>";
        }
    ?>
    <p><a href="index.php">Przejdź do listy produktów</a></p>
</body>
</html>