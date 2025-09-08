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
    <form action="" method="post">
        <label for="rows">Wiersze</label>
        <input type="number" id="rows" name="rows" value="10">
        <label for="cols">Kolumny</label>
        <input type="number" id="cols" name="cols" value="10">
        <button>Generuj</button>
    </form>
    <br>
    <?php 
        $row = 10;
        $col = 10;

        if(isset($_POST['rows'])){
            if(!empty($_POST['rows'])) $row = $_POST['rows'];
            if(!empty($_POST['cols'])) $col = $_POST['cols'];
        }
        
    ?>
    <table>
        <?php 
            for($i = 0; $i <= $row; $i++){
                echo "<tr>";
                    for($j=0; $j <= $col; $j++){
                        if($i == 0 && $j == 0) echo"<td> &nbsp; </td>";
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