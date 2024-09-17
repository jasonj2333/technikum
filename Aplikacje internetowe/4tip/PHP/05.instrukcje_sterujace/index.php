<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Instrukcja warunkowa</title>
</head>
<body>
    <h1>Instrukcja warunkowa</h1>
    <?php
    $x = 5;
    if($x > 10){
        echo "<p>Warunek 1 prawdziwy</p>";
    }else if($x > 6){
        echo "<p>Warunek 2 prawdziwy</p>";
    }
    else{
        echo "<p>Żaden warunek nieprawdziwy</p>";
    }
    echo "<p>Za if</p>";

    $a = 5;
    $b = 5;
    //Sprawdzić, która z wartości jest większa
    if($a > $b){
        echo "$a jest większe od $b";
    }else if($a == $b){
        echo "$a jest równe $b";
    }else{
        echo "$a jest mniejsze od $b";
    }

    //instrukcja switch
    $kolor = "czerwony";

    switch ($kolor) {
        case 'niebieski':
            echo "<p>Wybrano kolor niebieski - #0000FF</p>";
            break;
        case 'zielony':
            echo "<p>Wybrano kolor zielony - #00FF00</p>";
            break;
        case 'czerwony':
            echo "<p>Wybrano kolor czerwony - #FF0000</p>";
            break;
        default:
            echo "<p>Nie znam takiego koloru</p>";
            break;
    }

    ?>
</body>
</html>