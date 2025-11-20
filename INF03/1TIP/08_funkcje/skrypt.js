//Definicja funkcji
function funkcja(){
    document.writeln("Jestem funkcją o nazwie funkcja <br>");
};

//Wywołanie funkcji
funkcja();
funkcja();
funkcja();

function suma(a, b){
    let wynik = a + b;
    return wynik;
}

let dodawanie = suma(5, 7);
document.writeln("Wynik dodawania: " + dodawanie);
document.writeln("<br>Wynik dodawania: " + suma(11, 9));
document.writeln("<br>Wynik konkatenacji: " + suma("Tomek ", "Atomek"));

function roznica(a, b){
    return a - b;
}

document.writeln("<br>Wynik odejmowania: " + roznica(11, 9));
document.writeln("<br>Wynik odejmowania: " + roznica(6, 12));
document.writeln("<br>Wynik odejmowania: " + roznica(16, 4));

function iloraz(a, b){
    if(b==0) return "Błąd dzielenia przez 0";
    return a / b;
}

document.writeln("<br>Wynik dzielenia: " + iloraz(16, 4));
document.writeln("<br>Wynik dzielenia: " + iloraz(16, 0));