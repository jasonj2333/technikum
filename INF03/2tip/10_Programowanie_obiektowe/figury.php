<?php

abstract class Figura{
    protected string $nazwa;

    public function __construct(string $nazwa)
    {
        $this->nazwa = $nazwa;
    }

    public function getNazwa() : string {
        return $this->nazwa;
    }

    abstract public function pole() : float;
}

//Nie można tworzyć obiektów klas abstrakcyjnych
//$figura = new Figura("jakas figura");

class Prostokat extends Figura{
    private float $a;
    private float $b;

    public function __construct(string $nazwa, float $a, float $b)
    {
        parent::__construct($nazwa);
        $this->a = $a;
        $this->b = $b;
    }

    public function pole() : float {
        return $this->a * $this->b;
     }
}

$prostokat = new Prostokat("Prostokąt", 5, 6);
echo "<p>Pole figury {$prostokat->getNazwa()} wynosi {$prostokat->pole()}  </p>";