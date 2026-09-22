<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Historia zamówień</title>
</head>
<body>
    <h1>Historia zamówień</h1>
    <?php 
        if(isset($_GET['id'])){
            echo "<h2>Zamówienie nr: {$_GET['id']}</h2>";
        }else{
            echo "<h2>Nie wybrano zamówienia</h2>";
        }
    ?>
</body>
</html>