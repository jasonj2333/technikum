<?php

class Dbh{
    private $dbURL = "";
    private $dbName = "weather.db";
    
    public function __construct(){
        $url = $_SERVER['HTTP_HOST'].$_SERVER['REQUEST_URI'];

        if(strpos($url, 'includes') !== false){
            $this->dbURL = "../";
        }        
    }
    

    protected function connect(){
        $pdo = new PDO('sqlite:' . $this->dbURL . $this->dbName);
        $pdo->setAttribute(PDO::ATTR_DEFAULT_FETCH_MODE, PDO::FETCH_ASSOC); //optional
        return $pdo;
    }
}