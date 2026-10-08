<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Dołączanie plików</title>
</head>
<body>
    <?php include_once "layout/header.php" ?>
    <main>
        <?php require_once "dbase.php" ?>
        <?php 
            $id = $_GET['id'];
        ?>
        <h2>Artykuł - Temat <?= $id ?></h2>
        <article>
            <?php 
                echo $artykuly[$id];
            ?>
        </article>
        
    </main>
    <?php include_once "layout/footer.php" ?>
</body>
</html>