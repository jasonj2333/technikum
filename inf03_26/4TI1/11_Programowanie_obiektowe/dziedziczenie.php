<?php

class Prostokat{
    public $szerokosc;
    public $wysokosc;

    public function __construct($a, $b)
    {
        $this->szerokosc = $a;
        $this->wysokosc = $b;
    }

    public function pole(){
        return $this->szerokosc * $this->wysokosc;
    }

    public function obwod(){
        return 2 * ($this->szerokosc + $this->wysokosc);
    }
}

class Kwadrat extends Prostokat{
    public function __construct($bok){
        parent::__construct($bok, $bok);
    }
}

class Kolo{
    public $r;

    public function __construct($r)
    {
        $this->r = $r;
    }

    public function pole(){
        return pi() * $this->r ** 2;
    }

    public function obwod(){
        return pi() * 2 * $this->r;
    }
}


$prostokat1 = new Prostokat(5, 7);
$prostokat2 = new Prostokat(4, 9);

echo $prostokat1->pole() . "<br>";
echo $prostokat2->obwod() . "<br>";

$kwadrat1 = new Kwadrat(5);
echo $kwadrat1->pole() . "<br>";
echo $kwadrat1->obwod() . "<br>";

$kolo1 = new Kolo(5);
echo $kolo1->pole() . "<br>";
echo $kolo1->obwod() . "<br>";