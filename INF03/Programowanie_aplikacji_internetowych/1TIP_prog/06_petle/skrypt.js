//Operator warunkowy

let liczba = 5;
let wb = (liczba >= 0) ? liczba : -liczba;
document.write(wb);

//Pętla for
document.write("<br>");

for(let i=10; i < 20; i++){
    document.write(i + " ");
}

document.write("<br>");

for(let i=10; i > 0; i--){
    document.write(i + " ");
}

document.write("<br>");

for(let i=0; i<10; i++){
    for(let j=0; j<=i; j++){
        document.write('X');
    }
    document.write("<br>");
}