<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Funkcje tablic</title>
</head>
<body>
    <?php
        function wyswietl(array $tab) : void {
            foreach($tab as $index => $element){
                echo "[".$index."]=>".$element . " ";
            }
            echo "<br>";
        }
    
        $kolory = array("zielony", "niebieski", "czerwony", "biały", "czarny");

        wyswietl($kolory);

        echo "<pre>";
        var_dump($kolory); //zrzut danych
        echo "</pre>";

        //Funkcje sortujące

        //sort($kolory); //sortuje rosnąco po wartościach - zmienia tablicę źródłową
        rsort($kolory); //sortuje malejąco po wartościach - zmienia tablicę źródłową

        wyswietl($kolory);

        $uczen = [
            'imie' => "Tomek",
            'nazwisko' => "Atomek",
            'klasa' => "2TIP",
            'wiek' => 16
        ];
        
        wyswietl($uczen);
        //asort($uczen); //sortuje rosnąco po wartościach - zmienia tablicę źródłową
        //arsort($uczen); //sortuje malejąco po wartościach - zmienia tablicę źródłową
        //ksort($uczen); //sortuje rosnąco po kluczach (indeksach)
        krsort($uczen); //sortuje malejąco po kluczach (indeksach)
        wyswietl($uczen);

        //Funkcje dodawania i odejmowania elementów
        $kolory[] = "pomarańczowy";
        array_push($kolory, "różowy"); //dodawanie na koniec
        $ostatni = array_pop($kolory); //Usuwa i zwraca ostatni element
        echo $ostatni . "<br>";
        array_unshift($kolory, "żółty", "morski"); //Dodaje elementy na początek tablicy
        array_shift($kolory); //Usuwa element z początku;
        //unset($kolory[3]); //Usuwa element o podanym indeksie, ale zostawia "dziurę" tablicy;
        //array_splice($kolory, 2, 1); //Usuwa elementy od danego indeksu, ze wskazaniem ile
        array_splice($kolory, 2, 1, ["zielony", "brązowy"]); //Może też jednocześnie dodawać elementy w dane miejsce
        wyswietl($kolory);

        //Funkcje wyszukiwania elementów
        if(array_key_exists(7, $kolory)) echo $kolory[7] . "<br>"; //sprawdza czy dany indeks istnieje w tablicy
        else echo "Nie ma takiego indeksu";

        if(in_array("czarny", $kolory)) echo "Czarny znajduje się w tablicy<br>"; //Sprawdza czy dana wartość występuje w tablicy

        $klucz = array_search("zielony", $kolory); //Zwraca klucz elementu lub false
        echo $klucz . "<br>";
    ?>
</body>
</html>