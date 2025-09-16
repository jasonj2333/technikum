let a = 15;
let b = 4;

let obwod = a + a + b + b;

document.writeln(`<p>Obwód prostokąta wynosi: ${obwod}</p>`);
let roznica = a - b;
let iloczyn = a * b;
let iloraz = a / b;
let modulo = a % b;
document.writeln(`<p>Reszta z dzielenia ${a} % ${b} = ${modulo}</p>`);
//obwod = obwod + 5; 
obwod -= 2; //obwod = obwod - 2
obwod *= 2; //obwod = obwod * 2
obwod /= 3; //obwod = obwod / 3
obwod %= 4; //obwod = obwod % 4

//operatory logiczne i porównania
document.writeln(`Porównania a == b: ${a == b} <br>`);
document.writeln(`Nierówność a != b: ${a != b} <br>`);
document.writeln(`Większy a > b: ${a > b} <br>`);
document.writeln(`Mniejsze a < b: ${a < b} <br>`);
document.writeln(`Większy lub równy a >= b: ${a >= b} <br>`);
document.writeln(`Mniejsze lub równy a <= b: ${a <= b} <br>`);
document.writeln(`Warunek złożony ${a > 5 && b < 0}`); //koniunkcja logiczna (i)
document.writeln(`Warunek złożony ${a > 5 || b < 0}`); //alternatywa logiczna (lub)
