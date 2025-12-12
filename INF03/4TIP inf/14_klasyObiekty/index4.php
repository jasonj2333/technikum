<?php
// Klasa KontoBankowe

// Polecenie:
// Napisz klasę KontoBankowe z prywatną właściwością saldo = 100.
// Dodaj metody:

// wplata($kwota) – zwiększa saldo,

// wyplata($kwota) – zmniejsza saldo, ale tylko jeśli jest wystarczająca ilość środków,

// saldo() – zwraca aktualne saldo.

class KontoBankowe{
    private $saldo = 100;

    public function wplata($kwota){
        $this->saldo += $kwota;
    }

    public function wyplata($kwota){
        if($kwota <= $this->saldo){
            $this->saldo -= $kwota;
            return true;
        }
        return false;
    }

    public function saldo() {
        return $this->saldo;
    }

    public function komunikat($operacja){
        if($operacja){
            echo "<p>Wypłacono środki z konta</p>";
        } else {
            echo "<p>Za mało środków na koncie</p>";
        };
    }
}

$mojeKonto = new KontoBankowe();
$mojeKonto->wplata(200);
$mojeKonto->komunikat($mojeKonto->wyplata(250));
$mojeKonto->komunikat($mojeKonto->wyplata(250));
echo $mojeKonto->saldo();