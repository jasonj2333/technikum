<?php
function connect(){
    $conn = new mysqli("localhost","root","","ee_09_2021_06_02_sg_dane2");
    $conn->query("SET CHARSET utf8");
    $conn->query("SET NAMES 'utf8' COLLATE 'utf8_polish_ci'");
    return $conn;
}
    
?>