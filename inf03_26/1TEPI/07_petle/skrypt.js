//pętla for

for(let i = 1; i <= 10;i++){
    document.writeln(i + "<br>");
}

for(let i = 0; i < 5; i++){
    document.writeln("Będę uczył się PAI <br>");
}

let licznik = 7;

for(;licznik < 13; licznik += 2){
    //document.writeln("Licznik wynosi: "+ licznik + " <br>");
    document.writeln(`Licznik wynosi: ${licznik} <br>`);
}

for(let i = 2; i <= 20; i+=2){
    document.writeln(i + " ");
}
document.writeln("<br>");

for(let i = 100; i > 90; i--){
    document.writeln(i + "<br>");
}

//while

let n = 3;

while(n > -5){
    console.log(n);
    n-= 2;
}

let suma = 157;

while(suma <= 110){
    suma += 5;
}
document.writeln(`Suma wynosi: ${suma}`);

let login;
do{
    login = prompt("Podaj login");
}while(login != "Tomek");

do{
    suma += 10;
}while(suma <= 150);
document.writeln(`Suma wynosi: ${suma}`);