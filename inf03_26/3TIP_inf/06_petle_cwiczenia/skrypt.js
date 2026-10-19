//Napisz skrypt:
//1. Wyświetli na ekranie 10 kolejnych liczb całkowitych począwszy od 1.

for(let i = 1; i <= 10; i++){
    document.writeln(i + " ");
}

document.writeln("<br>");

// 2. Wyświetli na ekranie 10 kolejnych liczb całkowitych począwszy od 10 w kolejności malejącej.

for(let i = 10; i >= 1; i--){
    document.writeln(i + " ");
}

document.writeln("<br>");

// 3. Obliczy i wyświetli na ekranie sumę kolejnych 10 liczb całkowitych począwszy od 1.
let suma = 0;

for(let i = 1; i <= 10; i++){
    suma += i;
}
document.writeln(`Suma elementów wynosi: ${suma} <br>`);

// 4. Wyświetli na ekranie 10 kolejnych nieparzystych liczb całkowitych począwszy od 1.
//liczba % 2 == 1
for(let i = 1; i <= 20; i+=2){
    document.writeln(i + " ");
}
document.writeln("<br>");
// 5. Pracownik przez X miesięcy odkłada co miesiąc Y zł. W każdym miesiącu z całej odłożonej na tą chwilę kwoty uzyskuje 8% odsetek. Jaką kwotę zgromadzi pracownik ?
let x = 10;
let y = 200;
let konto = 0;
for(let i = 0; i < x; i++){
    konto = konto + y;
    konto = konto + (0.08 * konto);
}
document.writeln(`Stan konta wynosi: ${konto.toFixed(2)} zł <br>`);

//6. Obliczy sumę elementów ciągu arytmetycznego, składającego się ze 100 elementów, z których każdy kolejny jest większy od poprzedniego o 10. Pierwszy element wynosi 5.
let element = 5;
let suma1 = 0;

for(let i = 0; i < 100; i++){
    suma1 += element;
    element += 10;
}

document.writeln(`Suma elementów ciągu wynosi: ${suma1} <br>`);
console.log(element);

//7. Uczeń chce kupić rower za 1200 zł. Ma już odłożone 200 zł i co tydzień odkłada kolejne 100 zł. Ile wpłat musi wykonać uczeń
let konto1 = Number(prompt("Ile masz pieniędzy na koncie?"));
let licznik = 0;
let wplata = Number(prompt("Po ile pieniądzy będzie wpłacał co tydzień?"));

while(konto1 < 1200){
    konto1 += wplata;
    licznik++;
}
document.writeln(`Stan konta: ${konto1}. Liczba wpłat ${licznik} <br>`);