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
        echo Person::$voteAge;
        echo '<br>';
        echo Person::infoVoteYear();
        Person::setVoteYear(21);
        echo '<br>';
        echo Person::infoVoteYear();
        
        echo '<hr>';
        
        $person = new Person("Zosia", "brown", 19);
        echo $person->getName();
        echo '<br>';
        echo $person->infoVoteYear();
    ?>
</body>
</html>