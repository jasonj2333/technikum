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

        //Dzisiaj mamy czwartek - 6 listopada
        // l - dzień tygodnia pełny np. Monday
        // D - dzień tygodnia skrócony np. Mon
        // w - 0 Sunday, 6 Saturday
        // N - dni tygodnia 1 - Monday
        // F - pełna nazwa
        // n - miesiąc od 1 do 12
        // https://www.w3schools.com/php/func_date_date.asp

        $tydzien = ["niedziela", "poniedziałek", "wtorek", "środa", "czwartek", "piątek", "sobota"];

        $miesiac = ["", "stycznia", "lutego", "marca", "kwietnia", "maja", "czerwca", "lipca", "sierpnia", "września", "października", "listopada", "grudnia"];

        $dzien_tygodnia = $tydzien[date('w')];
        $dzien_miesiaca = date('j');
        $b_miesiac = $miesiac[date('n')];
        echo "Dzisiaj mamy $dzien_tygodnia - $dzien_miesiaca $b_miesiac";
    ?>
</body>
</html>