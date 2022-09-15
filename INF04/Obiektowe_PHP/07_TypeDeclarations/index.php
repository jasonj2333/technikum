<?php
    declare(strict_types = 1);
    include './includes/autoloader.inc.php'
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <?php 
               
        $person = new Person();
        try {
            $person->setName(2);
            echo $person->getName();
        } catch (TypeError $e) {
            echo 'Error: '. $e->getMessage();
        }

    ?>
</body>
</html>