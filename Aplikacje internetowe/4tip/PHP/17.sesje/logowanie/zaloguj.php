<?php 
    session_start();

    if( isset($_SESSION['login']) ){
        header('location: index.php');
        exit;
    }elseif( isset($_POST['login']) ){
        require_once 'users.php';
        if( zaloguj($_POST['login'], $_POST['password']) ){
            $_SESSION['login'] = $_POST['login'];
            header('location: index.php');
            exit;
        }else{
            echo "<p>Błędne dane logowania</p>";
        }
    }
?>

<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Zaloguj</title>
</head>
<body>
    <form action="" method="post">
        <p>Logowanie użytkownika</p>
        <label for="login">Podaj login</label>
        <input type="text" name="login">
        <br>
        <label for="password">Podaj hasło</label>
        <input type="password" name="password">
        <br>
        <button>Zaloguj</button>
    </form>
</body>
</html>