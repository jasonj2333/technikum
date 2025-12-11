//Definicja funkcji
function czesc(){
    document.writeln("Cześć <br>");
}

//Wywołanie funkcji
czesc();
czesc();
czesc();

function hello(imie = "nieznajomy"){ //parametr funkcji
    document.writeln("Witaj " + imie + "<br>");
}

hello("Tomek"); //Tomek - argument funkcji
hello("Ania");
hello();

function suma(a, b){
    let wynik = a + b; //zmienna lokalna
    return wynik; //return kończy działanie funkcji
    //Ten kod nigdy się nie wykona
    console.log("Moja funkcja jest fajna");
}

let rezultat = suma(5, 6);
document.writeln(rezultat);
console.log(suma(12, -7));

function roznica(a, b){
    return a - b;
}

document.writeln(roznica(34, 8));