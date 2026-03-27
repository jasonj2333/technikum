<?php 
    session_start();
    if(!isset($_SESSION['log'])){
        header("location: loguj.php");
        exit;
    }

    $imie = $_SESSION['log'];
?>
<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Strefa zalogowanego użytkownika</title>
</head>
<body>
    <h1>Witaj <?php echo $imie; ?></h1>
    <p>Jesteś w strefie dostępnej tylko dla zalogowanych użytkowników</p>
    <p>Możesz przejść na stronę główną <a href="index.php">Strona główna</a></p>
    <p>Przed opuszczeniem strony nie zapomnij <a href="wyloguj.php">wylogować się !!!</a></p>
</body>
</html>