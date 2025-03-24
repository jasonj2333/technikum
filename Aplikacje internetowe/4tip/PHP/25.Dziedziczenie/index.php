<?php 

class Osoba{
    public $imie;
    public $wiek;

    public function __construct($imie, $wiek){
        $this->imie = $imie;
        $this->wiek = $wiek;
    }

    public function Info(){
        echo "<p>Mam na imię ".$this->imie." i mam ".$this->wiek." lat</p>";
    }
}

class Uczen extends Osoba{
    public $klasa;
    public $nr_leg;

    public function __construct($imie, $wiek, $klasa, $nr_leg){
        // $this->imie = $imie;
        // $this->wiek = $wiek;
        parent::__construct($imie, $wiek);
        $this->klasa = $klasa;
        $this->nr_leg = $nr_leg;
    }

    public function Info(){
        //echo "<p>Mam na imię ".$this->imie." i mam ".$this->wiek." lat</p>";
        parent::Info();
        echo "<p>Chodzę do klasa ".$this->klasa." numer legitymacji ".$this->nr_leg." lat</p>";
    }
}

$osoba1 = new Osoba("Tomek", 18);
$osoba1->Info();
$uczen1 = new Uczen("Ala", 15, "1b", 1234);
$uczen1->Info();

