<?php

setcookie("wizyta", 1, time()+3600, "/", "localhost", false, false);

if(isset($_COOKIE['wizyta'])){
    echo "<p>Jesteś naszym stałym klientem</p>";
    echo "<p>{$_COOKIE['wizyta']}</p>";
}else{
    echo "<p>Witaj na stronie po raz pierwszy</p>";
}

//Usuwanie
//setcookie("wizyta", 1, time()-1, "/", "localhost", false, false);