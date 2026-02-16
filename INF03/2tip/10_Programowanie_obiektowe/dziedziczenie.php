<?php 

//Pracownik
//Programista
//Manager

//Klasa nadrzędna
class Pracownik{
    protected string $imie;
    protected float $stawka;

    public function __construct(string $imie, float $stawka)
    {
        $this->imie = $imie;
        $this->stawka = $stawka;
    }

    public function obliczPensje(int $godziny) : float {
        return $this->stawka * $godziny;
    }

    public function info() : string{
        return "Pracownik: " . $this->imie . " stawka: " . $this->stawka . " zł/h";
    }
}

//Klasy dziedziczące
class Programista extends Pracownik{
    private string $jezyk;

    public function __construct(string $imie, float $stawka, string $jezyk)
    {
       parent::__construct($imie, $stawka);
       $this->jezyk = $jezyk;
    }

    //Nadpisanie metody z klasy nadrzędnej
    public function info() : string{
        return "Programista: " . $this->imie . " jezyk: " . $this->jezyk;
    }
}

class Menadzer extends Pracownik{
    private int $premia;

    public function __construct(string $imie, float $stawka, int $premia)
    {
       parent::__construct($imie, $stawka);
       $this->premia = $premia;
    }

    //Nadpisanie metody z klasy nadrzędnej
    public function obliczPensje(int $godziny) : float {
        //return $this->stawka * $godziny + $this->premia;
        return parent::obliczPensje($godziny) + $this->premia;
    }
}

$programista = new Programista("Tomek", 200, "PHP");
$menadzer = new Menadzer("Anna", 150, 2000);

echo $programista->info() . "<br>";
echo "Pensja: ".$programista->obliczPensje(160) . "<br>";

echo $menadzer->info() . "<br>";
echo "Pensja: ".$menadzer->obliczPensje(160) . "<br>";