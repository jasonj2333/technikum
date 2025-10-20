let liczba = Math.floor(Math.random() * 10) + 1;

//document.writeln(liczba);
let strzal;
let licznik = 1;

do{
    strzal = Number(prompt("Podaj liczbę: "));
    if(liczba > strzal) alert("Za mało");
    else if(liczba < strzal) alert("Za dużo");
    licznik++;
}while(strzal != liczba);

document.writeln("Brawo!!! - zgadłeś w " + licznik + " próbach");

