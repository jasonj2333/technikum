<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Zmienne i rzutowanie</title>
</head>
<body>
    <h1>Zmienne i rzutowanie</h1>
    <?php 
        $imie = "Tomek"; //string
        $Imie = "Ania";
        echo "<p>Zapamiętałem imiona $imie i $Imie</p>";
        $wiek = 15; //int
        $ocena = 4.5; //float lub double
        $zdalDoNastepnejKlasy = false;

        echo "<p>Uczen: $imie, wiek: $wiek, średnia ocen: $ocena, zdał do następnej klas: $zdalDoNastepnejKlasy</p>";

        echo gettype($ocena); //Zwraca typ zmiennej
        echo "<br>";
        var_dump($ocena); //zrzut zmiennej - wypisuje zarówno typ jak i wartość


        //Rzutowanie - czyli zamiana typów
        $tekst = "12abc";
        $liczba = (int) $tekst;
        echo "<p>Miałem tekst: $tekst i wykonałem rzutowanie na int - efekt $liczba </p>";

        $liczbaUzytkownika = 10.5;
        $naszaLiczba = (int) $liczbaUzytkownika;
        echo "<p>Nasza liczba: $naszaLiczba</p>";

        $zdal  = (bool) 0;
        var_dump($zdal);
    ?>
</body>
</html>