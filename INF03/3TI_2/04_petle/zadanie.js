for(let i = 1; i <= 10; i++){
    document.writeln(i + "<sup>2</sup> = " + i**2 + "<br>");
}

let liczba;
let suma = 0;

do{
    liczba = Number(prompt("Podaj liczbę"));
    if(liczba > 0) suma += liczba;
}while(liczba > 0);

document.writeln("Suma wynosi: " + suma);