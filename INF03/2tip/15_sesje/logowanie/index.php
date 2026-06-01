<?php 
    session_start();
    if(isset($_SESSION['login'])){
        $imie = $_SESSION['login'];
        $poziom = $_SESSION['level'];
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
    <?php if(isset($imie)):?>
        <h1>Witaj <?php echo $imie; ?>!</h1>
        <p>
            <?php echo $poziom > 1 ? 'Admin' : ''; ?>
        </p>
        
        <p>Jako zalogowany użytkownik możesz przejść do <a href="strefa.php">Strefy użytkowników</a></p>
        <p>Przed opuszczeniem strony <a href="wyloguj.php">Wyloguj się</a></p>
    <?php else: ?>
        <h1>Witaj nieznajomy</h1>
        <p>Wiekszość informacji na stronie przeznaczona jest dla zalogowanych użytkowników - <a href="zaloguj.php">Zaloguj się</a>.</p>
        <p>Jeżeli nie posiadasz konta <a href="rejestracja.php">Zarejestruj się</a></p>
    <?php endif; ?>
</body>
</html>