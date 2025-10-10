<?php
//definicja funkcji
    function dzienTygodnia($nr){
        $dzien = $nr;
        $tydzien = ["poniedziałek", "wtorek", "środa", "czwartek", "piątek", "sobota", "niedziela"];
        //echo $tydzien[$dzien-1];
        return $tydzien[$dzien-1];
        //echo "coś tam dalej"; //return kończy funkcje, to się nie wyświetli
    }

    function suma($a=4, $b=4){
        return $a + $b;
    }

    function czesc($imie="Gall Anonim"){
        echo "Cześć $imie";
    }

    $zmienna = 1; //zasięgu globalnym

    function pokaz(){
        //$zmienna = 3; //zmienna lokalna
        global $zmienna;
        echo "Wartość zmiennej zmienna wynosi $zmienna";
    }

    function text(){
        $text = "Zmienna lokalna - wewnątrz funkcji";
        return $text;
    }

    //echo "Zmienna z funkcji: $text"; //lokalna - niedostępna poza funkcją
    echo "Zmienna z funkcji: ".text()."<br>";

    function licznik(){
        static $i = 1; //zmienna statyczna
        echo "Funkcja wywołana po raz $i <br>";
        $i++;
    }

    licznik();
    licznik();
    licznik();

    //Utwórz funkcje pole prostokąta z dwowami parametrami a i b
    //Oblicz i zwróc pole
    //Wywołaj funkcje z argumentami 5, 7 oraz 3, 4
    //Wyświetl wyniki "Pole prostokąta o bokach {a} i  {b} wynosi {zwrócony wynik}
    $a = 5;
    $b = 7;

    function poleProstokata($a, $b) {
        return $a * $b;
    }

    echo "Pole prostokąta o bokach $a i $b wynosi ".poleProstokata($a, $b);
    echo "Pole prostokąta o bokach 3 i 4 wynosi ".poleProstokata(3, 4);
    $pole = poleProstokata(13, 14);

?>
<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Funkcje</title>
</head>
<body>
    <h1>Funkcje</h1>
    <p>Dzisiaj mamy: <?php echo dzienTygodnia(5); ?></p>
    <p>Jutro będzie: <?php echo dzienTygodnia(6); ?></p>
    <h2>Funkcje matematyczne</h2>
    <p>Suma liczb: <?php echo suma(3, 7); ?></p>
    <p>Suma liczb: <?php echo suma(); ?></p>
    <p>Funkcja czesc: <?php czesc("Tomek"); ?></p>
    <p>Funkcja czesc: <?php czesc(); ?></p>
    <p>Zasieg funkcji: <?php pokaz(); ?></p>
    <p>Zmienna $zmienna: <?php echo $zmienna; ?></p>
</body>
</html>