<?php 

$wiek = 17;

echo "<h2>if ..elseif .. else</h2>";

if($wiek >= 18){
    echo "Możesz zrobić prawo jazdy";
}
elseif($wiek == 17){
    echo "Możesz zrobić prawo jazdy za zgoda rodziców i jeździć pod nadzorem";
}
else{
    $ile = 18 - $wiek;
    echo "Będziesz mógł zrobić prawo jazdy za $ile lat";
}

echo "<h2>switch</h2>";
$dzienTygodnia = (int)date('N');
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
        echo "<p>Nie znam takiego dnia tygodnia</p>";
        break;
}

echo "<h2>Operator trójargumentowy</h2>";
$liczba = 6;
echo $liczba % 2 == 0 ? 'parzysta' : 'nieparzysta';

echo "<h2>Pętla for (instrukcja iteracyjna)</h2>";
for($i = 1; $i <= 10; $i++){
    echo "<p>$i. Będę się uczył PAI</p>";
}