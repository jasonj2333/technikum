let a = 15;
let b = 7;

//operatory arytmetyczne
let obwod = a + a + b + b;
document.writeln(`<p>Obwód prostokąta wynosi: ${obwod}</p>`);
let roznica = a - b;
let iloczyn = a * b;
let iloraz = a / b;
let modulo = a % b; //reszta z dzielenia
document.writeln(`<p>Modulo: ${a}%${b} = ${modulo}</p>`);

//a = a + 3;
a += 3; //18
a -= 5; //13
a *= 3; //39
a /= 4; //9,75
a %= 2; //1,75
document.writeln(`<p>Wartość a: ${a}</p>`);

//operatory logiczne i porównania
a = 15;
b = 7;
document.writeln(`Równości: a == b: ${a == b}<br>`);
document.writeln(`Identyczności: a === b: ${a === b}<br>`);
document.writeln(`Większy: a > b: ${a > b}<br>`);
document.writeln(`Mniejszy: a < b: ${a < b}<br>`);
document.writeln(`Większy lub równy: a >= b: ${a >= b}<br>`);
document.writeln(`Mniejszy lub równy: a <= b: ${a <= b}<br>`);

document.writeln(a > 5 && b < 0); //AND - koniunkcja logiczna
document.writeln(a > 5 || b < 0); //OR - alternatywą logiczną