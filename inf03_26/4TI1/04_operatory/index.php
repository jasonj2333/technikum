<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Operatory</title>
</head>
<body>
    <h1>Operatory</h1>
    <?php 
        //Operatory matematyczne: + - * / % **
        $a = 21;
        $b = 8;

        echo $a + $b . "<br>";
        echo $a - $b . "<br>";
        echo $a * $b . "<br>";
        echo $a / $b . "<br>";
        echo $a % $b . "<br>"; //reszta z dzielenia
        echo $a ** $b . "<br>"; //potęgowanie

        echo (int)($a / $b) . "<br>"; //dzielenie całkowite

        //Opetory porównania i logiczne
        var_dump($a == $b); 
        echo "<br>";
        var_dump(5 == '5'); //porównanie wartości
        echo "<br>";
        var_dump(5 === '5'); //porównanie typów i wartości
        echo "<br>";
        var_dump(!true); //negacja
        echo "<br>";
        var_dump($a != $b); //różne
        echo "<br>";
        var_dump($a > $b);
        var_dump($a < $b);
        var_dump($a >= $b);
        var_dump($a <= $b);
        echo "<br>";
        var_dump($a > $b && $a > 25); //koniunkcja logiczna (i)
        var_dump($a > $b || $a > 25); //alternatywa logiczna (lub)

        echo "<br>";
        $a = $a + 5;
        $a += 5;
        $a *= 3;
        $a /= 7;
        $a %= 5;
        $a++; //postinkrementacja
        $a--; //postdekrementacja
        ++$a; //preinkrementacja
        echo "<p>Moje zmienna a ma wartość: ". $a++ ."</p>";
        echo "<p>Moje zmienna a ma wartość: ". ++$a ."</p>";

        var_dump($a);

    ?>
</body>
</html>