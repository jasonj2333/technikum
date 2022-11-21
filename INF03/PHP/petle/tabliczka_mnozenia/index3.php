<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Tabliczka mnożenia</title>
    <style>
        #wrapper{
            width:90vw;
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
            padding: 10px;
        }
        .yellowBack{
            background-color: yellow;
        }
        .orangeBack{
            background-color: orangered;
        }
        .greenBack{
            background-color: green;
            font-weight: bold;
            color: white;
            font-size: 22px;
        }
        
        #reset{
            background-color: red;
            color: white; 
            cursor: pointer;
        }
        .rcTD{
            background-color:darkslategray;
            font-weight: bold;
            color: white;
            font-size: 18px;
        }
        .clickClassCol, .clickClassRow{
            background-color:blueviolet;
        }
    </style>
</head>
<body>
    <div id="wrapper">
            <?php 
                if(isset($_POST['rows'])&&isset($_POST['cols'])){
                    $row = $_POST['rows'];
                    $col = $_POST['cols'];
                }else{
                    $row = 10;
                    $col = 10;
                }
            ?>
            <h1>Tabliczka mnożenia</h1>
            <form action="" method="post">
                <label for="rows">Wiersze</label>
                <input type="number" name="rows" value="<?php echo $row ?>">
                <label for="cols">Kolumny</label>
                <input type="number" name="cols" value="<?php echo $col ?>">
                <input type="submit" value="Generuj">
                <input type="button" value="Reset" onClick="window.location.replace('index3.php')">
            </form>
            
            <table>
                <?php 
                    for ($i=0; $i <= $row ; $i++) {
                        echo"<tr>";
                        for ($j=0; $j <= $col; $j++) {
                            if($i==0 && $j==0)  echo "<td id='reset'> <b>RST</b> </td>";
                            elseif($i==0)  echo "<td id='col".$j."' class='cols rcTD'> <b>".$j."</b> </td>";
                            elseif($j==0)  echo "<td class='rows rcTD'> <b>".$i."</b> </td>";
                            else echo "<td class='col".$j."'> ". $i * $j ." </td>";
                        }
                        echo"</tr>";
                    }
                ?>
            </table>
            
            <p style="margin-top: 100px;"><a href="index.php">SimpleDemo by Jasonj</a></p>
            <p>jQuery version - <a href="index2.php">go to Vanilla JS Version</a></p>
    </div>
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.6.1/jquery.min.js"></script>

    <script>
        function resetBackTD(){
            $('td').removeClass("orangeBack");
        };

        function resetBackTR(){
            $('tr').removeClass("yellowBack");
        };

        function resetClickClassCol(){
            $('td.clickClassCol').removeClass("clickClassCol");
        }

        function resetClickClassRow(){
            $('td.clickClassRow').removeClass("clickClassRow");
        }

        function setGreen(){
            $('td').removeClass("greenBack");
            $('tr.yellowBack').find('td.orangeBack').addClass("greenBack");
            //console.dir($('tr.yellowBack').find('.orangeBack'));
        };

        function resetAll(){
            resetBackTD();
            resetBackTR();
            setGreen();
            resetClickClassCol();
            resetClickClassRow();
            
        };

        $('#reset').on("click", ()=>{
            resetAll();
        });

        $('td.cols').on("click", (c)=>{
            //console.dir(c.target.closest('td').id);
            resetClickClassCol();
            resetBackTD();
            const cls = '.'+ c.currentTarget.id;
            const idx = '#' + c.currentTarget.id;
            $(idx).addClass("clickClassCol");
            $(cls).addClass("orangeBack");
            setGreen();
        });

        $('td.rows').on("click", (c)=>{
            console.dir(c.currentTarget);
            resetClickClassRow();
            resetBackTR();
            $(c.currentTarget).addClass("clickClassRow");
            $(c.currentTarget.parentNode).addClass("yellowBack");
            setGreen();
        });
        
    </script>
</body>
</html>