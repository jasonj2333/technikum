<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Opinie użytkowników</title>
</head>
<body> 
    <h1>Opinie użytkowników</h1>
    <?php 
        if(isset($_POST['komentarz'])){
            $komentarz = $_POST['komentarz'];
            $tekst = substr(trim($komentarz), 0, 255);
            $tekst = strip_tags($tekst) . "\n";

            if(!$op = fopen('opinie.txt', 'a')){
                echo '<p>Błąd. Nie można otworzyć pliku opinie.txt</p>';
            }else{
                if(fwrite($op, $tekst) === false){
                    echo '<p>Dodanie komentarza nie powiodło się!</p>';
                }
            }
        }
    ?>
    <form action="" method="post">
        <h2>Dodaj swoją opinie na temat globalnego ocieplenia</h2>
        <p>Maksymalnie 255 znaków</p>
        <textarea name="komentarz" id="" cols="50" rows="6" wrap="hard"></textarea>
        <br>
        <input type="submit" value="Prześlij">
    </form>

    <h2>Dodane opinie:</h2>
    <div>
        <?php 
            $opinie = '';
            if(file_exists('./opinie.txt')){
                $opinie = file_get_contents('./opinie.txt');
                $opinie = nl2br($opinie);
            }

            if($opinie != ''){
                echo $opinie;
            }else{
                echo "Brak opinii";
            }
        ?>
    </div>
</body>
</html>