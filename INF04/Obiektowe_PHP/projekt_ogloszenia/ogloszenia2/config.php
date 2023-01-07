<?php
//DB Params
define("DB_HOST", "localhost");
define("DB_USER", "root");
define("DB_PASS", "");
define("DB_NAME", "ads");

//URL
define("PROTOCOL", "http://");
define("ROOT_DOMAIN", "localhost/ja/ogloszenia/");
define("ROOT_URL", PROTOCOL . ROOT_DOMAIN);
define("HOME_CONTROLLER", "HomeController");

foreach(glob("app/*.php") as $filename){
    include $filename;
}

foreach(glob("controllers/*.php") as $filename){
    include $filename;
}

foreach(glob("models/*.php") as $filename){
    include $filename;
}