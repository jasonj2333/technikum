function poleKola(r){
    const wynik = Math.PI*r*r;
    return wynik;
}

function obwodKola(r){
    
    return (Math.PI*r*2);
}

let pole = poleKola(5);
document.writeln(`Pole koła wynosi ${pole} <br>`);

let promien = Number(prompt("Podaj promień"));
document.writeln(`Pole koła wynosi ${ obwodKola(promien) }`);

function poleTrojkata(a, b, c){
    const p = (a + b + c) / 2;
    const Pole = Math.sqrt(p*(p-a)*(p-b)*(p-c));
    return Pole;
}

let poleT = poleTrojkata(3,4,6);
console.log(poleT);
console.log(Math.PI);