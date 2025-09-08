<?php 
    if( !isset($_COOKIE['licznik']) ){
        $odw = 1;
        $ostatnia = date("Y-m-d H:i:s");
    }else{
        $odw = intval( $_COOKIE['licznik'] ) + 1; 
        $ostatnia = $_COOKIE['ostatnia'];
    }
    $data = date("Y-m-d H:i:s");
    setcookie("licznik", $odw, time() + 60*60*24*365);
    setcookie("ostatnia", $data, time() + 60*60*24*365);
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
        echo "<p>W ciągu ostatniego roku odwiedziłeś nas $odw razy</p>";
        echo "<p>Ostatnia wizyta:  ".$ostatnia."</p>";
    ?>
</body>
</html>