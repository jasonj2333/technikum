let liczba = 5;
document.writeln(liczba);
document.writeln("<br>");
liczba = liczba + 2;
document.writeln(liczba);

const tytul = "Zewnętrzny plik w JS";
//tytul = "Inny tytuł"; //Błąd const nie można zmieniać
document.writeln(tytul);

//Number
let liczbaCalkowita = 5;
let liczbaRzeczywista = 5.75;

//String
let imie = "Jurek";
let klasa = "3 TI";

//Boolean
let prawda = true; //false

//Null
let pustaZmienna = null;

//Undefined
let zmiennaNiezdefiniowa;
document.writeln(typeof zmiennaNiezdefiniowa);
console.log("Wartość wypisana w konsoli");
console.log(typeof klasa);

//Obiekt - typ złożony
let klasa3Ti = ["Jakub", "Igor", "Marcel", "Weronika"];
document.writeln(klasa3Ti[2]);
console.log(typeof klasa3Ti);
document.writeln("<br>");
document.writeln("Uczeń " + klasa3Ti[1] + " na nr 1 w tablicy");

let imieNazwisko = "Jerzy Jasonek";
const rokUrodzenia = 2009;
let wiek = 2025 - rokUrodzenia;
//Nazywam się imieNazwisko, urodziłem się w roku rokUrodzenia, więc mam wiek lat
document.writeln("<br>Nazywam się " + imieNazwisko + ", urodziłem się w " + rokUrodzenia + " roku, więc mam " + wiek + " lat");
document.writeln(`<br>Nazywam się ${imieNazwisko}, urodziłem się w ${rokUrodzenia} roku, więc mam ${wiek} lat.`);