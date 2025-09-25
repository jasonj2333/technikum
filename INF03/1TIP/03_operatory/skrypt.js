let a = 15;
let b = 7;

let obwod = a + a + b + b;
document.writeln(`<p>Obwód prostokąta wynosi ${obwod}</p>`);
let roznica = a - b;
let iloczyn = a * b;
let iloraz = a / b;
let modulo = a % b;
document.writeln(`<p>Iloraz: ${iloraz}</p>`);
document.writeln(`<p>Modulo: ${modulo}</p>`);

let c = 2 * a - 5 + b * 7;
//c = c + 7;
c += 8;
document.writeln(`<p>Wartość c: ${c}</p>`);
c -= 12;
document.writeln(`<p>Wartość c: ${c}</p>`);
c *= 2;
document.writeln(`<p>Wartość c: ${c}</p>`);
c /= 2;
document.writeln(`<p>Wartość c: ${c}</p>`);
c %= 4;
document.writeln(`<p>Wartość c: ${c}</p>`);

a = 16;
//b = '16'; //zmienna tekstowa
b = 8;

//Operatory logiczne i porównania
document.writeln(`Porównanie a == b: ${a == b} <br>`);
document.writeln(`Identyczność a === b: ${a === b} <br>`);
document.writeln(`Nierowność a != b: ${a != b} <br>`);
document.writeln(`Większe a > b: ${a > b} <br>`);
document.writeln(`Mniejsze a < b: ${a < b} <br>`);
document.writeln(`Większe lub równe a >= b: ${a >= b} <br>`);
document.writeln(`Mniejsze lub równe a <= b: ${a <= b} <br>`);
document.writeln((a > b && b > 0) + "<br>"); //AND koniunkcja logiczna
document.writeln(a > b || b < 0); //OR alternatywa logiczna