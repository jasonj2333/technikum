const wiek = 18;

if(wiek >= 18){
    document.writeln("<br>Możesz zrobić prawo jazdy");
}else if(wiek == 17){
    document.writeln("<br>Możesz zrobić prawo jazdy za zgodą rodzica i jeździć pod nadzorem")
}
else{
    document.writeln("<br>Nie możesz zrobić prawa jazdy");
}

let punkty = prompt("Podaj liczbę punktów");
if(punkty === ''){
    document.writeln("<br>Błędna ilość punktów");
}else{
    const liczba = Number(punkty);
    if(liczba >= 50){
        document.writeln("<br>Egzamin zdany");
    }else{
        document.writeln("<br>Poprawka");
    }
}

let ocena = prompt("Podaj ocenę (1-6)");
//Jeżeli ocena == 1 to wypisze "niedostateczny"
//W przeciwnym razie jeżeli ocena == 2 wypisze "dopuszczający"
//...
//W przeciwnym razie wypisz"Ocena poza skalą"
ocena = Number(ocena);
if(ocena == 1){
    document.writeln("Niedostateczny<br>");
}
else if(ocena == 2){
    document.writeln("Dopuszczający<br>");
}
else if(ocena == 3){
    document.writeln("Dostateczny<br>");
}
else if(ocena == 4){
    document.writeln("Dobry<br>");
}
else if(ocena == 5){
    document.writeln("Bardzo dobry<br>");
}
else if(ocena == 6){
    document.writeln("Celujący<br>");
}
else{
    document.writeln("Ocena poza skalą<br>");
}