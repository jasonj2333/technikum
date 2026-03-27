<?php 
    session_start();
?>
<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Licznik</title>
</head>
<body>
    <?php 
        if(!isset($_SESSION['licznik'])){
            $_SESSION['licznik'] = 0;
        }
        $_SESSION['licznik']++;
        echo "<p>Odwiedziłeś: ".$_SESSION['licznik']." naszą stronę</p>";
    ?>
</body>
</html>