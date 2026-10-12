// pętla for

for(let i = 0; i < 10; i++){
    document.writeln(i + "<br>");
}

for(let i = 1; i <= 5; i++){
    document.writeln("Będę się pilnie uczył PAI<br>");
}

//console.log(i); //i nie jest zdefiniowane, ponieważ jest to lokalna zmienna pętli

let licznik = 7;
for(;licznik < 13; licznik += 2){
    document.writeln(`Licznik: ${licznik} <br>`);
}

console.log(licznik);

for(let i = 100; i > 90; i--){
    document.writeln(i);
    if(i % 2 == 0) document.writeln("- parzysta <br>");
    else document.writeln("- nieparzysta <br>");
}

//wyświetlić wszystkie liczny zaczynając od 7 do 77, które są podzielne przez 3
for(let i=7; i <= 77; i++){
    if(i % 3 == 0) document.writeln(i + " ");
}
document.writeln("<br>");

let suma = 0

for(let i = 10; i <= 70; i++){
    suma += i;
}

document.writeln("Suma wynosi: " + suma);

//while

let n = 13;
while(n > -5){
    console.log(n*n);
    n -= 2;
}

let login = "Tomek";
do{
    login = prompt("Podaj login");
}while(login != "Tomek");

//suma = 0;

do{
    suma += 13;
}while(suma < 150);

document.writeln("Suma wynosi: " + suma + "<br>");

//break i continue
for(let i = 0; i < 20; i++){
    if(i % 7 == 0) continue; // przejdź do następnej iteracji pętli
    if(i == 17) break; //przerywa pętle
    document.writeln(i + " ");
}