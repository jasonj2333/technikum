<?php
//Regular class
include_once "classes/simple.class.php";

$obj = new SimpleClass();
$obj->helloWorld();

//Anonumous class
$newObj = new class(){
    public function helloWorld()
    {
        echo "Hello World!";
    }
};

$newObj->helloWorld();