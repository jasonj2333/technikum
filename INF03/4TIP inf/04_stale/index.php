<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Stałe</title>
</head>
<body>
    <?php
        $x = 2.75;
        $x = (string) $x; //rzutowanie - cast
        echo gettype($x);
        echo "<br>";
        echo $x;

        echo "<br>";
        $y = 3.1415;
        settype($y, 'integer');
        echo gettype($y);
        echo "<br>";
        echo $y;

        //stałe
        define("WIEK", 'XXI');
        echo "<p>Mamy wiek ".WIEK."</p>";
        //Stałe predefiniowane
        echo PHP_VERSION;
        echo "<br>";
        echo PHP_OS;
        echo "<br>";
        echo __FILE__;
        echo "<br>";
        echo __DIR__;
        echo "<br>";
        echo __LINE__;

    ?>
</body>
</html>