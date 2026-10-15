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
let suma = 0
for(let i = 1; i <= 10; i++){
    suma += i;
}
document.writeln(`Suma wynosi: ${suma} <br>`);

// 4. Wyświetli na ekranie 10 kolejnych nieparzystych liczb całkowitych począwszy od 1.
for(let i = 1; i <= 20; i+=2){
    document.writeln(i + " ");
}
document.writeln("<br>");

// 5. Pracownik przez X miesięcy odkłada co miesiąc Y zł. W każdym miesiącu z całej odłożonej na tą chwilę kwoty uzyskuje 8% odsetek. Jaką kwotę zgromadzi pracownik ?
let x = 10;
let y = 100;
let konto = 0;
for(i = 0; i < x; i++){
    konto = konto + y;
    konto = konto + (0.08 * konto);  
}
document.writeln(`Stan konta wynosi: ${konto.toFixed(2)} zł <br>`);

//6. Obliczy sumę elementów ciągu arytmetycznego, składającego się ze 100 elementów, z których każdy kolejny jest większy od poprzedniego o 10. Pierwszy element wynosi 5.