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
        //operatory matematyczne
        //+ - * / % **
        $a = 21;
        $b = 8;
        echo $a + $b . "<br>";
        echo $a - $b . "<br>";
        echo $a * $b . "<br>";
        echo $a / $b . "<br>";
        echo $a % $b . "<br>"; //reszta z dzielenia
        echo $a ** 3 . "<br>"; //potęgowanie

        echo $b ** (1/3) ."<br>"; //Odpowiednik pierwiastkowania
        echo (int) ($a / $b); //Odpowiednik dzielenia całkowitego

        //Operatory porównania i logiczne
        echo "<br>";
        var_dump($a == $b); //Porównanie wartości
        var_dump(5 == '5');
        echo "<br>";
        var_dump(5 === '5'); //Porównanie typów i wartości
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
        var_dump($a > $b && $a > 25); //(i) koniukcja logiczna
        var_dump($a > $b || $a > 25); //(lub) alternatywa logiczna

        echo"<br>";
        $a = $a + 5;
        $a += 5;
        $a -= 5;
        $a *= 5;
        $a /= 5;
        $a %= 5;
        $a++; //postinkrementacja
        ++$a; //preinkrementacja
        $a--; //postdekrementacja
        --$a; //predekremetacja
        echo "Moja liczba to " .++$a;

        echo"<br>";
        var_dump($a);
    ?>
</body>
</html>