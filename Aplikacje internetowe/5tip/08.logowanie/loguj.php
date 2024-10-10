<?php 
    session_start();
    if(isset($_SESSION['user'])){
        header('location: index.php');
        exit;
    }elseif(isset($_POST['login']) && isset($_POST['haslo'])){
        $login = $_POST['login'];
        $haslo = $_POST['haslo'];
        if($login == 'janek' && $haslo == 'jan23'){
            //Zalogujemy użytkownika
            $_SESSION['user'] = $login;
            header('location: index.php');
            exit;
        }else{
            echo "<p>Nieprawidłowe dane logowania</p>";
        }

    }
?>
<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Logowanie</title>
</head>
<body>
    <form action="" method="post">
        <p>Logowanie użytkownika</p>
        <div>
            <label for="login">Login</label>
            <input type="text" name="login">
        </div>
        <div>
            <label for="haslo">Hasło</label>
            <input type="password" name="haslo">
        </div>
        <div><button>Wyślij</button></div>
    </form>
</body>
</html>