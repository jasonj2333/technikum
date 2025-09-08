<?php

setcookie("klient", "Tomek", time()+3600, "/", "localhost", false);

if(isset($_COOKIE['klient'])){
    $klient = $_COOKIE['klient'];
    echo "<p>Witam $klient !!!.</p>";
}else{
    echo "<p>Witaj pierwszy raz na naszej stronie</p>";
}

#Usuwanie cookie - ustawienie - czasu życia np. time()-1
#setcookie("klient", "Tomek", time()-1, "/", "localhost", false);
