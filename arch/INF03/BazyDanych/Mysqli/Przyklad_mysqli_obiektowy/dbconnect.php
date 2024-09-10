<?php
    $host = "localhost";
    $user = "root";
    $pass = "";
    $db = "warzywniak";

    function dbconnect($host, $user, $pass, $db)
    {
        try {
            $conn = new mysqli($host, $user, $pass, $db);
        } catch (Exception $e) {
            // $e is the exception, you can use it as you wish
            echo $e->getMessage(); 
            die("<br>Błąd połączenia z bazą danych");
        }
        $conn->set_charset("utf8");
        return $conn;
    }