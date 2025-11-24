let ile = Number(prompt("Ile podasz liczb?"));

function maks(ile = 5){
    let liczba;
    let max;
    for(let i = 0; i < ile; i++){
        liczba = Number(prompt("Podaj liczbę: "));
        if(i == 0) max = liczba;
        else if(liczba > max) max = liczba;
    }
    return max;
}

let najwieksza = maks(ile);
document.writeln(`Największa wartość to: ${najwieksza}`);