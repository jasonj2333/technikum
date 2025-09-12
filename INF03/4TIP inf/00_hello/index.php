<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Pierwszy program w PHP</title>
</head>
<body>
    <h1>Moja pierwsza strona ze skryptem PHP</h1>
    <?php 
        $super_tajne_haslo = 'moje&haslo';
        echo "<p>Witaj świecie</p>"; //Instrukcja echo
        echo '<h2>123</h2>';
        echo '<hr>';
        echo 'Dzisiaj piątek';
        echo '<br>';
        //echo $super_tajne_haslo;
    ?>
    <h2>Moje super tajne hasło to: <?php echo $super_tajne_haslo; ?></h2>
</body>
</html>