<?php
    declare(strict_types = 1);
    include './includes/class-autoloader.inc.php';
    include './includes/calc.inc.php';
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Calculator</title>
    <link rel="stylesheet" href="./css/style.css">
</head>
<body>
    <div id="calculator">
        <p id="title">My calculator</p>
        <div id="result">
            <p>
            <?php  
                    if(isset($result)) echo $result;
                    else echo'_';
                ?> 
            </p>
            
        </div>
        <form action="" method="post"> 
            <input type="number" id="num1" name="num1" placeholder="First number">
            <select name="operator">
                <option value="add"> + </option>
                <option value="sub"> - </option>
                <option value="div"> / </option>
                <option value="mul"> * </option>
            </select>
            <input type="number" name="num2" name="num2" placeholder="Second number">
            <button id="submit" name="submit">Calculate</button>
            <input id="reset" type="reset" onClick="window.location.href='index.php'" value="Clear">
        </form>
        
    </div>
    
</body>
</html>