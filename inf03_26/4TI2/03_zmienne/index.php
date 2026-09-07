<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Zmienne</title>
</head>
<body>
    <h1>Zmienne</h1>
    <?php 
        $zmienna = 123; //integer
        $Zmienna = 'Ania'; //string
        $bok = 14.5; //float lub double - liczba zmienno przecinkowa
        
        
        echo $bok;
        echo "<br>";
        echo $Zmienna . "<br>";
        echo $zmienna;

        echo gettype($bok); // sprawdzenie jakiego typu jest zmienna
        echo "<br>";
        echo gettype($Zmienna);
        echo "<br>";
        var_dump($bok); //Ważna funkcja do diagnotyki i debagowania
        echo "<br>";

        $logiczna = true;
        $logiczna2 = false;
        echo $logiczna;
        echo "<br>";
        var_dump($logiczna2);
    ?>
</body>
</html>