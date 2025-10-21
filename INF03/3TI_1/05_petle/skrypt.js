for(let i=0; i<10; i++){
    document.writeln(i+1 + ". Cześć <br>");
}

for(let i=20; i>10; i--){
    document.writeln(i + " ");
}
document.writeln("<br>");

//Wyświetlić wszystkie liczby z przedziału od 1 do 100 podzielne przez 7
for(let i=1; i<=100;i++){
    if(i % 7 == 0){
        document.writeln(i + " ");
    }
}
document.writeln("<br>");

//Pobierz od użytkownika liczbę i wyświetl kolejnych 5 liczb parzystych większych lub równych podanej liczbie

let liczba = Number(prompt("Podaj liczbę"));
let start;
if(liczba % 2 == 0) start = liczba;
else start = liczba + 1;

for(let i = 0; i < 5; i++){
    document.writeln(start);
    start += 2;
}