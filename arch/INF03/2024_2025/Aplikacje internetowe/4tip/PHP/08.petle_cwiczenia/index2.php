<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Tabliczka mnożenia</title>
    <style>
        table{
            width: 400px;
            border-collapse: collapse;
        }

        td{
            border: 1px solid black;
            padding: 5px;
            text-align: center;
        }
    </style>
</head>
<body>
    <h1>Tabliczka mnożenia</h1>
    <?php 
        $row = 10;
        $col = 10;
    ?>
    <table>
        <?php 
            for($i = 0; $i <= $row; $i++){
                echo "<tr>";
                    for($j=0; $j <= $col; $j++){
                        if($i == 0 & $j == 0) echo"<td> &nbsp; </td>";
                        elseif($i == 0) echo"<td> <b> $j </b> </td>";
                        elseif($j == 0) echo"<td> <b> $i </b> </td>";
                        else echo"<td>".  $i * $j ."</td>";
                    }
                echo "</tr>";
            }
        ?>
    </table>

</body>
</html>