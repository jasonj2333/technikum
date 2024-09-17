<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <?php
        $a = 6;
        echo 'Lubię jeść w Mc\'Donaldzie $a='.$a;
        $x = "<br>Lubię jeść w Mc'Donaldzie \$a=$a";
        echo $x;

        echo "<br>";
        $kolory = array('czerwony', 'zielony', 'niebieski');
        $kolory2 = ['biały', 'czarny', 'fioletowy'];
        var_dump($kolory2);
        
        echo "<br><br>";
        $samochody[] = 'Fiat 126 p';
        $samochody[] = 'Porshe';
        $samochody[] = 'Skoda';
        var_dump($samochody);

        echo "<br>Lubię jeździć $samochody[2]";

        echo "<br><br>";
        //tablice asocjacyjne
        $uczen = array(
            'imie' => 'Tomek',
            'nazwisko' => 'Atomek',
            'wiek' => 16
        );
        echo"<pre>";
        var_dump($uczen);
        echo"</pre>";
        echo "<br><br>";
        echo $uczen['imie'];
        echo $uczen['wiek'];

        $ksiazka['tytul'] = "Pan Tadeusz";
        $ksiazka['autor'] = "Adam Mickiewicz";
        $ksiazka['ISBN'] = "123123214";

        $ksiazka2['tytul'] = "Pan Samochodzik i Templariusze";
        $ksiazka2['autor'] = "Zbigniew Nienacki";
        $ksiazka2['ISBN'] = "2324324";

        $ksiazka3['tytul'] = "Biblia PHP";
        $ksiazka3['autor'] = "Autor";
        $ksiazka3['ISBN'] = "7676575";
        
        $biblioteka = [$ksiazka, $ksiazka2, $ksiazka3];
        echo "<pre>";
        var_dump($biblioteka);
        echo "</pre>";
        echo "<br>";
        echo $biblioteka[1]['tytul'];
    ?>
</body>
</html>