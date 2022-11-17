<?php
    include './includes/class-autoloader.inc.php';
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Query a database using PDO</title>
</head>
<body>
    <?php 
        $testObj = new Test();
        $testObj->getUsers();
    ?>

    <hr>

    <?php 
        $testObj = new Test();
        $testObj->getUsersStmt("Zosia", "Nowak");
    ?>

    <hr>

    <?php 
        $testObj = new Test();
        //$testObj->setUsersStmt("Tomek", "Czerwiec", "1998-11-07");
        $testObj->getUsers();
    ?>
    
</body>
</html>