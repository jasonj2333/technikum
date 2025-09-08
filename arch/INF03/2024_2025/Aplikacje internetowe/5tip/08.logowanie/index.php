<?php 
    session_start();

    if(isset($_SESSION['user'])){
        $imie = $_SESSION['user'];
    }  
?>

<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Strona główna</title>
</head>
<body>
    <h1>Mój serwis</h1>
    <?php if(isset($imie)): ?>
        <h2>Witaj <?php echo $imie; ?></h2>
        <p>Jako zalogowany użytkownik możesz przejść do <a href="strefa.php">Strefy użytkowników</a></p>
        <p>Przed opuszczeniem strony <a href="wyloguj.php">wyloguj się!</a></p>
    <?php else: ?>
        <h2>Witaj nieznajomy</h2>
        <p>Większość informacji na stronie dostępna jest tylko dla zalogowanych użytkowników - <a href="loguj.php">Zaloguj się!</a></p>
    <?php endif; ?>
</body>
</html>