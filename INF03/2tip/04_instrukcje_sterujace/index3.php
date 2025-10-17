<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Taryfa energetyczna</title>
</head>
<body>
    <h1>Taryfa energetyczna</h1>
    <p>Wybierz taryfę:</p>
    <form action="">
        <select name="taryfa" id="taryfa">
            <option value="domowa">Taryfa domowa</option>
            <option value="firmowa">Taryfa firmowa</option>
            <option value="przemyslowa">Taryfa przemysłowa</option>
            <option value="rolnicza">Taryfa rolnicza</option>
        </select>
        <button>Sprawdź</button>
    </form>
    <div>
        <?php 
            $taryfa = (isset($_GET['taryfa'])) ? $_GET['taryfa'] : 'domowa';
            //switch($taryfa)
            //domowa: 0.75 zł za 1 kWh
            //firmowa: 1.10 zł za 1 kWh
            //przemysłowa: 2.20 zł za 1 kWh
            //rolnicza: 0.65 zł za 1 kWh
            //default: Nieznany typ taryfy
            switch ($taryfa) {
                case 'domowa':
                    echo"<p>0.75 zł za 1 kWh</p>";
                    break;

                case 'firmowa':
                    echo"<p>1.10 zł za 1 kWh</p>";
                    break;

                case 'przemyslowa':
                    echo"<p>2.20 zł za 1 kWh</p>";
                    break;

                case 'rolnicza':
                    echo"<p>0.65 zł za 1 kWh</p>";
                    break;
                
                default:
                    echo"<p>Nieznany typ taryfy</p>";
                    break;
            }
        ?>
    </div>
</body>
</html>