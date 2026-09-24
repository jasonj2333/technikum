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
    ?>
</body>
</html>