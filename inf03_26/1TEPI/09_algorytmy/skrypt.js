//Algorytm sumowania
let suma = 0;

for(let i = 1; i <= 10; i++){
    if(i % 2 ==0) suma = suma + i;
}

console.log("Suma liczb parzystych wynosi: " + suma);

//Zliczanie
let podzielnePrzez3 = 0;
for(let i = 1; i < 100; i+=2){
    if(i % 3 == 0) podzielnePrzez3++;
}

console.log("Ilość liczb podzielnych przez 3 wynosi: " + podzielnePrzez3);

//Minimum
const n = 3;
let minimum;
let i = 0;

do{
    let liczba = Number(prompt("Podaj liczbę: "));
    if(i == 0){
        minimum = liczba;
    }else if(liczba < minimum){
        minimum = liczba;
    }
    i++;
}while(i < n);
console.log(minimum);

//Maksimum
let maksimum;
i = 0;

do{
    let liczba = Number(prompt("Podaj liczbę: "));
    if(i == 0){
        maksimum = liczba;
    }else if(liczba > maksimum){
        maksimum = liczba;
    }
    i++;
}while(i < n);
console.log(maksimum);