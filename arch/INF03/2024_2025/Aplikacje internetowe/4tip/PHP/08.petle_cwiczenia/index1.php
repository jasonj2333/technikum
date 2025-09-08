<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Tabliczka mnożenia</title>
</head>
<body>
    <h1>Tabliczka mnożenia</h1>
    <?php
    for ($i=1; $i<=10 ; $i++) { 
        for($j=1; $j<=10; $j++){
            echo $i . "*" . $j . "=" . $i*$j . "<br>"; 
        }
    } 
    ?>
</body>
</html>