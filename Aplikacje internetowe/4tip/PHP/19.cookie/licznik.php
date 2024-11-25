<?php

if(isset($_COOKIE['licznik'])){
    $wartosc = intval($_COOKIE['licznik']) + 1;
}else{
    $wartosc = 1;
}
setcookie("licznik", $wartosc, time()+3600*24*365);
?>

<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Moja strona</title>
</head>
<body>
    <h1>Serwis komputerowy</h1>
    <p>W ciągu ostatniego roku odwiedziłeś nas <?php echo $wartosc; ?> razy</p>
</body>
</html>