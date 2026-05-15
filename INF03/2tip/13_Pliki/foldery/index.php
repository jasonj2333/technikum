<?php

$folder = "./teksty";

if(!file_exists($folder)) mkdir($folder);
//rmdir($folder);

$text = "Barbarzyńcy, gdy przyjdą ustanowią prawa.\n";
$plik = fopen($folder."/tekst1.txt", "a");
fwrite($plik, $text);
fclose($plik);
$text = "Bez barbarzyńców - cóż poczniemy teraz?.\n";
$plik = fopen($folder."/tekst2.txt", "a");
fwrite($plik, $text);
fclose($plik);

if($katalog = opendir($folder)){
    while($plik = readdir($katalog)){
        echo $plik . "<br>";
    }
    closedir($katalog);
}
echo "<hr>";

$folder = "./";
$katalogi = scandir($folder);
//var_dump($katalogi);
foreach($katalogi as $plik){
    echo $plik . "<br>";
}

echo "<hr>";
foreach($katalogi as $plik){
    if(is_dir($plik) && $plik != ".." && $plik != "."){
        echo $plik . "- DIR <br>";
            $katalog = scandir($plik);
            foreach($katalog as $p){
                echo "&nbsp;&nbsp;". $p . "<br>";
            }
    }
        
    else echo $plik . "<br>";
}