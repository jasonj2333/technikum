<?php 
    session_start();
    if(isset($_SESSION['login'])){
        header("location: index.php");
        exit;
    }

    if(isset($_POST['login']) && isset($_POST['haslo'])){
        $conn = new mysqli("localhost", "root", "", "logowanie");
        $user =  $_POST['login'];
        
        $sql = "SELECT * FROM users WHERE login = '$user'";
        $result = $conn->query($sql);
        $userData = $result->fetch_assoc();
        $pass = password_verify($_POST['haslo'], $userData['password']);
        if($pass){
            $_SESSION['login'] = $_POST['login'];
            $_SESSION['level'] = $userData['level'];
            header("location: index.php");
            exit;
        }else{
            echo "<p>Nieprawidłowe dane logowania</p>";
        }
        $conn->close();
    }
?>
<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Zaloguj się</title>
</head>
<body>
    <form action="" method="post">
        <div>
            <label for="login">Podaj login</label>
            <input type="text" id="login" name="login">
        </div>
         
        <div>
            <label for="haslo">Podaj hasło</label>
            <input type="password" id="haslo" name="haslo">
        </div>
        

        <button>Zaloguj</button>
    </form>
</body>
</html>