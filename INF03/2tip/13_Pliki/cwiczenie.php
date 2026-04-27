<?php

//Utwórz plik imiona.txt
//Jeżeli kliknięto odczyt - odczytaj jego zawartość linia po linii
//Jeżeli kliknięto zapis - wyczyść plik i zapisz do niego zawartość tablicy imiona - w kolejnych liniach

$imiona = ["Tomek", "Anna", "Wojtek", "Zosia", "Artur"];

echo "<p><a href='cwiczenie.php?tryb=r'>Odczyt</a></p>";
echo "<p><a href='cwiczenie.php?tryb=w'>Zapis</a></p>";

if(isset($_GET['tryb'])){
    $tryb = $_GET['tryb'];
    if($tryb == 'r'){
        if(!file_exists('imiona.txt')){
            echo "Plik nie istnieje";
        }else{
            $plik = file('imiona.txt');
            foreach($plik as $linia){
                echo nl2br($linia);
            }
        }

    }
    else if($tryb == 'w'){

            $plik = fopen('imiona.txt', 'w');
                foreach($imiona as $imie){
                    fwrite($plik, $imie . "\n" );
                }
            fclose($plik);  

    }
}