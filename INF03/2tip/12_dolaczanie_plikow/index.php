<?php 
    require_once "functions.php";
?>
<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <?php include "./layout/header.php"; ?>
    <main>
        <h2>Warto wiedzieć</h2>
        <?php 
        require_once "dbase.php";
        for($i = 0; $i < 5; $i++){
            echo tnij($tekst, 150);
            echo "<br>";
            echo "<a href='article.php?id=$i'>Czytaj więcej >>> </a>";
            echo "<hr>";
        }
        ?>
    </main>
    <?php include "./layout/footer.php"; ?>
</body>
</html>