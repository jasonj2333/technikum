<?php 

$plik = "imiona.txt";

if($file = fopen($plik, 'r')){
    while($chr = fgetc($file)){ //odczyt znak po znaku
        echo $chr ."+";
    }
    fclose($file);
}

echo "<br>";

if($data = file($plik)){ //zrzuca nam plik do tablicy
    //var_dump($data);
    foreach($data as $row){
        echo nl2br($row); //zamienia znaki końca linii na <br>
    }
}

echo "<br>";

if($data = file_get_contents($plik)){
    echo nl2br($data);
}