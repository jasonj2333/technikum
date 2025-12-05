<?php
// Napisz program w PHP, który pozwoli przeanalizować listę ocen ucznia.

// Wymagania programu
// Utwórz tablicę z ocenami (np. [5, 3, 4, 2, 6, 5, 1, 4]).
// Napisz funkcję obliczSrednia($oceny), która:
// 	- używa pętli do zsumowania ocen,
// 	- zwraca średnią.

// Napisz funkcję najwyzszaOcena($oceny), która:
// 	- przechodzi przez tablicę w pętli,
// 	- zwraca najwyższą ocenę.

// Napisz instrukcję warunkową, która na podstawie średniej:
// 	- jeśli średnia >= 4.5 → wypisz „Bardzo dobre wyniki!”
// 	- jeśli średnia >= 3.0 → wypisz „Dobre wyniki.”
// 	- jeśli średnia < 3.0 → wypisz „Musisz popracować.”

// Wyświetl:
// - listę ocen,
// - średnią ocen,
// - najwyższą ocenę,
// - komunikat wynikający z instrukcji warunkowej.

// Przykładowy efekt działania programu
// Oceny ucznia: 5 3 4 2 6 5 1 4
// Średnia ocen: 3.75
// Najwyższa ocena: 6
// Dobre wyniki.

// Podpowiedzi dla ucznia
// Do przejścia przez tablicę możesz użyć foreach lub for.
// Funkcja powinna zwracać (return) wynik – nie tylko go wyświetlać.
// Do sprawdzania warunków użyj if, elseif, else.
// Aby policzyć średnią, podziel sumę ocen przez liczbę elementów w tablicy (funkcja count() może pomóc).



function obliczSrednia($oceny){
    $suma = 0;
    foreach($oceny as $ocena){
        $suma += $ocena;
    }
    return $suma / count($oceny);
}

function najwyzszaOcena($oceny){
    $max = $oceny[0];
    foreach($oceny as $ocena){
        if($ocena > $max) $max = $ocena;
    }
    return $max;
}


$oceny = [5, 3, 4, 2, 6, 5, 1, 4];
$srednia = obliczSrednia($oceny);
echo $srednia;
echo "<br>";
echo najwyzszaOcena($oceny);
echo "<br>";

if($srednia >= 4.5){
    echo "Bardzo dobre wyniki!";
}
elseif ($srednia >= 3.0) {
    echo "Dobre wyniki.";
}else{
    echo "Musisz popracować.";
}

echo "<br>";
//echo implode(", ", $oceny); //łączy elementy tablicy w jeden ciąg tekstowy
foreach($oceny as $ocena){
    echo $ocena . ", ";
}
