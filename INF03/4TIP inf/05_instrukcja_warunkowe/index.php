<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Instrukcje warunkowe</title>
</head>
<body>
    <h1>Instrukcje warunkowe</h1>
    <?php 
        $x = 10;
        $y = 5;
        if($x > $y){
            echo "<p>$x jest większe niż $y</p>";
        }
        echo "<p>Koniec programu</p>";

        $a = 0;
        $b = 5;
        if($a > 0 && $b > 0){
            echo "<p>Pole prostokąta o boku=$a i boku=$b wynosi ". $a * $b."</p>";
        }else{
            echo "<p>To nie są boki prostokąta</p>";
        }

        $ocena = 11;
        if($ocena == 1){
            echo "<p>Nie uzyskałeś promocji do następnej klasy</p>";
        }
        elseif($ocena > 1 && $ocena < 6){
            echo "<p>Uzyskałeś promocję do następnej klasy</p>";
        }
        elseif($ocena == 6){
            echo "<p>Uzyskałeś promocję z wyróżnienem do następnej klasy</p>";
        }
        else{
            echo "<p>To nie jest prawidłowa ocena szkolna</p>";
        }

        $login = "jan1";
        $pass = "123";
        if($login == "jan"){
            if($pass == "123"){
                echo "<p>Witaj $login</p>";
            }
            else{
                echo "<p>Błędne hasło</p>";
            }
        }else{
            echo "<p>Nie ma takiego użytkownika</p>";
        }

        $dzien_tygodnia = 1;
        switch ($dzien_tygodnia) {
            case 1:
                echo "<p>Poniedziałek - trzeba iść do szkoły</p>";
                break;
            case 2:
                echo "<p>Wtorek - znowu szkoła</p>";
                break;
            case 3:
                echo "<p>Środa - już połowa tygodnia</p>";
                break;
            case 4:
                echo "<p>Czwartek - już blisko do weekendu</p>";
                break;
            case 5:
                echo "<p>Piątek - jeszcze tylko kilka godzin i weekend</p>";
                break;
            case 6:
            case 7:
                echo "<p>Weekend</p>";
                break;
            default:
                echo"<p>To nie jest prawidłowy dzień tygodnia</p>";
                break;
        }
        
        $liczba = -7;
        $wynik = ($liczba < 0) ? "ujemna" : "dodatnia"; //operator warunkowy
        echo $wynik;
    ?>
</body>
</html>