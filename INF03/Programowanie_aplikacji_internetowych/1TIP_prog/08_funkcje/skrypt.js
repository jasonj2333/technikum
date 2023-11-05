//Funkcje zdefiniowane przez użytkownika
//Definicja funkcji
function funkcja(){
    document.write("Jestem funkcją o nazwie funkcja:)<br>");
}

//Funkcje wbudowane
//alert('Hello');
//let imie = prompt('Podaj imie');

//Wywołanie funkcji
funkcja();
funkcja();
funkcja();

function suma(a, b) {
    let wynik = a + b;
    return wynik;
}

function iloraz(a, b) {
    if(b == 0) return "Błąd nie dzielimy przez zero!";
    let wynik = a/b;
    return wynik;
}

let w = suma(5, 8)
let i = iloraz(4, 0);
document.write( i );
