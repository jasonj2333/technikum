<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Instrukcje sterujące</title>
</head>
<body>
    <h1>Instrukcje sterujące</h1>
    <h2>if.. elseif ..else</h2>
    <?php 
        $wiek = 15;
        if($wiek >= 18){
            echo "<p>Możesz zrobić prawo jazdy</p>";
        } 
        elseif($wiek == 17){
            echo "<p>Możesz zrobić prawo jazdy kategorii B i jeździć pod nadzorem</p>";
        }
        else {
            echo "<p>Niestety nie możesz robić prawa jazdy</p>";
        }
    
    ?>

    <h3>switch</h3>
    <?php 
        //var_dump(date('N'));
        $dzienTygodnia = (int) date('N');
        switch ($dzienTygodnia) {
            case 1:
                echo "<p>Poniedziałek</p>";
                break;
            case 2:
                echo "<p>Wtorek</p>";
                break;
            case 3:
                echo "<p>Środa</p>";
                break;
            case 4:
                echo "<p>Czwartek</p>";
                break;
            case 5:
                echo "<p>Piątek</p>";
                break;
            case 6:
            case 7:
                echo "<p>Weekend</p>";
                break;
            
            default:
                echo "<p>Nie ma takiego dnia tygodnia</p>";
                break;
        }
    ?>

    <h3>Operator trójargumentowy</h3>
    <?php 
        $liczba = 6;
        echo $liczba % 2 == 0 ? "parzysta" : "nieparzysta";
    ?>

    <h3>Pętla for</h3>
    <?php 
        for($i = 0; $i < 10; $i++){
            echo "<p>".($i+1). ". Będę się uczył PAI</p>";
        }
    ?>

    <h3>Pętla while</h3>
    <?php 
        $liczba = -5;
        while($liczba < 10){
            echo "<p>Liczba wynosi: $liczba - kwadrat liczby to ". $liczba ** 2 ."</p>";
            $liczba++;
        }
    ?>

    <h3>do..while</h3>
    <?php 
        $liczba = 12;
        do{
            echo "<p>Liczba wynosi: $liczba - kwadrat liczby to ". $liczba ** 2 ."</p>";
            $liczba++;
        }while($liczba < 10);
    ?>

    <h3>foreach</h3>
    <?php 
        $kolory = ["żółty", "niebieski", "fioletowy", "biały"];
        echo $kolory[2] . "<br>";
        foreach ($kolory as $kolor) {
            echo "<p>Mój kolor to: $kolor</p>";
        }

        for($i = 0; $i < count($kolory); $i++){
            if($kolory[$i] == "niebieski") continue; //Przerwij obecną iteracje i przejdź do następnej
            echo "<p>Kolor to: {$kolory[$i]}</p>";  
        }

        $liczba = 1;
        while($liczba < 100){
            if($liczba == 22) {
                $liczba++;
                continue;
            }
            if($liczba > 60) break; //przerywa pętle
            echo $liczba . " ";
            $liczba+=3;
        }
    ?>


</body>
</html>