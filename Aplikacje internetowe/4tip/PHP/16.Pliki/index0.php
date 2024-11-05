<?php
$plik = 'imiona.txt';

if(file_exists($plik)){

    if(is_file($plik)){
        echo "<p>Plik istnieje</p>";
        echo "<p>Rozmiar:" . filesize($plik). "</p>";
        
        if( $file = fopen($plik, 'r') ){
            while(!feof($file)){ //feof() - zwraca true jeżeli osiągniemy koniec pliku
                $row = fgets($file); //czyta plik po wierszu
                echo "<p>$row</p>";
            }
            fclose($file);
        }

    }else{
        echo "<p>Folder istnieje</p>";
    }
  
}else{
    echo "<p>Nie ma takiego pliku</p>";
    touch($plik);
}

//unlink($plik); //usuwa plik