<?php

//Klasa to pewien wzorzec (szablon) dla obiektów
class Uczen{
    //Właściwości (pola) klasy
    public $imie;
    private $punkty;

    //Konstruktor - specjalna metoda klasy uruchamiana podczas tworzenia obiektu
    public function __construct($pImie, $pPunkty)
    {
        $this->imie = $pImie;
        $this->punkty = $pPunkty;
    }

    //metoda klasy - funkcja w klasie
    public function czyZaliczony(){
        return $this->punkty > 50;
    }

    public function przedstawSie() {
        echo "Uczeń: " . $this->imie . "<br>";
        echo "Punkty: " . $this->punkty . "<br>";
    }

    public function dodajPunkty($ile) {
        $this->punkty += $ile;
    }
}

//Obiekt - to reprezentant (instancja) klasy 
$ania = new Uczen("Ania", 75);
// $ania->imie = "Ania";
// $ania->punkty = 75;

$bartek = new Uczen("Bartek", 40);
// $bartek->imie = "Bartek";
// $bartek->punkty = 40;
// $ania->punkty = 86;
$ania->dodajPunkty(11);
$ania->przedstawSie();

if( $ania->czyZaliczony() ){
    echo "<p>Egzamin zaliczony</p>";
}else{
    echo "<p>Egzamin niezaliczony</p>";
}

$bartek->przedstawSie();
// echo "Uczeń: " . $bartek->imie . "<br>";
// echo "Punkty: " . $bartek->punkty . "<br>";
if( $bartek->czyZaliczony() ){
    echo "<p>Egzamin zaliczony</p>";
}else{
    echo "<p>Egzamin niezaliczony</p>";
}
