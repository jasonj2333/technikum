let max;
let min;
let liczba;

for(let i=0; i<5; i++){
    liczba = Number(prompt("Podaj liczbę: "));
    if(i == 0) {
        max = liczba;
        min = liczba;
    }
    else{
        if(liczba > max) max = liczba;
        if(liczba < min) min = liczba;
    }
}

document.writeln(`Największa liczba to ${max}`);
document.writeln(`Najmniejsza liczba to ${min}`);