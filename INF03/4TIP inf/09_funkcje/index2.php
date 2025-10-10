<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Funkcje ćwiczenia</title>
</head>
<body>
    <h1>Suma liczb</h1>
    <!-- Napisz funkcję o nazwie sumaDoN, która:
    Przyjmuje jeden argument – liczbę całkowitą $n.
    Oblicza sumę wszystkich liczb od 1 do $n przy użyciu pętli for.
    Zwraca wynik tej sumy.
    Wywołaj funkcję dla przykładowej liczby (np. 10) i wyświetl wynik. -->

    <?php 
        function sumaDoN($n, $start=1){
            $suma = 0;
            for($i=$start; $i<=$n; $i++){
                $suma += $i; //$suma = $suma + $i;
            }
            return $suma;
        }

        $liczba = 10; 
        $wynik = sumaDoN($liczba);
        echo "<p>Suma liczb od 1 do $liczba wynosi: $wynik</p>";

        $liczba = 25; 
        $wynik = sumaDoN($liczba);
        echo "<p>Suma liczb od 1 do $liczba wynosi: $wynik</p>";

        $start = 25; 
        $koniec = 37;
        $wynik = sumaDoN($koniec, $start);
        echo "<p>Suma liczb od $start do $koniec wynosi: $wynik</p>";
    ?>
</body>
</html>