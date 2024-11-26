<?php 
    if(isset($_POST['urodziny'])){
        $urodziny = $_POST['urodziny'];
        setcookie("dataUrodzin", $urodziny, time()+60*60*24*365*5);
    }else if(isset($_COOKIE['dataUrodzin'])){
        $urodziny = $_COOKIE['dataUrodzin'];
    }

?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Urodziny</title>
</head>
<body>
    <?php if(!isset($urodziny)): ?>
        <form action="" method="post">
            <label for="urodziny">Podaj datę urodzin: </label>
            <input type="date" name="urodziny" id="urodziny">
            <br>
            <button>Prześlij</button>
        </form>
    <?php else: ?>
        <p>Urodziłeś się: <?php echo $urodziny ?> </p>
    <?php endif;?>
    
</body>
</html>