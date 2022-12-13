<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Dzień tygodnia</title>
    <style>
        #wrapper{
            width:600px;
            margin: 30px auto;
            text-align: center;
        }
    </style>
</head>
<body>
    <div id="wrapper">
        <h1>Dzień tygodnia</h1>
        <form action="" method="post">
            <input type="number" name="num">
            <input type="submit" value="Sprawdz">
        </form>

        <?php
            if(isset($_POST['num'])){
                $day = $_POST['num'];
                echo "<p>Dzien $day, ";
                switch ($day) {
                    case 1:
                        echo "Poniedziałek";
                        break;
                    case 2:
                        echo "Wtorek";
                        break;
                    case 3:
                        echo "Środa";
                        break;
                    case 4:
                        echo "Czwartek";
                        break;
                    case 5:
                        echo "Piątek";
                        break;
                    case 6:
                    case 7:
                        echo "Weekend";
                        break;
                    default:
                        echo "Nie ma takiego dnia";
                        break;
                }
                echo "<p>";
            } 
        ?>
    </div>
    
</body>
</html>