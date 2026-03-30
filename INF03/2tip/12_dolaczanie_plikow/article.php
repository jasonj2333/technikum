<?php 
    require_once "functions.php";
?>
<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Artykuł</title>
</head>
<body>
    <?php include "./layout/header.php"; ?>
    <article>
        <h1>Artykuł nr <?php echo $_GET['id'] ?></h1>
        <?php
            require_once "dbase.php";
            echo $tekst;
        ?>
    </article>
    <?php include "./layout/footer.php"; ?>
</body>
</html>