<?php
    include './includes/class-autoloader.inc.php';
    $weather = new Weather();
    // $weather->createTables();
    // $weather->createFakeData();
?>
<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Kalendarz pogody</title>
    <style>
        body{
            background-color: #e2ded5;
        }
        #wrapper{
            width:90vw;
            margin: 30px auto;
            text-align: center;
        }
        table{
            border-collapse: collapse;
            width: 60%;
            margin: 20px auto;
        }
        th, td{
            border: 1px solid black;
            padding: 15px;
        }
    </style>
</head>
<body>
    <div id="wrapper">
        <h1>Kalendarz pogody</h1>
        <form action="./includes/addWeather.php" method="post">
            <label for="measurementDate">Data pomiaru</label>
            <input type="text" name="measurementDate" value="<?php echo date('Y-m-d'); ?>">
            <label for="temperature">Pogoda</label>
            <select name="weatherId" id="weatherId">
                <?php
                    $rows = $weather->getWeatherTypes();
                    foreach($rows as $row){
                        echo '<option value="'.$row['types_id'].'">'.$row['types_desc'].'</option>';
                    }
                        
                ?>
            </select>           
            <label for="temperature">Temperatura - rano</label>
            <input type="number" name="temperature1" >
            <label for="temperature">Temperatura - wieczorem</label>
            <input type="number" name="temperature2" >
            <label for="comments">Komentarz</label>
            <input type="text" name="comments" >
            <input type="submit" value="Dodaj" >
        </form>
        <table>
            <tr>
                <th>ID</th>
                <th>Data pomiaru</th>
                <th>Pogoda</th>
                <th>Temperatura - rano</th>
                <th>Temperatura - wieczorem</th>
                <th>Komentarz</th>
            </tr>
            <?php 
                    $rows = $weather->getLastWeek();
                    foreach($rows as $row):
            ?>
                <tr>
                    <td><?php echo $row['id'] ?></td>
                    <td><?php echo $row['measurementDate'] ?></td>
                    <td><img src="./img/<?php echo $row['types_icon'] ?>" alt="<?php echo $row['types_desc'] ?>"></td>
                    <td><?php echo $row['temperatureMorning'] ?></td>
                    <td><?php echo $row['temperatureEvening'] ?></td>
                    <td><?php echo $row['comments'] ?></td>
                    
                </tr>
            <?php endforeach; ?>
        </table>
    </div>
    
</body>
</html>