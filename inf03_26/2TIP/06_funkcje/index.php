<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Funkcje</title>
</head>
<body>
    <?php 
    //Definicja funkcji
    function funkcja(){
        echo "<p>Witaj świecie</p>";
    }
    
    //Wywołanie funkcji
    funkcja();
    funkcja();
    funkcja();

    function suma($a, $b){
        $wynik = $a + $b;
        return $wynik;
    }

    echo suma(5, 6);
    $zmienna = suma(4,9);
    $zmienna2 = suma(14,-7);
    echo "<p>Wartość zmiennej1 wynosi $zmienna, a zmiennej2 $zmienna2</p>";

    function iloraz($a, $b){
        return $a / $b;
    }

    echo iloraz(8, 3) ."<br>";

    function ocenaSlownie($ocena){
        switch ($ocena) {
            case 1:
                return "niedostateczny";
            case 2:
                return "dopusczajace";
            case 3:
                return "dostateczny";
            case 4:
                return "dobry";
            case 5:
                return "bardzo dobry";
            case 6:
                return "celujacy";
            default:
                return "Ocena poza skalą";
        }
    }

    echo ocenaSlownie(4);

    function czyDorosly($wiek){
        return $wiek >= 18;
    }
    
    echo "<br>";
    if( czyDorosly(18) ){
        echo "Jesteś dorosły <br>";
    }else{
        echo "Nie jesteś dorosły <br>";
    }

    function brutto($netto, $procent=23){
        return $netto * (1 + $procent/100);
    }

    echo brutto(100) . "<br>";
    echo brutto(50, 8) . "<br>";

    function iloczyn(int $a, int $b) : int {
        return $a * $b;
    }

    echo iloczyn(4.7, 5.2). "<br>";

    function poleKola(int $r) : float {
        return pi() * $r * $r;
    }

    echo "Pole koła wynosi: " . poleKola(5) . "<br>";
    ?>
</body>
</html>