<?php 
    require_once "funkcje.php";
?>
<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Fajna strona</title>
</head>
<body>
    <?php include_once "layout/header.php"; ?>
    <main>
        <h2>Artykuły</h2>
        <?php 
            include "dbase.php";
            foreach($artykuly as $artykul){
                echo "<article>".tnij($artykul, 100)."</article>";
            } 
        ?>
    </main>
    <?php include_once "layout/footer.php"; ?>
</body>
</html>