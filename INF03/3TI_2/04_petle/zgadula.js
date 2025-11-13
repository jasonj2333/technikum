let liczba = Math.floor(Math.random() * 100) + 1;
let strzal;
let licznik = 0;

do{
    strzal = prompt("Podaj liczbę z zakresu <1, 100>");
    if(strzal > liczba) alert("Za dużo");
    else if(strzal < liczba) alert("Za mało");
    licznik++;
}while(strzal != liczba);

document.writeln("Brawo !!! Szukana liczba to: " + liczba);
document.writeln("<br>Liczba prób: ", licznik);