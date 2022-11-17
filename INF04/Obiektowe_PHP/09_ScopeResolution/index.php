<?php
//Scope Resolution Operator (::)

//Here is the first class example!
class FirstClass{
    //Properties
    const EXAMPLE = "You can't change this!";

    //Methods
    public static function test()
    {
        $testing = "This is a test!";
        return $testing;
    }
}

//$a = FirstClass::test();
//echo $a;


//Here is the second class example!
class SecondClass extends FirstClass{
    //Properties
    public static $staticProperty = "A static property!";

    //Methods
    public static function anotherTest()
    {
        echo parent::EXAMPLE;
        echo self::$staticProperty;
    }
}

$b = SecondClass::anotherTest();
echo $b;