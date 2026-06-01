<?php 
    session_start();
?>
<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Mechanizm sesji</title>
</head>
<body>
    <?php 
        echo "<p>Indetyfikator sesji: ".session_id()."</p>";
        if(!isset($_SESSION['licznik'])){
            $_SESSION['licznik'] = 0;
        }
        $_SESSION['licznik']++;
        echo "<p>Odwiedziłeś nas po raz: ".$_SESSION['licznik']."</p>";
        //kończy sesje
        //session_destroy();
    ?>
</body>
</html>