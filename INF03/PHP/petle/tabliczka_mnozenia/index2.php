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
                <input type="button" value="Reset" onClick="window.location.replace('index2.php')">
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
            <p>Vanilla JS version - <a href="index3.php">go to jQuery Version</a></p>
    </div>
    <script>
        
        window.onload = function(){
            function resetBackTD(){
                const tableTd = document.querySelectorAll('td');
                tableTd.forEach(t => {
                    t.classList.remove("orangeBack");
                });
            };

            function resetClickClassCol(){
                const colClass = document.querySelector('td.clickClassCol');
                if(colClass) colClass.classList.remove("clickClassCol");
            }

            function resetBackTR(){
                const tableTr = document.querySelectorAll('tr');
                tableTr.forEach(tr => {
                    tr.classList.remove("yellowBack");
                });
            };

            function resetClickClassRow(){
                const rowClass = document.querySelector('td.clickClassRow');
                if(rowClass) rowClass.classList.remove("clickClassRow");
            }

            function setGreen(){
                const tableTd = document.querySelectorAll('td');
                tableTd.forEach(t => {
                    t.classList.remove("greenBack");
                    let colClass = t.classList.contains("orangeBack");
                    let rowClass = t.parentNode.classList.contains("yellowBack");
                    if(colClass && rowClass) t.classList.add("greenBack");
                });
            };

            function resetAll(){
                resetBackTD();
                resetBackTR();
                setGreen();
                
            };
                       
            const cols = document.querySelectorAll('.cols');
            const rows = document.querySelectorAll('.rows');
            const reset = document.querySelector('#reset');

            reset.onclick = function resetAll(){
                resetBackTD();
                resetBackTR();
                setGreen();
                resetClickClassCol();
                resetClickClassRow();
            };

            cols.forEach((col)=>{
                col.addEventListener("click", ()=>{
                    resetClickClassCol();
                    resetBackTD();
                    const cls = '.'+ col.id;
                    col.classList.add("clickClassCol");
                    const columns = document.querySelectorAll(cls);
                    columns.forEach((column)=>{
                        column.classList.add("orangeBack");
                    });
                    setGreen();
                })
            });

            rows.forEach((row)=>{
                row.addEventListener("click", ()=>{
                    resetClickClassRow();
                    resetBackTR();
                    row.parentNode.classList.add("yellowBack");
                    row.classList.add("clickClassRow");
                    setGreen();
                })
            });
        }
    </script>
</body>
</html>