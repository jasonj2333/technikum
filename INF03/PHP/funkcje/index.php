<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Dni tygodnia</title>
</head>
<body>
    <?php 
        function dzienTygodnia($nr){
            $start = 5;
            if($nr < 1 || $nr > 30) return "Błędne dane!";
            $d = ($nr + $start) % 7;
            //echo $d;
            $tydzien = ["poniedziałek", "wtorek", "środa", "czwartek", "piątek", "Sobota", "Niedziela"];

            return $tydzien[$d-1];
        }
        echo dzienTygodnia(28);
        echo "<br>";
        echo date('w');
    ?>
</body>
</html>