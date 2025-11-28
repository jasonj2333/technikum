<?php


class Animal{
    private $name;
    private $age;

    public function __construct($name, $age){
        $this->name = $name;
        $this->age = $age;
    }

    public function __destruct() {
        echo $this->name . " zakończył życie<br>";
    }

    public function Info(){
        echo "<p>Mam na imię ". $this->name . " i mam " . $this->age . " lat.</p>";
    }

    public function Birthday(){
        echo "<p>Hurra mam urodziny</p>";
        $this->age++;
        echo "<p>Skończyłem " . $this->age . " lat!!!!</p>";
    }
}

$cat = new Animal("Mruczek", 5);
$dog = new Animal("Toffik", 0);
$cat->Info();
$dog->Info();
$dog->Birthday();
unset($cat);