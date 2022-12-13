<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Klasy</title>
</head>
<body>
    <h1>Zadanie klasy</h1>
    <p>Utwórz tablicę o nazwie <b>klasy</b>. Elementami tablicy klasy mają być tablice asocjacyjne zapisanymi informacja o danej klasie: <b>id, liczba_ucz, wychowawca</b>. Tablica powinna zawierać informacje o co najmniej 4 klasach.</p>
    <p>Wyświetl zawartość tablicy przy pomocy poznanych pętli. Jeżeli klucz tablicy asocjacyjnej będzie miał wartość <b>liczba_ucz</b> to zamiast tego wyświetla komunikat <b>liczba uczniów</b>.</p>
    <?php 
        $klasy = [
            [
                'id' => "1A",
                'liczba_ucz' => 24,
                'wychowawca' => "Tomek Atomek"
            ],
            [
                'id' => "1B",
                'liczba_ucz' => 28,
                'wychowawca' => "Natalia Kowalska"
            ],
            [
                'id' => "2A",
                'liczba_ucz' => 27,
                'wychowawca' => "Wojciech Pasich"
            ],
            [
                'id' => "2B",
                'liczba_ucz' => 31,
                'wychowawca' => "Alicja Kowalska"
            ],
        ];

        foreach($klasy as $klasa){
            foreach($klasa as $key=>$value){
                // if($key != "liczba_ucz") echo "<p>$key: $value</p>";
                // else echo "<p>liczba uczniów: $value</p>";

                echo ($key != "liczba_ucz") ? "<p>$key: $value</p>" : "<p>liczba uczniów: $value</p>";
            }
            echo "<hr>";
        }
    ?>
</body>
</html>