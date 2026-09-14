let imie = "Tomek"; //typ string
const rokUrodzenia = 2005; //typ Number

imie = "Ania";
//rokUrodzenia = "2007"; //stałych const nie da się zmieniać

console.log(imie, rokUrodzenia);
document.writeln(imie, rokUrodzenia)

let promocja = true; //typ Boolean

let liczba1 = prompt("Podaj 1 liczbę: ");
let liczba2 = prompt("Podaj 2 liczbę: ");
let suma = Number(liczba1) + Number(liczba2);
document.writeln(suma);

//Operatory
//+ - * / % ** - matematyczne

let a = 23;
let b = 7;
console.log( a + b );
console.log( a - b );
console.log( a * b );
console.log( a / b );
console.log( a % b ); //reszta z dzielenia
console.log( a ** 3 ); //potęgowanie

//= == === != !== > < >= <=  - przypisania i porównania
let c = '5';
let d = 5;
let e = 8;
console.log(c == d); //sprawdzenie czy wartości są równe
console.log(c === d); //sprawdzenie czy typy i wartości są równe
console.log(d > e);
console.log(d < e);
console.log(d <= e);
console.log(d >= e);
console.log(d != e); //różne

//! && || - logiczne
console.log(!true); //false
console.log(5 < 7 && 7 > 12); //koniukcja logiczna - zwraca się false
console.log(5 < 7 || 7 > 12); //alternatywa logiczna - zwraca się true

//Łańcuchy znaków i operator konkatenacji (+)
let imieUcznia = "Weronika";
let klasa = "1B";
document.writeln("<br>Uczennica " + imieUcznia + " chodzi do klasy: " + klasa);
document.writeln(`<br>Uczennica ${imieUcznia} chodzi do klasy: ${klasa}`);

