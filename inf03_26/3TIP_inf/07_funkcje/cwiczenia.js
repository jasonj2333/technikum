//Napisz funkcje poleProstokata, która dostaje 2 argumenty a i b i zwraca wynik.
//Przetestuj funkcje na argumentach 5, 9 oraz 12, 27

function poleProstokata(a, b){
    if(a <= 0 || b <= 0){
        return "Te dwie liczby nie mogą być bokami prostokąta";
    }
    return a * b;
}

console.log( poleProstokata(5, 9) );
console.log( poleProstokata(-12, 27) );

let bok1 = prompt("Podaj a:");
let bok2 = prompt("Podaj b:");

document.writeln(`Pole prostokata o bokach ${bok1} i ${bok2} wynosi : ${poleProstokata(bok1, bok2)}`);