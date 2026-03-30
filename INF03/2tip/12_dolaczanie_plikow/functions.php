<?php

function tnij(string $tekst, int $znaki=50) : string {
    $tekst = trim($tekst);
    $tekst = substr($tekst, 0, $znaki);
    return $tekst . "..."; 
}

function teraz() : string {
    $date = date("Y-m-d H:i:s");
    return $date;
}