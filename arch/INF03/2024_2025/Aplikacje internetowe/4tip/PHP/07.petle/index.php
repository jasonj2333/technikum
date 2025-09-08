<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Pętle</title>
</head>
<body>
    <h1>Pętle</h1>
    <h2>for - instrukcja iteracyjna</h2>
    <?php 
        for ($i=0; $i < 10; $i++) { 
            echo "<p>Powtórzenie nr: " . $i . "</p>";
        }
    ?>

    <h2>while</h2>
    <?php 
        $ocena  = 4;
        while ($ocena <= 10) {
            echo "<p>Musisz poprawić ocenę</p>";
            $ocena++;
        }
    ?>

    <h2>do.. while</h2>
    <?php 
        $dzien = 0;
        do {
            echo "<br>Dzień: ".$dzien;
            $dzien++;
        }while($dzien < 2);
    ?>

    <h2>foreach</h2>
    <?php 
        $dniTygodnia = ["poniedziałek", "wtorek", "środa", "czwartek", "piątek", "sobota", "niedziela"];

        for ($i=0; $i <= 6; $i++) { 
            echo $dniTygodnia[$i] . "<br>";
        }

        foreach($dniTygodnia as $dzien){
            echo $dzien . "<br>";
        }
        echo "<hr>";

        foreach($dniTygodnia as $index => $dzien){
            echo $index . " - " . $dzien . "<br>";
        }

        echo "<hr>";
        $kolory = [
            '#000000' => 'black',
            '#FFFFFF' => 'white',
            '#FF0000' => 'red',
            '#00FF00' => 'green',
            '#0000FF' => 'blue',
            '#FF00FF' => 'magenta',
        ];
        foreach($kolory as $hex => $colorName){
            if($hex == "#FF0000") continue;
            if($colorName == "blue") break;

            echo $hex . " - " . $colorName . "<br>";
        }

        echo "<p>Coś tam się dalej dzieje</p>";
    ?>
</body>
</html>