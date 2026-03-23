<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Edytuj klienta</title>
</head>
<body>
    <?php
    if(isset($_GET['id'])){
        $id = $_GET['id'];

        $conn = new mysqli("localhost", "root", "", "firma");
        $query = "SELECT id, imie, nazwisko, email FROM klienci WHERE id = $id;";
        $result = $conn->query($query);

        //mysqli_num_rows($result)
        if($result->num_rows === 1){
            $klient = $result->fetch_object();
        ?>
            <form action="index.php" method="post">
                <input type="hidden" name="id" value="<?php echo $klient->id ?>">

                <label for="imie">Imię</label>
                <input type="text" name="imie" id="imie" value="<?php echo $klient->imie ?>"><br>
                
                <label for="nazwisko">Nazwisko</label>
                <input type="text" name="nazwisko" id="nazwisko" value="<?php echo $klient->nazwisko ?>"><br>
                
                <label for="email">Email</label>
                <input type="email" name="email" id="email" value="<?php echo $klient->email ?>"><br>

                <button>Zapisz zmiany</button>
            </form>
        <?php
        }
        else{
            echo "<p>Nie znaleziono klienta</p>";
        }
    } else {
        echo "<p>Brak id klienta</p>";
    }
    
    ?>
</body>
</html>