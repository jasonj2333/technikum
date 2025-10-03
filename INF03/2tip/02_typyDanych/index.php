<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Typy danych</title>
</head>
<body>
    <h1>Typy danych</h1>
    <?php 
        $liczba = 5;
        echo gettype($liczba) . "<br>";
    ?>
    <h2>Stringi</h2>
    <?php 
        $wyraz = "Technikum nr $liczba";
        $wyraz1 = 'Technikum nr $liczba';
        echo gettype($wyraz) . "<br>";
        echo $wyraz . "<br>";
        echo $wyraz1 . "<br>";

        $tekst = "
            Jest piątek godzina 12
            chcę już iść do domu
            i rozpocząć weekend.
            Zanim pojdę do domu
            odwiedzę Mc'Donalda.
            \"Jakiś cytat\"
        ";

        //heredoc
        $tekst2 = <<<TXT
            Jest piątek godzina 12
            chcę już iść do domu
            i rozpocząć weekend.
            Zanim pojdę do domu
            odwiedzę Mc'Donalda.
            "Jakiś cytat"
            Szkoła: $wyraz
        TXT;

        echo $tekst2;
    ?>
</body>
</html>