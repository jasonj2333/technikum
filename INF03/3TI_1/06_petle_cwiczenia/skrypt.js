// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

for(let i = 0; i < 5; i++){
    for(let j = 1; j <=i+1; j++){
        document.writeln(j);
    }
    document.writeln("<br>");
}

// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2 
// 1

for(let i = 5; i >= 1; i--){
    for(let j = 1; j <=i; j++){
        document.writeln(j);
    }
    document.writeln("<br>");
}

// ******
// ******
// ******
// ******
let wiersze = 4;
let kolumny = 6;

for(let i = 1; i <= wiersze; i++){
    for(let j = 1; j <= kolumny; j++){
        document.writeln("*");
    }
    document.writeln("<br>");
}

// *
// **
// ***
// ****
// *****
// ******

for(let i = 0; i < 6; i++){
    for(let j = 1; j <=i+1; j++){
        document.writeln("*");
    }
    document.writeln("<br>");
}

let liczba = Math.floor(Math.random() * 10) + 1;
let strzal;
let licznik = 0;

do{
    strzal = Number(prompt("Zgadnij liczbę od 1 do 10"));
    licznik++;
    if(strzal > liczba) alert("Za dużo");
    else if(strzal < liczba) alert("Za mało");
}while(strzal != liczba);

document.writeln("Trafiłeś!!! <br>");
document.writeln("Liczba prób: " + licznik);