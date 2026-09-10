<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Zmienne</title>
</head>
<body>
    <h1>Zmienne</h1>
    <?php 
        echo"<h2>Typy zmiennych</h2>";
        $tekst = "Typ string"; //typ string
    ?>

    <h3>
        <?= $tekst ?>
    </h3>
    <?php 
        echo $tekst . "<br>";
        $imie = "Tomek"; //string
        $wiek = 15; //integer
        $srednia = 4.5; //float lub double (typy zmiennoprzecinkowe)
        $zdalDoNastepnejKlasy = true; //boolean (logiczne)

        echo "Uczeń: $imie ma $wiek lat, średnia: $srednia, Promocja: $zdalDoNastepnejKlasy <br>";

        echo gettype($srednia) . "<br>";
        var_dump($srednia);
    ?>
    <h2>Rzutowanie - czyli zmiana typów</h2>
    <?php 
        $tekst2 = "12.6abc";
        $naszWiek = (float) $tekst2;
        var_dump($naszWiek);
        $liczbaCalkowita = 14.99;
        $liczbaCalkowita = (int) $liczbaCalkowita;
        var_dump($liczbaCalkowita);
    ?>
</body>
</html>