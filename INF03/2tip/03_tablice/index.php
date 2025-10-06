<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Tablice</title>
</head>
<body>
    <h1>Tablice</h1>
    <?php 
        $liczby = array(5, 56, 1, 78, 9);
        $kolory = ["niebieski", "żółty", "czerwony", "biały"];
        echo $liczby[2];
        echo "<br>";
        $n = count($kolory);
        echo $kolory[$n-1];
        echo "<br>";

        $kolory[2] = "fioletowy";
        $kolory[] = "pomarańczowy";

        foreach($kolory as $kolor){
            echo $kolor . "<br>";
        }

        echo "<pre>";
        var_dump($kolory);
        echo "</pre>";

        //Tablica asocjacyjna
        $adres = array(
            "ulica"         => "Szkolna",
            "miejscowosc"   => "Niepołomice",
            "numer"         => 45
        );

        echo "<p>Ulica: ".$adres['ulica']."</p>";
        echo "<p>Miejscowość: ".$adres['miejscowosc']."</p>";
        echo "<p>Numer: ".$adres['numer']."</p>";
        $adres["kod_pocztowy"] = "32-005";
        echo "<pre>";
        var_dump($adres);
        echo "</pre>";

        $dane = [
            array("Jerzy", "Jasonek", "nauczyciel", $adres),
            array("Kamil", "Pecka", "uczeń"),
            array("Kamil", "Ptak", "uczen")
        ];
        echo $dane[1][0]." ".$dane[1][1]."<br>";
        echo $dane[2][0]." ".$dane[2][1]."<br>";
        echo $dane[0][1]."<br>";
        echo $dane[0][3]['miejscowosc']."<br>";
    ?>
</body>
</html>