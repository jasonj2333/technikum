<?php 
class Person{
    //Properties
    private $name;
    private $eyeColor;
    private $age;

    public static $voteAge = 18;

    public function __construct($name, $eyeColor, $age)
    {
        $this->name = $name;
        $this->eyeColor = $eyeColor;
        $this->age = $age;
    }


    //Methods
    public function getName()
    {
        return $this->name;
    }

    public function setName($name)
    {
        $this->name = $name; 
    }

    public static function setVoteYear($newVoteAge)
    {
        self::$voteAge = $newVoteAge;
    }

    public static function infoVoteYear()
    {
        return 'You must be '.self::$voteAge.' years or older to vote in the elections';
    }
}





