// Napisz program w JavaScript, który:
// Pobiera od użytkownika liczbę całkowitą n (np. za pomocą prompt()),
// Następnie wypisuje wszystkie liczby od 1 do n przy użyciu pętli while.

let n = Number(prompt('Podaj liczbę: '));

let i = 1;

while(i <= n){
    document.writeln(i);
    i++;
}