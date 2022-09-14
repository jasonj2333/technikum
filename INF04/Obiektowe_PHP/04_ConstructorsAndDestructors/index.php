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
        $person01 = new Person("Adam", "blue", 28);
        echo $person01->getName();
        //unset($person01);
        echo '<br>';

        $person02 = new Person("Zosia", "brown", 19);
        echo $person02->getName();
    ?>
</body>
</html>