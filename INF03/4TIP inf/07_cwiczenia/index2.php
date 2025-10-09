<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Zadania</title>
</head>
<body>
    <h2>Zadanie 1</h2>
    <?php 
        $wiek = 65;
        if($wiek < 0 || $wiek > 120){
            echo "<p>Niepoprawnych wiek</p>";
        }else if($wiek <=12){
            echo "<p>Typ biletu dziecięcy, cena: 10 zł</p>";
        }else if($wiek <=26){
            echo "<p>Typ biletu ulgowy, cena: 15 zł</p>";
        }else if($wiek <=59){
            echo "<p>Typ biletu normalny, cena: 25 zł</p>";
        }else{
            echo "<p>Typ biletu senior, cena: 12 zł</p>";
        }
    ?>
    <h2>Zadanie 2</h2>
    <?php 
        for ($i=1; $i <= 50; $i++) {
            if($i % 3 == 0 && $i % 5 == 0){
                echo "FizzBuzz<br>";
            }
            else if($i % 3 == 0){
                echo "Fizz<br>";
            }else if($i % 5 == 0){
                echo "Buzz<br>";
            }else{
                echo $i . "<br>";
            }
            
        }
    ?>
</body>
</html>