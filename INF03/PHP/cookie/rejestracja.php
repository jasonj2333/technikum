<?php 
    if(!isset($_COOKIE['dane']) && !isset($_POST['nazw'])):
?>
    <!DOCTYPE html>
    <html lang="pl">
    <head>
        <meta charset="UTF-8">
        <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>Dane użytkownika</title>
    </head>
    <body>
        <form action="" method="post">
            <label for="nazw">Podaj imię i nazwisko</label>
            <input type="text" name="nazw">
            <br>
            <input type="submit" value="Prześlij">
        </form>
    </body>
    </html>
<?php else: 
    if(isset($_POST['nazw'])){
        setcookie("dane", $_POST['nazw'], time() + 60*60*24*365);
        echo "<p>Dziękujemy za wprowadzenie danych</p>";
    } else {
        echo "<p>Witamy po raz kolejny ".$_COOKIE['dane']."</p>";
    }   

?>

<?php endif; ?>