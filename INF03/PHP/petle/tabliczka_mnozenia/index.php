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
        }
    </style>
</head>
<body>
    <div id="wrapper">
            <h1>Tabliczka mnożenia</h1>
            <table>
                <!-- Tutaj skrypt PHP generujący tabliczkę mnożenia -->
                <?php 
                    $row = 20; //Liczba wierszy tabliczki
                    $col = 20; //Liczba kolumn
                ?>
            </table>
            
            
    </div>
</body>
</html>