<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Typy danych</title>
</head>
<body>
    <h1>Typy danych</h1>
    <h2>Liczby całkowite</h2>
    <?php
        $liczba_calkowita = 145; //9, 0654, 0xF67
        echo gettype($liczba_calkowita);
        echo "<br>";
        echo $liczba_calkowita;
    ?>

    <h2>Liczby zmiennopozycyjna - rzeczywista</h2>
    <?php
        $liczba_zm = 5.6; //zmiennopozycyjna (float, double)
        echo gettype($liczba_zm);
        echo "<br>";
        echo $liczba_zm;
    ?>

    <h2>String</h2>
    <?php
        $wyraz = "
            Czwartek 11 lekcja,
            chce już iść do domu
            Wczoraj otwarto Mc'Donalda
            \"To jest cytat\"
            ";
        echo gettype($wyraz);
        echo "<br>";
        echo $wyraz;
        echo "<br>";
        
        //heredoc - newdoc
        $tekst = <<<TXT
            Czwartek 11 lekcja,
            chce już iść do domu
            Wczoraj otwarto Mc'Donalda
            "To jest cytat"
            $liczba_zm
        TXT;
        echo nl2br($tekst);
    ?>
</body>
</html>