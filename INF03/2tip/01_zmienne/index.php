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
        $a = 5; //integer
        $b = 12.5; //float lub double - liczba zmienno przecinkowa
        $imie = 'Tomek';
        echo $b . "<br>";
        echo gettype($b) . "<br>";

        $suma = $a + $b + 156;
        $roznica = $a - $b;
        $iloczyn = $a * 7;
        $iloraz = $b / $a;
        $modulo = 15 % 4; //reszta z dzielenia
        $potega = 5 ** 3; //5 do potęgi 3

        $a += 5; // $a = $a + 5 
        //+= -= *= /= %= **=
        $c = 6;
        $c **= 2;
        echo $c; 
        
        $licznik = 0;
        echo $licznik . "<br>";
        $licznik++; 
        ++$licznik;

        echo $licznik-- . "<br>";
        echo $licznik . "<br>";

        $logiczna = true;
        echo gettype($logiczna) . "<br>";

        $napis = "123";
        $napis = $napis . "456";
        $napis .= "789";
        echo $napis . "<br>";

        //zmienne superglobalne
        var_dump($_GET);
    ?>
    <form action="" method="post">
        <input type="text" name="imie">
        <button>Wyślij</button>
    </form>
</body>
</html>