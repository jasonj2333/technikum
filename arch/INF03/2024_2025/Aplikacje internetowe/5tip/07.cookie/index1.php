<?php

setcookie("pismo", "Na skróty", time()+360, "/", "localhost", false, false);
//Usuwanie cookie
//setcookie("pismo", "Na skróty", time()-1, "/", "localhost", false, false);

if( isset($_COOKIE['pismo']) ){
    echo "<p>Witamy ponownie - jesteś naszym stały klientem </p>";
}else{
    echo "<p>Witamy po raz pierwszy </p>";
}