<?php session_start() ?>
<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Koszyk zakupów</title>
</head>
<body>
    <h1>Lista artykułów</h1>
    <?php 
        if(isset($_POST['lista'])){
            if(!empty($_SESSION['koszyk'])){
                $koszyk = array_unique(
                    array_merge(
                        unserialize($_SESSION['koszyk']), $_POST['lista']
                    )
                );
                $_SESSION['koszyk'] = serialize($koszyk);
            } else {
                $_SESSION['koszyk'] = serialize($_POST['lista']);
            }
            echo "<p>Wybrane produkty zostały umieszczone w koszyku.</p>";
        }
    ?>
    <form action="" method="post">
        <p>Wybór produktu:</p>
        <p>
            <select name="lista[]" id="produkty" multiple="multiple" size="10">
                <option value="Monitor">Monitor</option>
                <option value="Drukarka">Drukarka</option>
                <option value="Klawiatura">Klawiatura</option>
                <option value="Myszka">Myszka</option>
                <option value="Głośniki">Głośniki</option>
                <option value="Kamera">Kamera</option>
                <option value="Słuchawki">Słuchawki</option>
                <option value="Napęd DVD">Napęd DVD</option>
                <option value="Dysk twardy">Dysk twardy</option>
                <option value="Pendrive">Pendrive</option>
                <option value="Komputer">Komputer</option>
            </select>
        </p>
        <p>Wybierz produkty, trzymając wciśnięty klawisz Ctrl.</p>
        <p><input type="submit" value="Dodaj"></p>
    </form>
    <p><a href="koszyk.php">Przejdź do koszyka</a></p>
</body>
</html>