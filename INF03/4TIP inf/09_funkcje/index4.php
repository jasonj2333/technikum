<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Funkcje daty i czasu</title>
</head>
<body>
    <h1>Funkcje daty i czasu</h1>
    <?php 
        echo time() . "<br>"; //znacznik czasu Unixa
        echo date("Y.m.d a") . "<br>";
        echo date("Y.m.d H:i:s", 0) . "<br>";

        $getData = getdate();
        var_dump($getData);
        $miesiac = $getData['month'];
        echo $miesiac . "<br>";

        //Tworzymy znacznik czasu
        $urodziny = mktime(0, 0, 0, 4, 22, 2007); //godzina minuta, sekunda miesiac dzien rok
        echo $urodziny . "<br>";
        echo date('Y-m-d', $urodziny). "<br>";
        var_dump(getdate($urodziny));
    ?>
</body>
</html>