<?php

class Konto{
    private $saldo;

    public function __construct($wplata)
    {
        $this->saldo = $wplata + 100;
    }
    //Getter - publiczna metoda dostępowa do prywatnych zmiennych w klasie
    public function stanKonta(){
        return $this->saldo;
    }

    //Setter 
    public function wplata($kwota){
        if($kwota > 0){
            $this->saldo += $kwota;
        }  
    }

    public function wyplata($kwota){
        if($kwota <= $this->saldo){
            $this->saldo -= $kwota;
        }   
    }

}

$rachunekStasia = new Konto(200);
echo "Stan konta wynosi: " .$rachunekStasia->stanKonta() . "<br>";
$rachunekStasia->wplata(500);
echo "Stan konta wynosi: " .$rachunekStasia->stanKonta() . "<br>";
$rachunekStasia->wyplata(600);
echo "Stan konta wynosi: " .$rachunekStasia->stanKonta() . "<br>";