<?php 
    session_start();
    if(isset($_SESSION['login'])){
        header("location: index.php");
        exit;
    }

    if(isset($_POST['login']) && isset($_POST['haslo'])){
        $login = trim($_POST['login']);
        $haslo = trim($_POST['haslo']);
        $phaslo = trim($_POST['phaslo']);
        if($haslo != $phaslo){
            echo "<p>Niezgodne hasła</p>";
        }else{
            $conn = new mysqli("localhost", "root", "", "logowanie");
            $hash = password_hash($haslo, PASSWORD_DEFAULT);
            $stmt = $conn->prepare("INSERT INTO users (login, password) VALUES (?, ?)");
            $stmt->bind_param("ss", $login, $hash);
            if($stmt->execute()){
                echo "<p>Rejestracja przebiegła pomyślnie</p>";
            }else{
                echo "<p>Błąd: ".$stmt->error."</p>";
            }
            $stmt->close();
            $conn->close();
        }
    }

?>
<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Rejestracja</title>
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

        <div>
            <label for="phaslo">Powtórz hasło</label>
            <input type="password" id="phaslo" name="phaslo">
        </div>
        

        <button>Zarejestruj</button>
    </form>
</body>
</html>