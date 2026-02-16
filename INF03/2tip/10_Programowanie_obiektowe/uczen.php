<?php

class Uczen{
    private string $imie;
    private string $nazwisko;
    private array $oceny = [];

    public function __construct(string $imie, string $nazwisko)
    {
        $this->imie = $imie;
        $this->nazwisko = $nazwisko;
    }

    public function dodajOcene(int $ocena) : void {
        if($ocena >= 1 && $ocena <= 6){
            $this->oceny[] = $ocena;
        }    
    }

    public function srednia() : float {
        if(count($this->oceny) == 0) return 0;
        $srednia =  array_sum($this->oceny) / count($this->oceny);
        return number_format($srednia, 2);
    }

    public function opis() : string {
        return "<p>". $this->imie . " " . $this->nazwisko . " - średnia: " . $this->srednia() . "</p>";
    }

    //Zwraca najwyzsza ocene
    public function najwyzszaOcena() : int {
        if(count($this->oceny) == 0) return 0;
        //return max($this->oceny);
        $max = $this->oceny[0];
        foreach($this->oceny as $ocena){
            if($ocena > $max) $max = $ocena;
        }
        return $max;
    }
    //Zwraca najnizsza ocene
    public function najnizszaOcena() : int{
        if(count($this->oceny) == 0) return 0;
        return min($this->oceny);
    }
}

$uczen = new Uczen("Tomek", "Atomek");
$uczen->dodajOcene(4);
$uczen->dodajOcene(2);
$uczen->dodajOcene(5);

echo $uczen->opis();
echo "<p>".$uczen->najwyzszaOcena()."</p>";
echo "<p>".$uczen->najnizszaOcena()."</p>";