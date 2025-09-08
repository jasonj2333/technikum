<?php 
    session_start();
    if(isset($_SESSION['user'])){
        unset($_SESSION['user']);
        session_destroy();
    }else{
        header('location: index.php');
        exit;
    }
?>

<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Wylogowano</title>
</head>
<body>
    <h1>Wylogowałeś się z serwisu!</h1>
    <p><a href="index.php">Strona główna</a></p>
    <p><a href="loguj.php">Zaloguj ponownie</a></p>
</body>
</html>