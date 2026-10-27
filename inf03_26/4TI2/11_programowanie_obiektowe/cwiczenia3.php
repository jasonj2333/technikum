<?php

class Zwierze{
    public $imie;
    public $wiek;

    public function __construct($imie)
    {
        $this->imie = $imie;
        $this->wiek = 0;
    }

    public function __destruct()
    {
        echo $this->imie . " zakończył życie <br>";
    }

    public function przedstawSie(){
        echo "<p>Mam na imię {$this->imie} i mam {$this->wiek} lat</p>";
    }

    public function urodziny(){
        echo "<p>Hurra mam urodziny !!!</p>";
        $this->wiek++;
        echo "<p>Skończyłem {$this->wiek} lat</p>";
    }
}

$kot = new Zwierze("Mruczek");
$pies = new Zwierze("Burek");
$kot->urodziny();
$pies->urodziny();
$kot->urodziny();
$pies->urodziny();
$pies->urodziny();
$kot->przedstawSie();
$pies->przedstawSie();
unset($pies);
