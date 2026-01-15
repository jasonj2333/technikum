<?php 
//var_dump($_POST);
if(isset($_POST['nazwisko'])){
    $nazwisko = $_POST['nazwisko'];

    $plik = fopen('lista.txt', "a");
    fwrite($plik, $nazwisko . "\n");
    fclose($plik);
}
?>
<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Zapisy na szkolenie</title>
</head>
<body>
    <h1>Szkolenie z PHP - zapisy</h1>
    <form action="" method="post">
        <label for="nazwisko">Podaj nazwisko</label>
        <input type="text" name="nazwisko" id="nazwisko">
        <button>Zapisz</button>
    </form>
    <?php 
    //Odczyt z pliku
    if(file_exists('lista.txt')){
        $plik = fopen('lista.txt', "r");
        echo "<ol>";
        while(!feof($plik)){
            $linia = fgets($plik);
            if(mb_strlen($linia) > 0) echo "<li>$linia</li>";
        }
        echo "</ol>";
        fclose($plik);
    }
    ?>
</body>
</html>