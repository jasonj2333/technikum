<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Edytuj klienta</title>
</head>
<body>
    <h1>Edytuj klienta</h1>
    <?php 
    if(isset($_GET['id'])){
        $id = $_GET['id'];
        $conn = new mysqli("localhost", "root", "", "firma");
        $query = "SELECT id, imie, nazwisko, email FROM klienci WHERE id=$id";
        $result= $conn->query($query);
        if(mysqli_num_rows($result) > 0){
            $klient = mysqli_fetch_assoc($result);
        ?>
            <form action="crud.php" method="post">
                <input type="hidden" name="id" value="<?php echo $klient['id'] ?>">

                <label for="imie">Imię: </label>
                <input type="text" name="imie" id="imie" value="<?php echo $klient['imie'] ?>"> <br><br>

                <label for="nazwisko">Nazwisko: </label>
                <input type="text" name="nazwisko" id="nazwisko" value="<?php echo $klient['nazwisko'] ?>"> <br><br>

                <label for="email">Email: </label>
                <input type="text" name="email" id="email" value="<?php echo $klient['email'] ?>"> <br><br>

                <button>Zapisz zmiany</button>
            </form>
        <?php
        }
        else{
            echo "<p>Nie znaleziono klienta</p>";
        }
        mysqli_close($conn);
    }else{
        echo "<p>Brak id klienta</p>";
    }
        
    ?>
</body>
</html>