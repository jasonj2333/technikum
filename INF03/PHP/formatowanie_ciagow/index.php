<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Ciągi</title>
</head>
<body>
    <?php
        //nl2br
        $tekst = <<<TX
        Na cóż czekamy, zebrani na rynku?
        Dziś mają tu przyjść barbarzyńcy.
        Dlaczego taka bezczynność w senacie?
        Senatorowie siedzą-czemuż praw nie uchwalą?
        TX;

        echo $tekst;
        echo '<br><br>';
        echo nl2br($tekst);

        //wordwrap($tekst, 30, "<br>\n", true)
        echo '<br><br>';
        echo wordwrap($tekst);

        $tekst2 = "Potrzebne informacje znajdują się pod adresem: ";
        $tekst2 .= "http://helion.pl/kategorie/podreczniki-szkolne/technik-informatyk";

        echo '<br><br>';
        echo wordwrap($tekst2, 30, "<br>\n", true);

        //strtoupper, strtolower
        echo '<br><br>';
        echo strtoupper($tekst);
        //echo mb_strtoupper($tekst);
        // echo strtolower($tekst);
        // echo mb_strtolower($tekst);
        //echo ucfirst($tekst);
        //echo ucwords($tekst);

        //trim, ltrim, rtrim
        echo '<br><br>';
        $tekst3 = "Informatyka ";
        echo($tekst3 == "Informatyka") ? trim($tekst3) : "błąd";

        //Analizowanie ciągów
        echo '<br><br>';
        $tekst4 = "Senatorowie siedzą-czemuż praw nie uchwalą?";
        echo "Tekst: \"$tekst4\"";
        $dl = strlen($tekst4);
        //$dl = mb_strlen($tekst4);
        echo " ma długość {$dl} znaków.";

        echo '<br><br>';
        echo $tekst4[10];

        //Podciągi
        echo '<br><br>';
        $dane = "Jan Kowalski, ul. Nowa 23, 80-874 Warszawa, tel. 693341678";
        $tel = strstr($dane, "tel. ");
        //echo $tel;
        if ($tel == false) {
            echo "Brak numeru telefonu";
        }else{
            echo "Znaleziono nr telefonu: ".$tel;
        }

        echo '<br><br>';
        echo strpos($dane, "tel. ");

        echo '<br><br>';
        echo substr($dane, 4, 8);
        echo '<br>';
        echo substr($dane, -14, 14);

        echo '<br><br>';
        $znak = ',';
        $ciag = strtok($dane, $znak);
        while(is_string($ciag)){
            if($ciag) echo $ciag . '<br>';
            $ciag = strtok($znak);
        }
    ?>
</body>
</html>