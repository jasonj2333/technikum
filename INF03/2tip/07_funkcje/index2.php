<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Ćwiczenia</title>
</head>
<body>
    <?php 
        // Utwórz funkcje poleProstokata z parametrami a, b typu float.
        // Funkcja ma zwraca wynik typu float będący polem prostokąta o bokach a i b;
        function poleProstokata(float $a, float $b) : float {
            if($a <= 0 || $b <= 0){
                throw new InvalidArgumentException("Boki muszą być większe od 0");
            }
            return $a * $b;
        }
        
        try{
            echo poleProstokata(5.4, 6) . "<br>";
            echo poleProstokata(5.4, -6) . "<br>";
            echo poleProstokata(5.4, 12) . "<br>";
        }
        catch(InvalidArgumentException $e){
            echo $e->getMessage();
        }
        
        // Napisz funkcje parzysta, która ma jeden parametr liczba typu int.
        // Zwraca true lub false (typ bool) w zależności od tego czy liczba jest parzysta czy nie

        function parzysta(int $liczba) : bool {
            // if($liczba % 2 == 0) return true;
            // return false;
            return $liczba % 2 == 0;
        }
        echo "<hr>";
        echo parzysta(6) . "<br>";
        echo parzysta(7) . "<br>";

        echo parzysta(7) ? "parzysta" : "nieparzysta";
        echo "<br>";
        echo parzysta(8) ? "parzysta" : "nieparzysta";

        //Zadanie
        //Napisz funkcje, która zwraca średnią podanych do funkcji jako tablica
        function srednia(array $liczby) : float{}

        $liczby = [5,6,12,8,11,9,12];
    ?>
</body>
</html>