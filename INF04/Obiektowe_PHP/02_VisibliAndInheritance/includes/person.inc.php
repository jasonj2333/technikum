<?php 
class Person{
    protected $firstName = "Adam";
    private $lastName = "Nowak";
    private $age = "16";
}

class Student extends Person{
    private $classNo = "IVB";

    public function info()
    {
        $a = $this->firstName;
        return $a;
    }

}



