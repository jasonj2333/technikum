<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Funkcje ćwiczenia</title>
</head>
<body>
    <h1>Funkcje ćwiczenia</h1>
    <?php 
        function silnia($n){
            $wynik = 1;
            for($i = 1; $i <= $n; $i++){
                $wynik = $wynik * $i;
            }
            return $wynik;
        }

        echo silnia(5) . "<br>";
        echo silnia(7) . "<br>";

        function srednia($a, $b, $c) {
            return ($a + $b + $c) / 3;
        }

        echo srednia(5, 8, 10) . "<br>";

        $oceny = [5, 3, 2, 1, 1, 4, 6, 2, 1];

        function srednia2($liczby){
            $wynik = 0;
            foreach($liczby as $liczba){
                $wynik += $liczba;
            }
            return $wynik / count($liczby);
        }

        echo srednia2($oceny) . "<br>";
        echo srednia2([5, 8, 10]) . "<br>";

        function wieksza($a, $b){
            // if($a > $b) return $a;
            // else return $b;

            return $a > $b ? $a : $b;
        }

        echo wieksza(5, 7) . "<br>";
        echo wieksza(8, 4) . "<br>";
        echo wieksza(5, 5) . "<br>";

        $temperatury = [16, 12, 34, 7, 11, -4, 6, 9, 23, 19];

        function najwieksza($liczby){
            $maks = $liczby[0];
            foreach ($liczby as $liczba) {
                if($liczba > $maks) $maks = $liczba;
            }
            return $maks;
        }

        function najmniejsza($liczby){
            $min = $liczby[0];
            foreach ($liczby as $liczba) {
                if($liczba < $min) $min = $liczba;
            }
            return $min;
        }

        echo najwieksza($temperatury) . "<br>";
        echo najwieksza([5, 12, 3, 6, 1, 67]) . "<br>";
        echo najmniejsza($temperatury) . "<br>";
        //Wbudowane funkcje mininum i maksimum
        echo min($temperatury) . "<br>";
        echo max($temperatury) . "<br>";
    ?>
</body>
</html>