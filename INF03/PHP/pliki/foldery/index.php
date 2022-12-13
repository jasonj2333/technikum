<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Operacje na folderach</title>
</head>
<body>
    <?php
        $folder = './'; 
        //if(!file_exists($folder)) mkdir($folder);
        //rmdir($folder);

        // $text = "Barbarzyńcy, gdy przyjdą ustanowią prawa.\n";
        // $plik = fopen($folder.'/plik1.txt', 'a'); //dopisywanie

        // $text = "Barbarzyńcy, gdy przyjdą ustanowią prawa.\n";
        // fwrite($plik, $text);

        // fclose($plik);

        
        if($katalog = opendir($folder)) {
            while ($plik = readdir($katalog)) {
                echo $plik . '<br>';
            }
            closedir($katalog);
        }
        echo '<hr>';

        $folder = './';
        $katalogi = scandir($folder);
        var_dump($katalogi);
        echo '<br>';
        foreach($katalogi as $plik){
            echo $plik . '<br>'; 
        }

        echo '<hr>';
        foreach($katalogi as $plik){
           if(is_dir($plik)) echo $plik . '<br>'; 
        }

        foreach($katalogi as $plik){
            if(is_file($plik)) echo $plik . '<br>'; 
         }

    ?>
</body>
</html>