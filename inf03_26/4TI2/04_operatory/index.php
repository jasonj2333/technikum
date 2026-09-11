<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Operatory</title>
</head>
<body>
    <h1>Operatory</h1>
    <?php 
    //Operatory matematyczne
    // + - * / % **
    $a = 7;
    $b = 12;
    echo $a + $b . "<br>";
    echo $a - $b . "<br>";
    echo $a * $b . "<br>";
    echo $a / $b . "<br>";
    echo $b % $a . "<br>"; //reszta z dzielenia
    echo $a ** 3 . "<br>";

    //$a = $a + 5;
    $a += 5;
    $a *= 2;
    $a %= 5;
    $a++; //postinkrementacja
    $a--; //postdekrementacja
    --$a; //predekrementacja - 3
    echo "Moje zmienna a ma wartość: " . $a++ . "<br>";
    echo "Moje zmienna a ma wartość: " . ++$a . "<br>";

    var_dump($a);

    //Operatory porównania i logiczne
    echo "<br>";
    var_dump(5 == '5'); //porównanie wartości
    echo "<br>";
    var_dump(5 === '5'); //porównanie wartości i typów
    echo "<br>";
    var_dump(5 != 8); //nierówność
    echo "<br>";
    var_dump(!true); //negacja logiczna
    echo "<br>";
    var_dump($a != $b && $a > 12); //koniunkcja logiczna (i)
    echo "<br>";
    var_dump($a != $b || $a > 12); //alternatywa logiczna (lub)


    ?>
</body>
</html>