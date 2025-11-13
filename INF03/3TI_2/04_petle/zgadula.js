let liczba = 3;
let strzal;

do{
    strzal = prompt("Podaj liczbę z zakresu <1, 10>");
}while(strzal != liczba);

document.writeln("Brawo !!! Szukana liczba to: " + liczba);