<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Tabliczka mnożenia</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <h1>Tabliczka mnożenia</h1>
    <?php 
        if(isset($_POST['rows']) && isset($_POST['cols']) ){
            $rows = $_POST['rows']; 
            $cols = $_POST['cols']; 
        }else{
            $rows = 10;
            $cols = 10;
        }
    ?>
    <form action="" method="post">
        <label for="rows">Wiersze</label>
        <input type="number" id="rows" name="rows" value="<?php echo $rows ?>">
        <label for="cols">Kolumny</label>
        <input type="number" id="cols" name="cols" value="<?php echo $cols ?>">
        <!-- <input type="submit" value="Generuj"> -->
        <button>Generuj</button>
    </form>

    <table>
        <?php
            for($i=0; $i<=$rows; $i++){
                echo "<tr>";
                    for($j=0; $j<=$cols; $j++){
                        if($i==0 && $j==0) echo "<th>X</th>";
                        else if($i==0) echo "<th>".$j."</th>";
                        else if($j==0) echo "<th>".$i."</th>";
                        else echo "<td>".$i*$j."</td>";
                    }
                echo "</tr>";
            }
        ?>
    </table>
</body>
</html>