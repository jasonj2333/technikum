<?php 
// Utwórz klasę Produkt z konstruktorem i z właściwościami: nazwa, cena.
// Dodaj metodę opis(), która zwróci tekst typu:
// "Produkt: Chleb, cena: 4.50 zł".
// Utwórz 2 obiekty tej klasy i przetestujcie metodę opis


class Produkt{
    public $nazwa;
    public $cena;

    public function __construct($nazwa, $cena)
    {
        $this->nazwa = $nazwa;
        $this->cena = $cena;
    }

    public function opis() {
        return "<p>Produkt: " . $this->nazwa . ", cena: " . $this->cena . "</p>";
    }

    //marza
    public function marza($wysokosc){
        if($wysokosc > 0) $this->cena += $wysokosc; 
    }
}

$produkt1 = new Produkt("Chleb", 6.50);
$produkt2 = new Produkt("Mleko", 5);
echo $produkt1->opis();
$produkt2->marza(2);
echo $produkt2->opis();