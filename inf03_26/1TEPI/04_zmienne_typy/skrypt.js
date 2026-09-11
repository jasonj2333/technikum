let liczba1 = prompt("Podaj 1 liczbę: ");
let liczba2 = prompt("Podaj 2 liczbę: ");

liczba1 = Number(liczba1); //Konwersja jawna do liczby
liczba2 = Number(liczba2);

console.log(typeof liczba1); //sprawdza typ zmiennej
console.log(typeof liczba2);

console.log(liczba1 + liczba2);

console.log(typeof true);
console.log(typeof undefined); //undefined
console.log(typeof null); //object
console.log(typeof NaN); //number

let wiek = prompt("Podaj wiek: ");
const rokUrodzenia = 2026 - wiek;
console.log(rokUrodzenia, typeof rokUrodzenia);

