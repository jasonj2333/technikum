<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Zadania funkcje</title>
</head>
<body>
    <h1>Zadania funkcje</h1>
    <h2>Zadanie 1</h2>
    <?php 
        function wyswietl($a, $b){
            for ($i=$a; $i <= $b; $i++) { 
                echo "$i ";
            }
        }
        wyswietl(2, 12);
        echo"<br>";
        wyswietl(65, 34);
    ?>

    <h2>Zadanie 2</h2>
    <?php 
        function sumaLiczb($a, $b, $tryb){
            $suma = 0;
            if($tryb == "parzyste"){
                for ($i=$a; $i <= $b; $i++) { 
                    if($i % 2 == 0){
                        $suma += $i;
                    }
                }
            }else if($tryb == "nieparzyste"){
                for ($i=$a; $i <= $b; $i++) { 
                    if($i % 2 != 0){
                        $suma += $i;
                    }
                }
            }

            return $suma;
        }

        function sumaLiczb2($a, $b, $tryb){
            $start = $a;
            if($tryb == "parzyste"){
                if($a % 2 != 0) $start = $a + 1;
            }else if($tryb == "nieparzyste"){
                if($a % 2 == 0) $start = $a + 1;
            }
        
            $suma = 0;
            for($i = $start; $i <= $b; $i+=2){
                $suma += $i;
            }
            return $suma;
        }

        echo sumaLiczb2(2, 14, "parzyste");
        echo "<br>";
        echo sumaLiczb2(2, 14, "nieparzyste");
    ?>
</body>
</html>