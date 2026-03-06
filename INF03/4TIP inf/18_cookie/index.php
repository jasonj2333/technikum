<?php 


setcookie("pismo", "Na skróty", time() + 3600, "/", "localhost", false, false);

if(isset($_COOKIE['pismo'])){
    echo "<p>Jesteś naszym stały klientem";
    echo "<br>". $_COOKIE['pismo'];
}else{
    echo "<p>Witamy pierwszy raz na naszej stronie</p>";
}

//Usuwanie cookie
//setcookie("pismo", "Na skróty", time() - 1, "/", "localhost", false, false);