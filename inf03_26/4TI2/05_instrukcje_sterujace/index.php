<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Instrukcje sterujące</title>
</head>
<body>
    <h1>Instrukcje sterujące</h1>
    <h2>if elseif else</h2>
    <?php 
        $wiek = 17;
        if($wiek >=18){
            echo "<p>Możesz zrobić prawo jazdy</p>";
        }
        elseif($wiek >=17){
            echo"<p>Możesz zrobić prawo jazdy kategorii B i jeździć pod nadzorem</p>";
        }
        else{
            echo "<p>Nie możesz zrobić prawa jazdy</p>";
        }
    ?>
    
    <h2>switch</h2>
    
    <?php
        //var_dump(date('N')); 
        $dzienTygodnia = date('N');
        switch($dzienTygodnia){
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
                echo "Sobota";
                break;  
            case 7:
                echo "Niedziela";
                break;
            default:
                echo "Nie ma takie dnia tygodnia";  
        }
    ?>

    <h2>Operator trójargumentowy</h2>
    <?php 
        $wiek = 21;
        echo $wiek >= 18 ? "pełnoletni" : "niepełnoletni";
    
    ?>

    <h2>Pętla for</h2>
    <?php 
        for($i = 0; $i<10; $i++){
            echo "<p>".($i + 1).". Będę się uczył PAI</p>";
        }
    ?>
    <h3>Pętla while</h3>
    <?php 
        $liczba = 2;
        while($liczba < 10){
            echo "Liczba wynosi: $liczba - kwadrat naszej liczby to " .($liczba * $liczba) . "<br>";
            $liczba++;
        }
    ?>

    <h3>Pętla do..while</h3>
    <?php 
        $liczba2 = 5;
        do {
            echo "Moja liczba to: $liczba2 <br>";
            $liczba2 += 2;      
        }while($liczba2 < 12);
    
    ?>

    <h2>Foreach (pętla dla tablic)</h2>
    <?php 
        $kolory = ["czerwony", "zielony", "żółty", "niebieski"];
        foreach($kolory as $kolor){
            echo "$kolor <br>";
        }
    ?>

</body>
</html>