//Definicja funkcji
function hello(imie="Gall Anonim"){ //w nawiasie definiujemy parametry funkcji, możemy też zdefiniować wartość domyślną parametru, która zostanie wykorzystana, jeśli nie podany argumentu przy wywołaniu
    document.writeln("Cześć " + imie);
}

//Wywołanie funkcji
hello("Ania"); //przy wywołaniu funkcji w miejsce parametrów podaje argumenty
hello("Konrad");
hello("Wojtek");
hello();

function suma(a, b){
    let wynik = a + b;
    return wynik;
}

let dodawanie = suma(5, 7);
console.log(dodawanie);

document.writeln("<br>Wynik dodawanie " + suma(6, 12));

//Napisz funkcje różnica, która odejmuje dwie liczby i zwraca wynik, a następnie przetestuj działanie funkcji dla argumentów 5, 9 oraz 6,8
function roznica(a, b){
    return a - b;
}

document.writeln("<br>Wynik odejmowania " + roznica(5, 9));
document.writeln("<br>Wynik odejmowania " + roznica(6, 8));

