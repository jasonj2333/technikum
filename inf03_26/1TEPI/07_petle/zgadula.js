let liczba = Math.floor(Math.random() * 100) + 1;
//console.log(liczba);

let strzal;
let licznik = 0;

do{
    strzal = Number(prompt("Podaj liczbę: "));
    if(strzal > liczba) alert("Za dużo");
    else if(strzal < liczba) alert("Za mało");
    licznik++;
}while(liczba != strzal);

document.writeln("Brawo! Ogadłeś liczbę w "+licznik+" prób.");