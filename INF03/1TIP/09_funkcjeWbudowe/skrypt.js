let liczba;

liczba = prompt("Podaj liczbę: "); //pobieramy tekst np. '5'
console.log(liczba + liczba);

let liczbaInt = parseInt(liczba); //konwertuje na liczbę całkowitą
console.log(liczbaInt + liczbaInt);

let liczbaFloat = parseFloat(liczba); //konwertuje na liczbę zmiennoprzecinkowa
console.log(liczbaFloat + liczbaFloat);

let liczba8 = "0377"; //reprezentacja liczby w systemie 8
let liczba10 = parseInt(liczba8, 8);
console.log(liczba10);
let liczba2 = "1111";
console.log(parseInt(liczba2, 2));

