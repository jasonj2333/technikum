<?php //declare(strict_types=1); ?>
<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Funkcje</title>
</head>
<body>
    <h1>Funkcje</h1>
    <?php 
    //Definicja funkcji
    function hello(){
        echo "Witaj świecie <br>";
    }

    hello();
    hello();
    hello();

    function suma($a, $b){
        $wynik = $a + $b;
        return $wynik;
    }
    
    echo suma(2, 3);

    function poleProstokata($a, $b){
        return $a * $b;
    }
    $pokoj1 = poleProstokata(4,3);
    $pokoj2 = poleProstokata(2,3);
    $pokoj3 = poleProstokata(2, 4);

    echo "<br>Pole powierzchni mieszkania wynosi: " . ($pokoj1 + $pokoj2 + $pokoj3) . " m2";

    function ocenaSlownie($ocena){
        if($ocena == 2) return "dopuszczający";
        if($ocena == 3) return "dostateczny";
        if($ocena >= 4 && $ocena <= 6) return "powyżej dostatecznego";
        return "Ocena poza skalą";
    }

    echo "<br>". ocenaSlownie(2);
    echo "<br>". ocenaSlownie(6);
    echo "<br>". ocenaSlownie(11);

    function czyDorosly($wiek){
        return $wiek >= 18;
    }

    if(czyDorosly(19)){
        echo "<br>Pełnoletni";
    }
    else{
        echo "<br>Nieletni";
    }

    echo czyDorosly(17) ? "<br>Może głosować" : "<br>Nie może głosować";

    $stawka = 23;

    function brutto($netto, $procent = 8){
        return $netto * (1 + $procent / 100);
    }
    //echo $procent; //błąd zmienna lokalna nie jest widoczna poza funkcją 
    echo "<br>".brutto(100, $stawka);
    echo "<br>".brutto(100);

    //Przykład typowanie parametrów i wartości zwracanych
    function suma2(int $a, int $b) : int{
        $wynik = $a + $b;
        return $wynik;
    }
    
    echo "<br>". suma2(2.7, 4.5); //Traktuje parametry jako int i zwraca int

    ?>
</body>
</html>