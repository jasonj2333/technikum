<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Opinie użytkowników</title>
</head>
<body>
    <h1>Opinie użytkowników</h1>
    <?php 
    if(isset($_POST['komentarz'])){
        $komentarz = $_POST['komentarz'];
        $tekst = substr(trim($komentarz), 0, 255);
        $tekst = strip_tags($tekst) ."\n";

        if($plik = fopen('./opinie.txt', 'a')){
            fwrite($plik, $tekst);
            fclose($plik);
        }else{
            echo "<p>Błąd. Nie można otworzyć pliku!!!</p>";
        }

    }
    
    ?>
    <form action="" method="post">
        <h2>Dodaj opinie na temat programu "Czyste powietrze".</h2>
        <p>Maksymalnie 255 znaków</p>
        <textarea name="komentarz" cols="30" rows="10"></textarea>
        <button>Wyślij</button>
    </form>
    <h2>Dodane opinie:</h2>
    <?php 
        $opinie = "";
        if(file_exists('./opinie.txt')){
            $opinie = file_get_contents('./opinie.txt');
            $opinie = nl2br($opinie);
        }

        if($opinie != ""){
            echo $opinie;
        }else{
            echo "Brak opinii";
        }
    ?>
</body>
</html>