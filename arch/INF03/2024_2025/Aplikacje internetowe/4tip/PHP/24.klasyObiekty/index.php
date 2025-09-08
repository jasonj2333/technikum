<?php 
class Owoc{
    private $nazwa;
    private $kolor;

    function __construct($name, $color){
        $this->nazwa = $name;
        $this->kolor = $color;
        //$this->Info();
    }

    function Info() {
        echo "<div>";
        echo "Jestem owocem i nazywam się ".$this->nazwa;
        echo "<br>Mam kolor ".$this->kolor;
        echo "</div>";
    }

    function setNazwa($name) {
        $this->nazwa = $name;
    }

    function getNazwa() {
        return $this->nazwa;
    }

    function setKolor($color) {
        $this->kolor = $color;
    }

    function getKolor() {
        return $this->kolor;
    }
}

$jablko = new Owoc("Jabłko papierówka", "pomarańczowy");
//$jablko->setNazwa("Jabłko Jonatan");
$jablko->setKolor("żółty");
$jablko->Info();
echo $jablko->getNazwa();
echo $jablko->getKolor();

$cytryna = new Owoc("Cytryna", "żółty");
// $cytryna->nazwa = "Cytryna";
// $cytryna->kolor = "żółty";
//$cytryna->setNazwa("Cytryna");
//$cytryna->setKolor("żółty");
$cytryna->Info();
?>