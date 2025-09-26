<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Ćwiczenia</title>
</head>
<body>
    <h2>Ćwiczenie 1</h2>
    <?php
        $a = 11;
        $b = 17;
        $c = 17;
        //Wyznacza największą z 3 liczb
        if($a >= $b && $a >= $c){
            echo $a;
        }elseif($b >= $a && $b >= $c){
            echo $b;
        }else{
            echo $c;
        }
        echo "<br>";
        $liczby = [14, 4, 6, 7, 123, 67, 1, 78, 13, 6];

        foreach($liczby as $l){
            echo $l . "<br>";
        }

        $n = count($liczby);
        $max = $liczby[0];
        for($i = 1; $i < $n; $i++){
            //echo $liczby[$i] . "<br>";
            if($liczby[$i] > $max) {
                $max = $liczby[$i];
            }
        }
        echo "<p>Największy element zbioru to: $max</p>";

        //Miesiące od 1 do 12;
        //Dla miesięcy 12, 1, 2 wypisze jest zima
        //Dla miesięcy 3,4,5 wypisze jest wiosna
        //Dla miesięcy 6,7,8 wypisze jest lato
        //Dla miesięcy 9, 10, 11 jest jesień
        //Komunikat nie znam takiego miesiąca
        $miesiac = 9;
        switch ($miesiac) {
            case 12:
            case 1:
            case 2:
                echo "<p>Jest zima</p>";
                break;
            case 3:
            case 4:
            case 5:
                echo "<p>Jest wiosna</p>";
                break;
            case 6:
            case 7:
            case 8:
                echo "<p>Jest lato</p>";
                break;
            case 9:
            case 10:
            case 11:
                echo "<p>Jest jesień</p>";
                break;
            default:
                echo "<p>Nie ma takiego miesiąca</p>";
                break;
        }
    ?>
</body>
</html>