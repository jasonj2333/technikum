<?php 
class Owoc{
    private $nazwa;
    private $kolor;

    function Info() {
        echo "<div>";
        echo "Jestem owocem i nazywam się ".$this->nazwa;
        echo "<br>Mam kolor ".$this->kolor;
        echo "</div>";
    }

    function setNazwa($name) {
        $this->nazwa = $name;
    }

    function setKolor($color) {
        $this->kolor = $color;
    }
}

$jablko = new Owoc();
$jablko->setNazwa("Jabłko Jonatan");
$jablko->setKolor("czerwony");
$jablko->Info();

$cytryna = new Owoc();
// $cytryna->nazwa = "Cytryna";
// $cytryna->kolor = "żółty";
$cytryna->setNazwa("Cytryna");
$cytryna->setKolor("żółty");
$cytryna->Info();
?>