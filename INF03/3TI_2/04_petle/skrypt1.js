let licznik = 1;

while(licznik <= 10){
    document.writeln(licznik + "<br>");
    licznik+=3;
}
document.writeln("Wartość za pętlą: " + licznik + "<br>");

//Dodaj do 14 - 4 dopóki suma jest mniejsza lub równa 100
suma = 14;
while(suma <= 100){
    document.writeln(suma + "<br>");
    suma += 4;
}
document.writeln(`<p>Suma wynosi: ${suma}</p>`);

let imie;
//Pewność, że zostanie wykonana chociaż raz
do{
    imie = prompt('Podaj imię?');
}while(imie != 'Tomek');

document.writeln("Witaj Tomek");

