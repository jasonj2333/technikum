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

//Napisz funkcje obliczającą i zwracającą pole kwadratu o boku a
//Przetestuj funkcje na argumentach 5, 12

function poleKwadratu(a){
    return a * a;
}

document.writeln("<br>");

document.writeln( poleKwadratu(5) + "<br>");
document.writeln( poleKwadratu(12) + "<br>");

//Napisz funkcje srednia(a, b, c), która oblicza i zwraca srednią z podanych argumentów
//Przetestuj działanie funkcji na zestawach liczby 1, 2, 3 oraz 5, 34, 11

function srednia(a, b, c){
    let srednia = (a + b + c) / 3;
    return srednia.toFixed(2);
}

document.writeln(srednia(1, 2, 3) + "<br>");
document.writeln(srednia(5, 34, 11) + "<br>");

let liczby = [5, 3, 4, 6, 71, 67];

function srednia2(tablicaLiczb){
    let suma = 0;
    for(let i = 0; i < tablicaLiczb.length; i++){
        suma += tablicaLiczb[i];
    }
    return suma / tablicaLiczb.length;
}

document.writeln(srednia2(liczby) + "<br>");
document.writeln(srednia2([1, 2, 3]) + "<br>");

//Napisz funkcje opisUcznia(imie, nazwisko, klasa = "nieznana"), która wyświetlić tekst "Uczeń: imie nazwisko, klasa: klasa"
//Uczen: Tomek Atomek, klasa: 3

function opisUcznia(imie, nazwisko, klasa = "nieznana"){
    document.writeln(`Uczeń: ${imie} ${nazwisko}, klasa: ${klasa}`);
}

opisUcznia("Michał", "Podolecki", "3TI");
document.writeln("<br>");
opisUcznia("Tomek", "Atomek");