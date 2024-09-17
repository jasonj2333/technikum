<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Ćwiczenie 1</title>
</head>
<body>
    <?php 
    $a = 7;
    $b = 12;
    $c = 'Tomek';

    echo "<p>Mam na imię $c, mam $b lat i chodzę do klasy $a</p>";
    echo "<p>Mam na imię ".$c.", mam ".$b." lat i chodzę do klasy ".$a."</p>";
    $a++;
    $b++;
    echo $b % $a;
    
    ?>
</body>
</html>