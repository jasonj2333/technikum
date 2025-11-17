let suma = 0;
let liczba;
let licznik = 0;
do{
    liczba = Number(prompt("Podaj liczbę"));
    if(liczba > 0) {
        suma += liczba;
        licznik++;
    }
}while(liczba > 0);

document.writeln("Suma wynosi:" + suma);
let srednia = suma/licznik;
document.writeln("Średnia wynosi: " + srednia);