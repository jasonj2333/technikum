<?php 
    session_start();
    if(isset($_SESSION['log'])){
        header("location: index.php");
        exit;
    }

    if(isset($_POST['imie']) && isset($_POST['haslo'])){
        if($_POST['imie'] == "janek" && $_POST['haslo'] == "jan23"){
            $_SESSION['log'] = $_POST['imie'];
            header("location: index.php");
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
    <title>Zaloguj się</title>
</head>
<body>
    <form action="" method="post">
        <label for="imie">Podaj imię</label>
        <input type="text" id="imie" name="imie"> <br>

        <label for="haslo">Podaj hasło</label>
        <input type="password" id="haslo" name="haslo"> <br>

        <button>Wyślij</button>
    </form>
</body>
</html>