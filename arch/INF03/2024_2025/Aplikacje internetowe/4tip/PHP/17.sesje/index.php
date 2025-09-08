<?php 
    session_start();
?>
<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Sesje</title>
</head>
<body>
    <?php echo "<p>Indetyfikator sesji: ". session_id() ."</p>"; ?>
</body>
</html>

<?php 
    #session_destroy();
?>