<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Instrukcja echo</title>
</head>
<body>
    <h1>Instrukcja echo</h1>
    <?php 
        //phpinfo();
        echo "<p>Witaj na mojej stronie</p>";
        echo "Ala ma ", 2, " koty <br>";
        print "<p>Instrukcja wyświetlona jako print</p>";
        
        $imie = "Ania";
        echo "Mam na imię $imie";
        echo '<br>Mam na imię $imie';
        echo '<br> Mam na imię ' . $imie . '!!!';

        $superTajneHaslo = "1234";
    ?>
</body>
</html>