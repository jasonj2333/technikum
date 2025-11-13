for(let i=0; i<20; i++){
    //document.writeln(i);
    document.writeln("*");
}

document.writeln("<br>");

//Wypisz liczby parzyste w zakresie <5, 25>
for(let i=5; i<=25; i++){
    if(i%2 == 0) document.writeln(i);
}

document.writeln("<br>");
//Wypisz co trzecią liczbę zaczynając od 40 a kończąc na 21.
for(let i=40; i>=21; i-=3){
    document.writeln(i);
}

//Policz sumę i średnią liczb nieparzystych w zakresie <67, 134)
let suma = 0;
let licznik = 0;
for(let i=67; i<134; i++){
    if(i%2 != 0) { //nie jest podzielna przez 2
        suma = suma + i; //suma += i
        licznik++;
    }
}
document.writeln(`<p>Suma wynosi: ${suma}</p>`);
document.writeln(`<p>Dodano: ${licznik} liczb</p>`);
document.writeln(`<p>Średnia wynosi: ${suma / licznik}</p>`);