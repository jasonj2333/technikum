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
                    'styczeń' => 31,
                    'luty' => 28,
                    'marzec' => 31,
                    'kwiecień' => 30,
                    'maj' => 31,
                    'czerwiec' => 30,
                    'lipiec' => 31,
                    'sierpień' => 31,
                    'wrzesień' => 30,
                    'październik' => 31,
                    'listopad' => 30,
                    'grudzień' => 30,
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
                            echo "<option value='$m'>$m</option>";
                        } ;
                    ?>
                </select>
                
                <label for="tydzien">1 wypada w:</label>
                <select name="tydzien" id="tydzien">
                    
                    <?php
                        foreach($tydzien as $k=>$v){
                            echo "<option value='$k'>$v</option>";
                        } ;
                    ?>
                </select>
                <input type="submit" value="Generuj">
            </form>
            <?php if(isset($_POST['miesiac'])):?>
                <?php 
                    $m = $_POST['miesiac'];
                    $t = $_POST['tydzien'];    
                ?>
                <h1>
                    <?php echo $m ?>
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
                        for ($i=1-$t; $i <= $miesiace[$m]; $i++) {
                            $tr++;
                            echo ($i>0) ? "<td>$i</td>" : "<td>&nbsp;</td>";
                            if($tr%7 == 0) {
                                echo "</tr><tr>";
                            }
                        }
                    ?>
                </table>
            <?php endif;?>
            
    </div>
</body>
</html>