<?php 
    if(!isset($_COOKIE['odwiedziny'])){
        $licznik = 1;
    }else{
        $licznik = intval($_COOKIE['odwiedziny']) + 1;
    }
    setcookie("odwiedziny", $licznik, time() + 60*60*24*365);
?>

<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Licznik odwiedzin</title>
</head>
<body>
    <?php 
        echo "<p>W ciągu ostatniego roku odwiedziłeś nas $licznik razy</p>";
    ?>
</body>
</html>