<?php

class Konto{
    private $saldo;

    public function __construct($wplata)
    {
        $this->saldo = $wplata + 100;
    }

    //funkcja typu getter - zwraca wartość prywatnego pola
    public function stanKonta(){
        return $this->saldo;
    }

    //setter - wplataNaKonto($wysokosc)
    public function wplataNaKonto($wysokosc){
        if($wysokosc > 0) $this->saldo += $wysokosc;
    }

    //wyplataZKonta - nie można wypłacić więcej niż masz na koncie
    public function wyplataZKonta($wysokosc){
        if($wysokosc > 0 && $wysokosc <= $this->saldo) 
            $this->saldo -= $wysokosc;
    }
}

$rachunekStasia = new Konto(50);
echo $rachunekStasia->stanKonta() . "<br>";
$rachunekStasia->wplataNaKonto(90);
echo $rachunekStasia->stanKonta() . "<br>";
$rachunekStasia->wyplataZKonta(200);
echo $rachunekStasia->stanKonta() . "<br>";

