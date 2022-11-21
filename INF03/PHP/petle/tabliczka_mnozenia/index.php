<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Tabliczka mnożenia</title>
    <style>
        #wrapper{
            width:1000px;
            margin: 30px auto;
            text-align: center;
        }
        table{
            border-collapse:collapse;
            width: 400px;
            margin: 20px auto;
        }
        td,th {
            border: 1px solid black;
            min-width: 40px;
            padding: 5px;
        }
    </style>
</head>
<body>
    <div id="wrapper">
            <h1>Tabliczka mnożenia</h1>
            <form action="" method="post">
                <label for="rows">Wiersze</label>
                <input type="number" name="rows" value="10">
                <label for="cols">Kolumny</label>
                <input type="number" name="cols" value="10">
                <input type="submit" value="Generuj">
            </form>
            <?php 
                if(isset($_POST['rows'])&&isset($_POST['cols'])){
                    $row = $_POST['rows'];
                    $col = $_POST['cols'];
                }else{
                    $row = 10;
                    $col = 10;
                }
            ?>
            <table>
                <?php 
                    for ($i=0; $i <= $row ; $i++) {
                        echo"<tr>";
                        for ($j=0; $j <= $col; $j++) {
                            if($i==0 && $j==0)  echo "<td> <b>&nbsp;</b> </td>";
                            elseif($i==0)  echo "<td> <b>".$j."</b> </td>";
                            elseif($j==0)  echo "<td> <b>".$i."</b> </td>";
                            else echo "<td> ". $i * $j ." </td>";
                        }
                        echo"</tr>";
                    }
                ?>
            </table>
            
            <p style="margin-top: 100px;"><a href="index2.php">FullDemo by Jasonj</a></p>
            
    </div>
</body>
</html>