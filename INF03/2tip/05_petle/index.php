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
        for($i = 1; $i <= 10; $i++){
            echo "Pętla wykonana $i raz <br>";
        } 

        $licznik = 12;
        for(;$licznik < 25; $licznik+=2){
            echo "Wartość licznika: $licznik <br>";
        }

        $licznik = 40;
        // for(;$licznik <= 50;){
        //     echo "Wartość licznika: $licznik <br>";
        //     $licznik++;
        // }
        while($licznik <=50){
            echo "Wartość licznika: $licznik <br>";
            $licznik++;
        }

        for(;;){
            echo "Wartość licznika: $licznik <br>";
            $licznik+=3;
            if($licznik >= 100) break;
        }

        do{
            echo "Licznik: $licznik <br>";
        }while($licznik < 30);

        $kolory = ["red", "green", "blue", "white", "black"];
        $n = count($kolory);
        for($i=0; $i<$n; $i++){
            echo "Kolor: $kolory[$i], ";
        }
        echo "<br>";

        foreach($kolory as $kolor){
            echo "Kolor: $kolor <br> ";
        }

        $uczen = [
            "imie" => "Tomek",
            "nazwisko" => "Atomek",
            "wiek" => 17
        ];

        foreach($uczen as $klucz => $wartosc){
            echo "$klucz: $wartosc <br>";
        }

        $liczby = [5, 7, 1, 8, 9, 0, 4];
        #Policz średnią z tych liczb - 4.85
        $suma = 0;
        $n = count($liczby);
        foreach($liczby as $liczba){
            $suma += $liczba;
        }
        echo "Średnia wynosi ". $suma/$n . "<br>";
    ?>
</body>
</html>