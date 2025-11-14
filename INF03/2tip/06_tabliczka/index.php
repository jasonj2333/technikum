<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Tabliczka mnożenia</title>
    <style>
        table{
            width: 400px;
            margin: 30px auto;
            border-collapse: collapse;
        }
        td, th{
            border: 1px solid black;
            text-align:center;
            min-width: 40px;
            padding: 5px;
        }
    </style>
</head>
<body>
    <section>
        <h1>Tabliczka mnożenia</h1>
        <form action="" method="post">
            <label for="rows">Wiersze</label>
            <input type="number" name="rows" id="rows">
            <label for="cols">Kolumny</label>
            <input type="number" name="cols" id="cols">
            <button>Generuj</button>
        </form>
        <?php 
            //var_dump($_POST['rows']);
            if(isset($_POST['rows'])){
                $rows = $_POST['rows'];
                $cols = $_POST['cols'];
            }else{
                $rows = 10;
                $cols = 10;
            }
        ?>
        <table>
            <?php 
                for($i = 0; $i<=$rows; $i++){
                    echo"<tr>";
                    for($j = 0; $j<=$cols; $j++){ 
                        if($i == 0 && $j==0) echo "<th>X</th>";
                        elseif($i == 0) echo "<th>" . $j ."</th>";
                        else if($j == 0) echo "<th>" . $i ."</th>";
                        else echo "<td>" . $i * $j ."</td>";
                    }
                    echo"</tr>";
                }
            ?>
        </table>
    </section>
</body>
</html>