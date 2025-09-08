<?php

$tekst = <<<TX
It is a long established fact that a reader will be distracted by the 
readable content of a page when looking at its layout. The point of using 
Lorem Ipsum is that it has a more-or-less normal distribution of letters, 
as opposed to using 'Content here, content here', making it look like 
readable English. Many desktop publishing packages and web page editors now 
use Lorem Ipsum as their default model text, and a search for 'lorem ipsum' 
will uncover many web sites still in their infancy. Various versions have 
evolved over the years, sometimes by accident, sometimes on purpose 
(injected humour and the like).
TX;

echo nl2br($tekst);
echo "<br><br>";
echo wordwrap($tekst, 20, "<br>\n");

echo "<br><br>";
$tekst2 = "litwo ojczyzno moja TY JESTEŚ JAK ZDROWIE";
echo strtoupper($tekst2);
echo "<br><br>";
echo strtolower($tekst2);
echo "<br><br>";
echo ucfirst($tekst2);
echo "<br><br>";
echo ucwords($tekst);

$login = " janek ";

if(trim($login) == "janek"){
    echo "<p>Użytkownik zalogowany</p>";
}else{
    echo "<p>Błędne dane logowania</p>";
}

$tekst3 = "aTomeke";
echo "<br><br>";
echo md5($tekst3);
