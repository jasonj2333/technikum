<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Kalendarz</title>
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
        }
    </style>
</head>
<body>
    <div id="wrapper">
            <?php
                $miesiace = [
                    'styczeń',
                    'luty',
                    'marzec',
                    'kwiecień',
                    'maj',
                    'czerwiec',
                    'lipiec',
                    'sierpień',
                    'wrzesień',
                    'październik',
                    'listopad',
                    'grudzień',
                ];

                $tydzien = [
                    'Pon',
                    'Wto',
                    'Śro',
                    'Czw',
                    'Pią',
                    'Sob',
                    'Nie',
                ];
            ?>
            <h1>Kalendarz</h1>
            <form action="" method="post">
            <label for="miesias">Miesiąc:</label>
                <select name="miesiac" id="miesiac">
                    
                    <?php
                        foreach($miesiace as $m=>$d){
                            echo "<option value='$m'>$miesiace[$m]</option>";
                        } ;
                    ?>
                </select>
                <input type="submit" value="Generuj">
            </form>
                <?php 
                $year = date('Y');
                if(isset($_POST['miesiac'])){
                    $m = $_POST['miesiac']; 
                }else{
                    $m = date('n')-1;
                }
                $first = mktime(0,0,0,$m+1,1,$year);
                $last = date('t', $first);
                $t = date('N', $first)-1;
                
                ?>
                <h1>
                    <?php echo $miesiace[$m] ?>
                    </h1>
                <table>
                    <tr>
                    <?php
                        foreach($tydzien as $v){
                            echo "<th>$v</th>";
                        } ;
                    ?>
                    </tr>
                    <tr>
                    <?php 
                        
                        $tr = 0;
                        for ($i=1-$t; $i <= $last; $i++) {
                            $tr++;
                            echo ($i>0) ? "<td>$i</td>" : "<td>&nbsp;</td>";
                            if($tr%7 == 0) {
                                echo "</tr><tr>";
                            }
                        }
                    ?>
                </table>
            
    </div>
</body>
</html>