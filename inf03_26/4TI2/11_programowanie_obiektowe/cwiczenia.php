<?php

//Utwórz klasę Prostokat zawierająca pola publiczne:
// - szerokosc i wysokosc
//Klasa posiada kontruktor pozwalający ustawić wartość pól
//Klasa posiada metodę pole zwracająca pole prostokąta

//Utwórz dwa obiekty klasy prostokąt o wymiarach 5, 7 oraz 3, 4.
//Wywołaj metodę pole dla obu obiektów
class Prostokat{
    public $szerokosc;
    public $wysokosc;

    public function __construct($szerokosc, $wysokosc)
    {
        $this->szerokosc = $szerokosc;
        $this->wysokosc = $wysokosc;
    }

    public function pole(){
        $wynik = $this->szerokosc * $this->wysokosc;
        return $wynik; 
    }

    public function obwod(){
        $wynik = 2 * $this->szerokosc + 2 * $this->wysokosc;
        return $wynik; 
    }
}

class Kwadrat extends Prostokat{
    public function __construct($bok){
        parent::__construct($bok, $bok); //Wywołanie konstruktora klasy nadrzędnej - Prostokat
    }
}

class Kolo{
    public $r;

    public function __construct($promien)
    {
        $this->r = $promien;
    }

    public function pole(){
        $wynik = $this->r * $this->r * pi();
        return $wynik; 
    }

    public function obwod(){
        $wynik = 2 * $this->r * pi();
        return $wynik; 
    }
}

$prostokat1 = new Prostokat(5, 7);
$prostokat2 = new Prostokat(3, 4);

echo $prostokat1->pole() . "<br>";
echo $prostokat1->obwod() . "<br>";
echo $prostokat2->pole() . "<br>";
echo $prostokat2->obwod() . "<br>";

echo "<h2>Kwadraty</h2>";
$kwadrat1 = new Kwadrat(4);
$kwadrat2 = new Kwadrat(6);
echo $kwadrat1->pole() . "<br>";
echo $kwadrat1->obwod() . "<br>";
echo $kwadrat2->pole() . "<br>";
echo $kwadrat2->obwod() . "<br>";
