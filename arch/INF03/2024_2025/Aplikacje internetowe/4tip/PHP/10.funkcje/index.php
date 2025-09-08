<?php include("functions.php"); ?>
<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Funkcje</title>
</head>
<body>
    <h1>Funkcje w programowaniu</h1>
    <!-- Wywołaniu funkcji -->

     <?php witaj("Tomek"); ?>
     <?php witaj("Ala"); ?>
     <?php witaj(); ?>
     <?php 
        $x = 5;
        $y = 7;
        echo "Wynik dodawania $x i $y: ". dodaj($x, $y); 
    ?>
     <?php echo dodaj(6, 4); ?>

</body>
</html>