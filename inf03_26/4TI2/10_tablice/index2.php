<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Tablice</title>
</head>
<body>
    <h2>Tablice zagnieżdżone</h2>
    <?php 
    $grupy = [
        "A" => ["Tomek", "Ola", "Wojtek", "Ewa"],
        "B" => ["Konrad", "Zosia"],
        "C" => ["Ania"]
    ];

    echo $grupy["B"][1] . "<br>";

    foreach($grupy as $grupa => $osoby){
        echo "<h3>Grupa $grupa</h3>";
        echo "<ul>";
            foreach($osoby as $osoba){
                echo "<li> $osoba </li>";
            }
        echo "</ul>";
    }
    
    ?>

    <h2>Funkcje tablicowe</h2>
    <?php 
        echo count($grupy) . "<br>";
        $punkty = [72, 99, 5, 13, 56];
        var_dump(in_array(56, $punkty));
        sort($punkty); //sortuje rosnąco ale tablice indeksowane
        rsort($punkty); //kolejność malejąca
        echo "<br>";
        var_dump($punkty);

        $adres = [
            "ulica" => "Szkolna",
            "nr_domu" => 2,
            "kod_pocztowy" => "32-005",
            "miejscowosc" => "Niepołomice"
        ];

        //asort($adres); //sortowanie rosnąco tablic asocjacyjnych po wartościach
        //arsort($adres); //malejąco po wartościach
        //ksort($adres); //sortowanie rosnąco po kluczach
        krsort($adres); //sortowanie malejąco po kluczach
        echo "<br>";
        echo "<pre>";
        var_dump($adres);
        echo "</pre>";

        $csv = "4, 7, 12, 89, 123, 34, 251";
        $liczby = explode(",", $csv);
        var_dump($liczby);

        echo "<br>";
        $imiona = ["Zosia", "Wojtek", "Tomek"];
        echo implode("|", $imiona);

        $netto = [10, 40, 78, 100, 150];
        $brutto = array_map(function($n){
            return $n * 1.23;
        }, $netto);

        echo "<br>";
        var_dump($brutto);

        $parzyste = array_filter($liczby, function($liczba){
            return $liczba % 2 == 0;
        });
        echo "<br>";
        var_dump($parzyste);

        $suma = array_reduce($netto, function($acc, $cena){
            return $acc + $cena;
        });

        echo "<br>" . $suma;
    ?>
</body>
</html>