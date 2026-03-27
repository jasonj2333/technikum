<?php 
    session_start();

    if(isset($_SESSION['log'])){
        $imie = $_SESSION['log'];
    }
?>
<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Strona główna</title>
</head>
<body>
    <?php if(isset($imie)): ?>
        <h1>Witaj <?php echo $imie; ?></h1>
        <p>Jako zalogowany użytkownik możesz przejść do <a href="">Strefy użytkowników</a></p>
        <p>Przed opuszczeniem strony <a href="">wyloguj się</a></p>
    <?php else: ?>
        <h1>Witaj nieznajomy</h1>
        <p>Większość informacji na stronie jest przeznaczona dla zalogowany użytkowników - <a href="loguj.php">zaloguj się</a></p>
    <?php endif; ?>
</body>
</html>