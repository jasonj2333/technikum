<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Tablice</title>
</head>
<body>
    <h1>Tablice</h1>
    <h2>Tablica indeksowana</h2>
    <?php
        $pusta = [];
        $tablica = array();
        var_dump($pusta);
        var_dump($tablica);
        $kolory = ["czerwony", "zielony", "niebieski"];
        echo "<br>";
        var_dump($kolory);
        echo "<br>". $kolory[1];
        $kolory[] = "żółty"; //dodanie elementu na końcu
        echo "<br>";
        $ile = count($kolory);
        echo $kolory[$ile-1];
        echo "<br>";
        var_dump(isset($kolory[13]));
        var_dump(array_key_exists(12, $kolory));
        unset($kolory[1]); //usuwana zmienną, wartość z tablicy
        echo "<br>";
        var_dump($kolory);

        $oceny = [1, 4, 5, 1, 2, 3, 3, 5, 1];
        echo "<h3>Oceny z języka polskiego</h3>";
        echo "<ul>";
            for ($i = 0; $i < count($oceny); $i++) { 
                echo "<li>" . $oceny[$i] . "</li>";
            }
        echo "</ul>";

        $suma = 0;
        foreach($oceny as $ocena){
            $suma += $ocena;
        }
        echo "<p>Średnia ocen wynosi: " . $suma /count($oceny) . "</p>";

        foreach($kolory as $indeks => $kolor){
            echo "<p> $indeks. $kolor </p>";
        }
    ?>

    <h2>Tablica asocjacyjna</h2>
    <?php 
        $uczen = [
            "imie" => "Ania",
            "nazwisko" => "Kowalska",
            "klasa" => "2TIP",
            "punkty" => 86
        ];

        echo $uczen["imie"] . "<br>";
        $uczen["punkty"] = 90;
        $uczen["uwagi"] = [
            "Przeszkadza na lekcji",
            "Używa telefonu"
        ];
        echo "<pre>";
        var_dump($uczen);
        echo "</pre>";
        echo "<ul>";
        foreach($uczen as $klucz => $wartosc){
            if(gettype($uczen[$klucz]) == "array"){
                echo "<li>$klucz";
                echo "<ul>";
                foreach($uczen[$klucz] as $wiersz){
                    echo "<li> $wiersz </li>";
                }
                echo "</ul>";
                echo "</li>";
            }else echo "<li>$klucz: $wartosc </li>";
        }
        echo "</ul>";

        $produkty = [
            ["nazwa" => "Zeszyt", "cena" => 4.25],
            ["nazwa" => "Długopis", "cena" => 2.50],
            ["nazwa" => "Linijka", "cena" => 5],
        ];

        echo $produkty[1]["nazwa"] ." - ". $produkty[1]["cena"];

        echo "<table>";
        echo "<tr><th>Nazwa</th><th>Cena</th></tr>";
        foreach($produkty as $produkt){
            echo "<tr>";
            echo "<td>{$produkt['nazwa']}</td>";
            echo "<td>{$produkt['cena']}</td>";
            echo "</tr>";
        }
        echo "</table>";
    ?>
</body>
</html>