<?php require_once './includes/person.inc.php' ?>
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
        $person01 = new Person;
        $person01->setName("Adam");
        echo $person01->name;
        echo '<br>';

        $person02 = new Person();
        $person02->setName("Zosia");
        echo $person02->name;
    ?>
</body>
</html>