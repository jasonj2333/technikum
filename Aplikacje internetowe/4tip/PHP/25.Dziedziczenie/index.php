<?php 

class Osoba{
    protected $imie;
    protected $wiek;

    public function __construct($imie, $wiek){
        $this->imie = $imie;
        $this->wiek = $wiek;
    }

    public function Info(){
        echo "<p>Mam na imię ".$this->imie." i mam ".$this->wiek." lat</p>";
    }
}

class Uczen extends Osoba{
    private $klasa;
    private $nr_leg;

    public function __construct($imie, $wiek, $klasa, $nr_leg){
        // $this->imie = $imie;
        // $this->wiek = $wiek;
        parent::__construct($imie, $wiek);
        $this->klasa = $klasa;
        $this->nr_leg = $nr_leg;
    }

    public function Info(){
        echo "<p>Mam na imię ".$this->imie." i mam ".$this->wiek." lat</p>";
        //parent::Info();
        echo "<p>Chodzę do klasa ".$this->klasa." numer legitymacji ".$this->nr_leg."</p>";
    }
}

//Klasa nauczyciel
//przedmiot

class Nauczyciel extends Osoba{
    protected $przedmiot;

    public function __construct($imie, $wiek, $przedmiot){
        parent::__construct($imie, $wiek);
        $this->przedmiot = $przedmiot;
    }

    public function Info(){
        parent::Info();
        echo "<p>Uczę przedmiotu ".$this->przedmiot."</p>";
    }
}

class Wychowawca extends Nauczyciel{
    private $klasa;

    public function __construct($imie, $wiek, $przedmiot, $klasa){
        Osoba::__construct($imie, $wiek);
        $this->przedmiot = $przedmiot;
        $this->klasa = $klasa;
    }

    public function Info(){
        parent::Info();
        echo "<p>Jestem wychowawcą klasy ".$this->klasa."</p>";
    }
}

$osoba1 = new Osoba("Tomek", 18);
//$osoba->imie = "Anna";
$osoba1->Info();
$uczen1 = new Uczen("Ala", 15, "1b", 1234);
//$uczen1->klasa = "2c";
$uczen1->Info();
$nauczyciel1 = new Nauczyciel("Wojciech", 42, "chemia");
$nauczyciel1->Info();
$wychowawca1 = new Wychowawca("Anna", 35, "biologa", "4TIP");
$wychowawca1->Info();
