<?php 
$dane = "dane.txt";

if(!file_exists($dane)){
    touch($dane);
}

$tekst = "Jakiś tam tekst2\n";

if($file = fopen($dane, 'a')){
    if(fwrite($file, $tekst)){
        echo "<p>Plik zapisano</p>";
    }else{
        echo "<p>Nie udało się zapisać danych do pliku.</p>";
    }
    fclose($file);
}