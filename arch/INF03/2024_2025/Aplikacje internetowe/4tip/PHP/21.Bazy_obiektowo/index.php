<?php

$conn = new mysqli('localhost', 'root', '', '4tip_test');

$query = "SELECT nazwa, cena FROM dania";
$result = $conn->query($query);

//Do rozpakowania wyników można użyć następujących metod
//$row = $result->fetch_row() //pola tablicy będą indeksowane liczbami od 0 np. $row[0];
//$row = $result->fetch_assoc() //uzyskamy tablicę asocjacyjną - indeksy zgodne nazwami kolumn w bazie lub z aliasami jeśli stworzymy takie w zapytaniu
//$row = $result->fetch_array() //tablica z podwójnymi danymi - dostępne indeksy zarówno numeryczne jak i asocjacyjne
//Poniższy przykład tworzy obiekt: $row = $result->fetch_object(), zamiast tablic dostajemy obiekt i za pomocą operatora -> dostajemy się do poszczególnych pól obiektu, nazwy zgodne z nazwami kolumn w bazie lub aliasami jeśli stworzymy takie w zapytaniu
                    

if( $result->num_rows > 0 ){
    while($row = $result->fetch_object()){
        echo "<p>$row->nazwa - $row->cena zł</p>";
    }

}else{
    echo "<p>Brak wyników</p>";
}

$conn->close();

