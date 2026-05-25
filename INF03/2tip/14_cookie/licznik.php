<?php
if(isset($_GET['del'])){
    //unset($_COOKIE['licznik']);
    setcookie("licznik", $_COOKIE['licznik'], time()-1);
    header("Location: licznik.php");
    exit();
}

if(!isset($_COOKIE['licznik'])){
    $licznik = 1;
}else{
    $licznik = $_COOKIE['licznik'] + 1;
}
setcookie("licznik", $licznik, time()+60*60*24*365);
?>

<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Moja strona</title>
</head>
<body>
    <?php 
        echo "<p>W ciągu ostatniego roku odwiedziłeś nas: $licznik razy</p>";
    ?>
    <a href="licznik.php?del=1">Kasuj licznik</a>
</body>
</html>