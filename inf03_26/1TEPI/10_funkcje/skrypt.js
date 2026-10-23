//Funkcja wbudowana
//alert("Działa");

//Definicja funkcji
function suma(a, b){
    sum = a + b;
    return sum;
    document.writeln("Koniec funkcji"); //Ten kod się nigdy nie wykona, return kończy funkcje.
}

//Wywołanie funkcji
document.writeln( suma(5, 6) + "<br>");
let wynik = suma(3, 9);
console.log(wynik);
let tekst = suma("abc", "xyz");
console.log(tekst);

function hello(imie = "Anonim"){
    document.writeln("<p>Witaj "+ imie +", piękny mamy dzisiaj dzień</p>");
}

hello("Tomek");
hello("Ania");
hello();
console.log(hello());

let odp = prompt("Ile masz lat? ");

function czyPelnoletni(wiek){
    wiek = Number(wiek);
    return wiek >= 18;
}

if(czyPelnoletni(odp)){
    document.writeln("Jesteś pełnoletni");
}else{
    document.writeln("Nie jesteś pełnoletni");
}
