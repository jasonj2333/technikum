<?php

// if(!$plik = file("plik.txt")){
//     echo "Nie można otworzyć pliku";
// }else{
//     //var_dump($plik);
//     foreach($plik as $linia){
//         echo nl2br($linia);
//     }
// }

// if(!$plik = readfile("plik.txt")){
//     echo "Nie można otworzyć pliku";
// }else{
//    echo $plik;
// }

if(!file_exists('plik.txt')){
    echo "Nie można otworzyć pliku";
}else{
   $plik = file_get_contents("plik.txt");
   echo $plik;
}

