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
        echo $liczby[3];
        echo "<br>";

        $kolory = ["niebieski", "żołty", "zielony", "biały"];
        echo $kolory[2];
        echo "<br>";
        
        $kolory[2] = "green";
        echo $kolory[2];
        echo "<br>";
        $kolory[] = "pomarańczowy";
        //var_dump($kolory);

        //Tablica asocjacyjna
        $adres = array(
            "ulica"         => "Szkolna",
            "miejscowosc"   => "Niepołomice",
            "numer"         => 45
        );

        echo "<p>Ulica ".$adres['ulica']."</p>";
        echo "<p>Miejscowość ".$adres['miejscowosc']."</p>";
        echo "<p>Numer domu ".$adres['numer']."</p>";
        $adres['nr_mieszkania'] = '65a';
        var_dump($adres);

        $dane = [
            array("Jerzy", "Jasonek", "Nauczyciel"),
            array("Dawid", "Koss", "Uczeń")
        ];

        echo $dane[0][1];
        echo $dane[1][2];
    ?>
</body>
</html>