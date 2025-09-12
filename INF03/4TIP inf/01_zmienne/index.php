<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Zmienne</title>
</head>
<body>
    <?php
        $a = 5; //Typ integer - liczba całkowita
        $b = 12.5; //float lub double - liczba zmiennoprzecinkowa (rzeczywista)
        $imie = 'Tomek'; //string - napis

        echo $a;
        echo '<br>';
        echo $b;
        echo '<br>';
        echo $imie;
        echo '<br>';

        //Zmienne liczbowe
        $suma = $a + $b;
        //Suma liczb a=5 i b=12.5 wynosi 17.5
        echo "Suma liczb a=$a i b=$b wynosi $suma <br>";
        echo 'Suma liczb a='.$a.' i b='.$b.' wynosi '.$suma;
        echo '<br>';
        $roznica = 156 - $a;
        $iloczyn = 5 * 9;
        $iloraz = 45 / 6;
        $modulo = 15 % 4; //reszta z dzielenia - 3
        $potega = 5 ** 3; //5 do potęgi 3

        $licznik = 0;
        echo $licznik . "<br>";
        //$licznik = $licznik + 1;
        $licznik++; //zwiększ licznik o 1 (operator postinkrementacji)
        $licznik++;
        echo ++$licznik . "<br>"; //preinkrementacja
        echo $licznik . "<br>";
        $licznik--; //postdekrementacja
        --$licznik; //predekrementacja

        echo gettype($a);
        echo "<br>";
        echo gettype($b);
        echo "<br>";
        echo gettype($imie);
        echo "<br>";
        $logiczna = true;
        echo gettype($logiczna);
        //Tablica
        $klasa4tip = ["Oskar", "Jan", "Dawid", "Kacper"];
        echo "<br>";
        echo gettype($klasa4tip);
        echo "<br>";
        echo $klasa4tip[1];
        
        //Zmienne superglobalne
        echo "<br>";
        var_dump($_GET);

        echo "<br>";
        var_dump($_POST);

        echo "<br>";
        var_dump($_COOKIE);

        echo "<br>";
        var_dump($_FILES);

        echo "<br>";
        var_dump($_ENV);

        echo "<br>";
        var_dump($_REQUEST);

        echo "<br>";
        var_dump($_SERVER);
    ?>
</body>
</html>