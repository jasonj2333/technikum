<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Funkcje</title>
</head>
<body>
    <h1>Funkcje</h1>
    <?php 
        //Funkcje wbudowe - przykłady
        echo strlen("Informatyka ") . "<br>";
        echo strtoupper("Informatyka") . "<br>";
        echo max(3, 7, 5);

        //Funkcje definiowane przez użytkownika
        //Definicja funkcji
        function przywitaj(){
            echo "<p>Witaj w technikum</p>";
        }

        //Wywołanie funkcji
        przywitaj();
        przywitaj();
        przywitaj();

        function witaj($imie){
            echo "<p>Witaj $imie</p>";
        }

        witaj("Tomek");
        witaj("Ania");
        
        function poleProstokata($a, $b){
            $pole = $a * $b;
            return $pole;
            //echo $pole; // ten kod się nigdy nie wykona
        }

        echo poleProstokata(5, 7) . "<br>";
        $pokoj1 = poleProstokata(4, 5);
        $pokoj2 = poleProstokata(6, 5);
        $pokoj3 = poleProstokata(2, 3);
        $mieszkanie = $pokoj1 + $pokoj2 + $pokoj3;
        echo "<p>Powierzchnia mieszkania wynosi: $mieszkanie</p>";

        $stawka = 23; // zmienna globalna, nie widoczna wewnątrz funkcji

        function obliczPodatek($cena, $procent = 23){
            return $cena * ($procent/100) . " zł <br>";
        }

        echo obliczPodatek(100, $stawka);
        echo obliczPodatek(100, 8);
        echo obliczPodatek(200);
    ?>
</body>
</html>