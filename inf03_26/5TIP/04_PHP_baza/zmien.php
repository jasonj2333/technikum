<?php 
    if(isset($_POST['isbn'])){
        $id = $_POST['id'];
        $isbn = $_POST['isbn'];
        $tytul = $_POST['tytul'];
        $rokWydania = $_POST['rokWydania'];
        $id_autor = $_POST['autor'];

        $conn = mysqli_connect("localhost", "root", "", "biblioteka");
        $query = "UPDATE ksiazki SET isbn = '$isbn', tytul = '$tytul', rokWydania = $rokWydania, id_autor = $id_autor WHERE id = $id";
        $result = mysqli_query($conn, $query);
        mysqli_close($conn);
        header("Location: index.php");
    }
?>

<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Edycja książki</title>
</head>
<body>
    <?php if(isset($_GET['id'])): ?>
        <?php
            $id = $_GET['id'];
            $conn = mysqli_connect("localhost", "root", "", "biblioteka"); 
            $query = "SELECT isbn, tytul, rokWydania, id, id_autor FROM ksiazki WHERE id=$id";
            $result = mysqli_query($conn, $query);
            $ksiazka = mysqli_fetch_row($result);
            //var_dump($ksiazka[4]);
            mysqli_close($conn);    
        ?>
        <h1>Edycja książki</h1>
        <form action="" method="post">
            <label for="isbn">ISBN</label>
            <input type="text" id="isbn" name="isbn" value="<?php echo $ksiazka[0] ?>">
            <label for="tytul">Tytuł</label>
            <input type="text" id="tytul" name="tytul" value="<?= $ksiazka[1] ?>">
            <label for="rokWydania">Rok wydania</label>
            <input type="number" id="rokWydania" name="rokWydania" value="<?= $ksiazka[2] ?>">
            <select name="autor" id="autor">
                <option value="1" <?php if($ksiazka[4] == 1) echo "selected" ?> >Bolesław Prus</option>
                <option value="2" <?php if($ksiazka[4] == 2) echo "selected" ?> >Henryk Sienkiewicz</option>
            </select>
            <input type="hidden" name="id" value="<?= $ksiazka[3] ?>">
            <button>Zapisz zmiany</button>
        </form>
    <?php endif;?>
</body>
</html>