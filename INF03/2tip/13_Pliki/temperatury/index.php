<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Stacja pogodowa</title>
</head>
<body>
    <?php 
        $stacja1 = [];
        $stacja2 = [];
        $stacja3 = [];

        $plik = file("temperatury.txt");
        foreach($plik as $linia){
            $dane = explode(" ", trim($linia));
            $stacja1[] = $dane[0]; 
            $stacja2[] = $dane[1]; 
            $stacja3[] = $dane[2]; 
        }
    ?>
    <h1>Stacja pogodowa</h1>
    <h2>Stacja 1</h2>
    <?php 
        foreach($stacja1 as $dzien => $temp){
            $dzien++;
            echo "<p>$dzien. $temp</p>";
        }
        $srednia1 = round(array_sum($stacja1) / count($stacja1), 2);
        echo "<h4>Średnia temperatura wynosi: $srednia1</h4>";
    ?>
    <h2>Stacja 2</h2>
    <?php 
        $srednia2 = round(array_sum($stacja2) / count($stacja2), 2);
        echo "<h4>Średnia temperatura wynosi: $srednia2</h4>";
    ?>
    <h2>Stacja 3</h2>
    <?php 
        $srednia3 = round(array_sum($stacja3) / count($stacja3), 2);
        echo "<h4>Średnia temperatura wynosi: $srednia3</h4>";
    ?>
</body>
</html>