<?php 
    session_start();
    if(isset($_SESSION['log'])){
        unset($_SESSION['log']);
        session_destroy();
    }else{
        header("location:loguj.php");
        exit;
    }
?>
<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Wylogowywanie</title>
</head>
<body>
    <p>Wylogowałeś się ze strony</p>
    <p><a href="index.php">Strona główna</a></p>
    <p><a href="loguj.php">Zaloguj się ponownie</a></p>
</body>
</html>