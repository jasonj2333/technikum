<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Tablica</title>
</head>
<body>
    <h1>Tablice</h1>
    <?php 
        //Tablice indeksowane
        $pusta = [];
        $tablica = array();
        var_dump($tablica);
        echo "<br>";
        $kolory = ["czerwony", "żółty", "niebieski"];
        var_dump($kolory);
        echo "<br>";
        echo $kolory[2];
        echo "<br>";
        $kolory[] = "zielony";
        var_dump($kolory);
        $ile = count($kolory);
        echo "<br>" . $ile;
        echo "<br>" . $kolory[$ile - 1];

        echo "<br>";
        var_dump(isset($kolory[3]));
        var_dump(array_key_exists(12, $kolory));
        echo "<br>";
        unset($kolory[1]);
        var_dump($kolory);

        $oceny = [1, 4, 5, 2, 3, 6, 2, 4, 5, 3];
        echo "<h3>Oceny z języka polskiego</h3>";
        echo "<ul>";
            for($i = 0; $i < count($oceny); $i++){
                echo "<li> $oceny[$i] </li>";
            }
        echo "</ul>";

        $suma = 0;
        foreach($oceny as $ocena){
            $suma += $ocena;
        }
        echo "<p>Średnia ocen wynosi: ". $suma/count($oceny) ."</p>";

        foreach($kolory as $indeks => $kolor){
            echo "<p>$indeks. $kolor</p>";
        }

        //Tablice asocjacyjne
        $uczen = [
            "imie" => "Tomek",
            "nazwisko" => "Atomek",
            "klasa" => "4TI",
            "punkty" => 86
        ];

        echo $uczen["imie"] . "<br>";
        $uczen["punkty"] = 90;

        foreach($uczen as $klucz => $wartosc){
            echo "<p>$klucz: $wartosc</p>";
        }

        $uczen["uwagi"] = [
            "Przeszkadza na lekcji",
            "Korzysta z telefonu i nie pisze kodu PHP",
            "Je ciastka na lekcji"
        ];
        echo "<pre>";
        var_dump($uczen);
        echo "</pre>";

        echo $uczen["uwagi"][1];
        //var_dump(gettype($uczen['uwagi']));

        echo "<ul>";
        foreach($uczen as $klucz => $wartosc){
            if(gettype($uczen[$klucz]) == "array"){
                echo "<li> $klucz";
                    echo "<ul>";
                    foreach($uczen[$klucz] as $uwaga){
                        echo "<li>$uwaga</li>";
                    }
                    echo "</ul>";
                echo "</li>";
            }else echo "<li>$klucz: $wartosc</li>";
        }
        echo "</ul>";

        $produkty = [
            ['nazwa' => "Zeszyt", 'cena' => 2.50],
            ['nazwa' => "Długopis", 'cena' => 5.25],
            ['nazwa' => "Linijka", 'cena' => 3],
            ['nazwa' => "Piórnik", 'cena' => 35],
        ];

        echo $produkty[1]['nazwa'] . " - " . $produkty[1]['cena'] . " zł";

        echo"<table>";
        echo "<tr><th>Nazwa produktu</th><th>Cena</th></tr>";
        foreach($produkty as $produkt){
            echo "<tr>";
            echo "<td> {$produkt['nazwa']} </td>";
            echo "<td> {$produkt['cena']} </td>";
            echo "</tr>";
        }
        echo"</table>";
    ?>
</body>
</html>