//Funkcje wbudowane
// let imie = prompt("Podaj imie");
// alert("Witaj " + imie);

//Definicja funkcji
function hello(imie = "Nieznajomy"){
    document.writeln("Cześć "+ imie +"<br>");
    document.writeln("Piękny mamy dzień <br>");
}

//Wywołanie funkcji
hello("Tomek");
hello("Zosia");
hello("Ala");
hello();

function suma(a, b){
    let wynik = a + b;
    return wynik; //zwróc wynik, zakończ funkcje
    document.writeln("Koniec funkcji"); //To się nigdy nie wykona
}

console.log( suma(5, 9) );
console.log( suma("Ala", " ma kota") );

function iloczyn(a, b){
    return a * b;
}

document.writeln( iloczyn(3, 8) );
let tabliczkaMnozenia = iloczyn(8, 9);
console.log(tabliczkaMnozenia)

function iloraz(a, b){
    if(b == 0){
        return "Przez zero nie dzielimy";
    }
    return a / b;
}

console.log(iloraz(4, 0));
console.log(iloraz(4, 5));
//console.log(iloraz("Tomek", "Atomek"));

let wiek = prompt("Ile masz lat?");

function czyPelnoletni(lata){
    if(lata > 18) return true;
    return false;
}

if( czyPelnoletni(wiek) ){
    document.writeln("Jesteś pełnoletni");
}else{
    document.writeln("Nie jesteś pełnoletni");
}