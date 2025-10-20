// Napisz program w JavaScript, który:
// Pobiera od użytkownika liczbę n,
// Wyświetla w tabliczkę mnożenia tej liczby od 1 do 10.
// Użyj pętli for, while lub do...while.

// 5 x 1 = 5
// 5 x 2 = 10
// ...
// 5 x 10 = 50

let n = Number(prompt("Podaj liczbę: "));

for(let i = 1; i <= 10; i++){
    document.writeln(`${n} x ${i} = ${n * i} <br>`);
}