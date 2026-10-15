//Podaj sumę 5 liczb podanych przez użytkownika
//Policz ile z podanych liczb było parzystych a ile nie parzystych
//Wyznacz minimalną i maksymalną wartość podaną przez użytkownika
let suma = 0;
let licznikP = 0;
let licznikN = 0;
let maks = -Infinity;
let min = Infinity;

for(let i = 0; i < 5; i++){
    let liczba = Number(prompt("Podaj liczbę: "));
    suma += liczba;
    if(liczba % 2 == 0) licznikP++
    else licznikN++; 

    if(liczba < min) min = liczba;
    if(liczba > maks) maks = liczba;
}

document.writeln("Suma podanych liczb wynosi: " + suma + "<br>");
document.writeln("Liczba liczb parzystych: " + licznikP + "<br>");
document.writeln("Liczba liczb nieparzystych: " + licznikN + "<br>");
document.writeln("Najwieksza wartości to: " + maks + "<br>");
document.writeln("Najmniejsza wartości to: " + min + "<br>");
