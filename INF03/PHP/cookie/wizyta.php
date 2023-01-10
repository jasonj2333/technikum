<?php

$mies = time()+60 * 60 * 24 * 30;
$data = date("Y:m:d H:i:s");

setcookie("wizyta", $data, $mies);

if(isset($_COOKIE['wizyta'])){
    $ostatnia = $_COOKIE['wizyta'];
    echo "<p>Witamy ponownie, ostatni raz odwiedziłeś nas: $ostatnia</p>";
}else{
    echo "<p>Witamy pierwszy raz na naszej stronie</p>";
}