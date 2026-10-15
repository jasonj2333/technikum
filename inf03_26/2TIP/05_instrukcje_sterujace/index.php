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

echo "<h2>Pętla while</h2>";
$liczba = -5;
while($liczba < 10){
    echo "<p>Liczba wynosi $liczba, kwadrat liczby to: ".$liczba ** 2 ."</p>";
    $liczba += 2;
}

echo "<h2>Pętla do .. while</h2>";
do{
    echo "<p>Liczba wynosi $liczba, kwadrat liczby to: ".$liczba ** 2 ."</p>";
    $liczba += 2;
}while($liczba < 20);

echo "<h2>Pętla foreach</h2>";
$kolory = ["żółty", "niebieski", "czerwony", "pomarańczowy"];
echo $kolory[2] . "<br>";

foreach($kolory as $kolor){
    echo "<p>Mój kolor to $kolor</p>";
}

for($i = 0; $i < count($kolory); $i++){
    if($i == 2) continue; //przerwij bieżącą iteracje i przejść do kolejnego powtórzenia pętli
    echo "<p>" . $i+1 . ". $kolory[$i]</p>";
}

$liczba = 1;
while($liczba < 100){
    if($liczba == 83) break; //przerywa pętle
    if($liczba % 3 == 0) {
        $liczba+=2;
        continue;
    }
    echo $liczba." ";
    $liczba++;
}
echo "<br>";