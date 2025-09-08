<?php
//Klasa Animal
    //$name
    //Info() -> Mam na imię $name

//Obiekty dog, cat

class Animal{
    private $name;

    function __construct($name){
        $this->name = $name;
    }

    function Info(){
        echo "<p>Ma na imię $this->name</p>";
    }
}

$dog = new Animal("Burek");
$cat = new Animal("Mruczek");
$dog->Info();
$cat->Info();