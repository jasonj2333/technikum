<?php
// Utwórz klasę Produkt z właściwościami: nazwa, cena.
// Dodaj metodę opis(), która zwróci tekst typu:
// "Produkt: Chleb, cena: 4.50 zł".

class Produkt{
    private string $nazwa;
    private float $cena;

    public function __construct(string $nazwa, float $cena){
        $this->nazwa = $nazwa;
        $this->cena = $cena;
    }

    public function opis() : string{
        return "<p>Produkt: ".$this->nazwa.", cena: ".$this->cena." zł</p>";
    }

    public function marza(float $nowaCena) : void{
        if($nowaCena > 1) $this->cena = $nowaCena;
    }
}

$produkt = new Produkt("Chleb", 4.50);
$produkt->marza(5.20);
echo $produkt->opis();

$komputer = new Produkt("Laptop", 5000);
echo $komputer->opis(); 