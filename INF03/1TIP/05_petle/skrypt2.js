let i = 1;

while(i <= 10){
    if(i == 5){
        i++;
        continue; //przejdz do następnej iteracji
    }
    if(i == 7){
        break; //przerwij pętle
    }
    document.writeln(`Wartość i = ${i}<br>`);
    i++;
}

let suma = 110;
//napisz pętle while, która sumuje co 2 liczbę począwszy od 1 aż suma nie przekroczy 100;
i = 1;
while(suma <= 100){
    document.writeln(i + " ");
    suma += i;
    i+=2;
}
document.writeln(`<br>Suma wynosi: ${suma}`);

let imie;

do{
    imie = prompt("Podaj imię: ");
}while(imie != "Tomek");

document.writeln(`Witaj ${imie}`);
