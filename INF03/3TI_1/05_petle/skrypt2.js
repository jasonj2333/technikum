let licznik = 1;

while(licznik < 10){
    document.writeln(licznik + "<br>");
    licznik += 3;
}

document.writeln("Za pętlą: " + licznik + "<br>");

let suma = 14;

while(suma <=100){
    document.writeln(suma + " ");
    suma+=4;
}

document.writeln(`<br>Suma wynosi: ${suma}`);

//Petla zawsze wykona się przynajmniej raz
do{
    document.writeln("<br>Licznik w pętlo do while: " + licznik);
    licznik++;
}while(licznik < 20);

document.writeln("<br>Za pętlą: " + licznik + "<br>");