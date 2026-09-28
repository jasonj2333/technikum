let wiek = 17;
if(wiek >= 18){
    document.writeln("Dorosły");
}else{
    document.writeln("Niepełnoletni");
}

let etykieta = wiek >= 18 ? "dorosły" : "niepełnoletni";
document.writeln(etykieta);

let n = 7;
document.writeln(`Liczba ${n} jest ${n % 2 == 0 ? "parzysta" : "nieparzysta"}`)