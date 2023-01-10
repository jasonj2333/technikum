<?php 
    if(!isset($_COOKIE['licznik'])){
        $odw = 1;
    }else{
        $odw = intval($_COOKIE['licznik']) + 1;
    }
    setcookie("licznik", $odw, time()+60*60*24*365);
?>
<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Licznik odwiedzin</title>
</head>
<body>
    <?php 
        echo "<p>W ciągu ostatnie roku odwiedziłeś nas $odw razy</p>";
    ?>
</body>
</html>