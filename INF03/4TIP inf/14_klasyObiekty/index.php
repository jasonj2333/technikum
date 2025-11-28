<?php
//Szablon, projekt
class Owoc{
    //private //prywatna - niewidoczna poza klasą
    //public //publiczna
    //protected //chroniona - prywatna, ale dostępna w klasach dziedzicących

    //Zmienne członkowskie, atrybuty, własciwości
    public $nazwa;
    public $kolor;

    //metody, funkcje członkowskie
    public function Info(){
        echo "<div>";
        echo "Jestem owocem i nazywam się ".$this->nazwa;
        echo "<br>Mój kolor to: ".$this->kolor;
        echo "</div>";
    }
}

//Obiekt - instancja (reprezentant) danej klasy
$jablko = new Owoc;
$jablko->nazwa = "Jabłko papierówka";
$jablko->kolor = "żółty";
$jablko->Info();

//Hermetyzacji
class Samochod{
    private $marka;
    private $model;

    //Konstruktor - czyli funkcja odpalana automatycznie w momencie tworzenia obiektu
    public function __construct($pmarka, $pmodel){
        $this->marka = $pmarka;
        $this->model = $pmodel;
    }

    public function Jedz(){
        echo "<p>Samochód ".$this->marka." ".$this->model." jedzie</p>";
    }
}

$auto = new Samochod("Fiat", "126p");
//$auto->marka = "Toyota"; //Błąd właściwość jest prywatna
$auto->Jedz();