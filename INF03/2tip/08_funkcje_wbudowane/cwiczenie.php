<?php

$tekst = "   Uczę się php i lubię PHP   ";


//1.Usunie zbędne spacje z początku i końca tekstu
$tekst = trim($tekst);

//2. Wyświetli:
//- długość tekstu
//- tekst zapisany wielkimi literami
echo "Długość tekstu: ". mb_strlen($tekst) . "<br>";
echo "Duże litery: ". mb_strtoupper($tekst) . "<br>";

//3. Sprawdzi, czy tekst zawiera słowo „php” (niezależnie od wielkości liter)
if(stripos(mb_strtolower($tekst), "php")){
    // 4. Jeśli zawiera – zamieni słowo „php” na „PHP”
    $tekst = str_replace("php", "PHP", $tekst);
}

echo "<br>".$tekst; 



// 5. Podzieli tekst na wyrazy (rozdzielone spacjami) i wyświetli je w postaci listy

// 6. Wyświetli pierwsze 5 znaków tekstu