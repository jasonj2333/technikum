<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Pętle</title>
</head>
<body>
    <h1>Pętle</h1>
    <?php
        // for($i = 1; $i <= 10; $i++){
        //     echo "Pętla wykonana $i raz/y<br>";
        // }

        $licznik = 12;
        for(;$licznik < 25; $licznik+=2){
            echo "Wartość licznika: $licznik<br>";
            //$licznik+=2;
        }

        while($licznik < 40){
            echo "Wartość licznika: $licznik<br>";
            $licznik++;
        }

        do{
            echo "Wartość licznika: $licznik<br>";
            $licznik+=3;
        }while($licznik < 30);

        $kolory = ["red", "green", "blue", "white", "black"];

        foreach($kolory as $kolor){
            echo $kolor."<br>";
        }

        $uczen = array(
            "imie" => "Tomek",
            "nazwisko" => "Atomek",
            "wiek" => 17
        );

        foreach($uczen as $klucz=>$wartosc){
            echo $klucz.": ".$wartosc."<br>";
        }

        for($i=0; $i<10; $i++){
            if($i % 3 == 0) continue;
            echo $i . "<br>";
            if($i == 7) break;
        }
    ?>
</body>
</html>