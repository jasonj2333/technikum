<?php 

//Klasa to pewien wzorzec (szablon) dla obiektów
class Uczen{
    //Właściwości (pola) klasy
    public $imie;
    private $punkty;

    //Konstruktor - specjalna metoda klasy, uruchamiana podczas tworzenia obiektu
    public function __construct($pImie, $pPunkty)
    {
        $this->imie = $pImie;
        $this->punkty = $pPunkty;
    }

    //Metoda - funkcja w klasie
    public function przedstawSie(){
        echo "Mam na imię " . $this->imie . "<br>";
        echo "Punkty: " . $this->punkty . "<br>";
    }

    public function dodajPunkty($ile){
        $this->punkty += $ile; 
    }

    public function czyZaliczony(){
        if($this->punkty > 50) return true;
        return false;
    }
}

//Obiekt klasy - reprezentant (instacja) klasy
$ania = new Uczen("Ania", 76);
$ania->dodajPunkty(9);
//$ania->imie = "Ania";
//$ania->punkty = 76;
$ania->przedstawSie();
if($ania->czyZaliczony()){
    echo "Klasa zaliczona <br>";
}else{
    echo "Klasa niezaliczona <br>";
}

$uczen2 = new Uczen("Bartek", 45);
$uczen2->przedstawSie();
$uczen2->dodajPunkty(5);
$uczen2->przedstawSie();
if($uczen2->czyZaliczony()){
    echo "Klasa zaliczona <br>";
}else{
    echo "Klasa niezaliczona <br>";
}