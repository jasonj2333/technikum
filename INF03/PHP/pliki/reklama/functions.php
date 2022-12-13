<?php

function teraz()
{
    $date = date("Y-m-d H:i:s");
    return $date;
}

function tnij($text, $znaki=50)
{
   $text = trim($text);
   $text = substr($text, 0, $znaki);
   return $text;
}

function firma()
{
    $firmy = ['Polski Węgiel', 'Polski Cukier', 'Orlen'];
    return $firmy[rand(0, 2)];
}