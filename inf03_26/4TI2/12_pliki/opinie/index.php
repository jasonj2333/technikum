<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Opinie</title>
</head>
<body>
    <?php 
    if( isset($_POST['komentarz']) ){
        $komentarz = $_POST['komentarz'];
        $tekst = substr(trim($komentarz), 0, 255);
        $tekst = strip_tags($tekst) . "\n";

        if( $plik = fopen('opinie.txt', 'a') ){
            fwrite($plik, $tekst);
            fclose($plik);
        }else{
            echo "<p>Błąd. Nie można otworzyć pliku!</p>";
        }
    }
    ?>
    <h1>Opinie na temat strefy "Czystego transportu"</h1>
    <p>Maksymalnie 255 znaków</p>
    <form action="" method="post">
        <textarea name="komentarz" id="komentarz" cols="40" rows="10"></textarea>
        <button>Wyślij</button>
    </form>
    <hr>
    <h2>Dodane opinie</h2>
    <?php 
        if(file_exists('opinie.txt')){
            $tekst = file_get_contents('opinie.txt');
            echo nl2br($tekst);
        }else{
            echo "<p>Brak opinii</p>";
        }
    ?>
</body>
</html>