<?php
    //var_dump($_GET['id']); 
    require_once "dbase.php";
    $id = $_GET['id'];

    $sql = "SELECT * FROM uzytkownik WHERE id = '$id'";

    $result = mysqli_query($polaczenie, $sql);

    $rows = mysqli_num_rows($result);

    if($rows != 1){
        mysqli_close($polaczenie);
        exit("<p>Błąd!</p>");
    }

    $user = mysqli_fetch_assoc($result);

    var_dump($user);

?>

<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Edycja użytkownika</title>
</head>
<body>
    <h1>Nowy użytkownik</h1>
    <form action="dodaj.php" method="post">
        <label for="imie">Imię</label>
        <input type="text" name="imie" id="imie" value="<?php echo $user['imie'] ?>" required><br>
        <label for="nazwisko">Nazwisko</label>
        <input type="text" name="nazwisko" id="nazwisko" value="<?php echo $user['nazwisko'] ?>" required><br>
        <label for="telefon">Telefon</label>
        <input type="text" name="telefon" id="telefon" value="<?php echo $user['telefon'] ?>" required><br>
        <label for="email">Email</label>
        <input type="email" name="email" id="email" value="<?php echo $user['email'] ?>" required><br>
        <button>Dodaj</button>
    </form>
</body>
</html>