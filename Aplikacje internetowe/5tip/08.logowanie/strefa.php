<?php 
    session_start();

    if(!isset($_SESSION['user'])){
        header('location: loguj.php');
        exit;
    }

    $imie = $_SESSION['user'];
?>

<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Strafa użytkowników</title>
</head>
<body>
    <h1>Witaj <?php echo $imie; ?></h1>
    <p>Jesteś w strefie dla zalogowanych użytkowników!</p>
    <p><a href="index.php">Strona główna</a></p>
    <p><a href="wyloguj.php">Wyloguj</a></p>
</body>
</html>