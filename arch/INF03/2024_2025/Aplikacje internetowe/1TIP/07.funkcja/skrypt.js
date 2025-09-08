//definicja funkcji - funkcja niezwracająca wartości
function witaj(imie = "Nieznajomy"){
    document.write("<p>Witaj " + imie + " !!!</p>");
}

//wywołanie funkcji
witaj("Zosia");
witaj("Tomek");
witaj("Ala");
witaj();

//funkcje zwracające wartość
function suma(a, b){
    let wynik = a + b;
    return wynik;
}

function roznica(a, b){
    let wynik = a - b;
    return wynik;
}

function iloczyn(a, b){
    let wynik = a * b;
    return wynik;
}

function iloraz(a, b){
    if(b === 0) return "Nie dzielimy przez 0";
    let wynik = a / b;
    return wynik;
}

document.write( suma(5, 6) + "<br>");
document.write( suma(-7, 16) + "<br>");
document.write( suma("Ala ma ", "kota") + "<br>");
document.write( roznica(7, 12) + "<br>");
document.write( iloczyn(6, 8) + "<br>");
document.write( iloraz(6, 0) + "<br>");
document.write( iloraz(6, 4) + "<br>");

//document.write(wynik);

let wynik = suma(5, 8); //zmienna globalna

function razy2(a){
    let wynik = a * 2; //zmienna lokalna
    return wynik;
}

function wypisz(a){
    wynik += 5;
    document.write("<p>" + a + "</p>")
}

wypisz(wynik);
document.write("<p>" + wynik + "</p>")