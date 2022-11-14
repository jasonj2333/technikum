<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Pętle</title>
    <style>
        #wrapper{
            width:600px;
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
            <h1>Pętle</h1>
            <form action="" method="post">
                <input type="number" name="num">
                <input type="submit" value="Generuj">
            </form>
            <?php 
                if(isset($_POST['num'])){
                    $a = $_POST['num'];
                }
            ?>
            <table>
                <tr>
                    <th>WHILE</th>
                    <th>DO WHILE</th>
                    <th>FOR</th>
                </tr>
                <tr>
                    <td>
                        <!-- WHILE -->
                        <?php
                        
                        if(isset($_POST['num'])){ 
                            $i = 1;

                            while ($i <= $a) {
                               echo $i . '<br>';
                               $i++;
                            }
                        }
                        ?>
                    </td>
                    <td>
                        <!-- DO WHILE -->
                        <?php
                        
                        if(isset($_POST['num'])){
                            $i = 1;

                            do {
                               echo $i . '<br>';
                               $i++;
                            } while ($i <= $a);
                        }
                        ?>
                    </td>
                    <td>
                        <!-- FOR -->
                        <?php
                        
                        if(isset($_POST['num'])){
                            for($i=1; $i<=$a; $i++)
                               echo $i . '<br>';
                        }
                        ?>
                    </td>
                </tr>
            </table>
    </div>
</body>
</html>