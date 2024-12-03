<?php 
    session_start();

    if(!isset($_SESSION['login'])){
        header('location: zaloguj.php');
        exit;
    }

    $imie = $_SESSION['login'];
?>

<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Strefa dla zalogowanych użytkowników</title>
</head>
<body>
    <h1>Witaj <?php echo $imie; ?> !!!</h1>
    <p>Jesteś w strefie dostępnej tylko dla zalogowanych użytkowników.</p>
    <p><a href="index.php">Strona główna</a></p>
    <p><a href="wyloguj.php">Wyloguj się</a></p>
</body>
</html>