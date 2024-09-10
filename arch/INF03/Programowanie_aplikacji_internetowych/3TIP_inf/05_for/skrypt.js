let wiek = 17;

//Operator warunkowy
let wynik = (wiek >= 18) ? "Możesz głosować" : "Nie możesz głosować";
document.write(wynik);
document.write("<br>");

//Pętla for

for(let i=0; i<10; i++){
    document.write(i);
}

document.write("<br>");

for(let i=9; i>=0; i--){
    document.write(i);
}

document.write("<br>");

for(let i=0; i<10; i++){

    for(let j=0; j<=i; j++){
        document.write('X');
    }
    document.write("<br>");
}