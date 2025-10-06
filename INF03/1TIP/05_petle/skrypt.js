let liczba = 5;

for(let i=0; i < 10; i++){
    document.writeln(i + 1 + ". " + liczba + "<br>");
}

for(let i = 10; i > 0; i--){
    document.writeln(i + " ");
}

document.writeln("<br>");

for(let i=0; i<10; i++){
    for(let j=0; j<=i; j++){
        document.writeln("X");
    }
    document.writeln("<br>");
}

for(let i = 0; i < 10; i++){
    document.writeln("Nie lubię poniedziałku <br>");
}

//Wyświetlić wszystkie liczby podzielne przez 7
//z przedziału od 1 do 100
// i % 7 == 0
for(let i = 1; i <= 100; i++){
    if(i % 7 == 0){
        document.writeln(i);
    }
}