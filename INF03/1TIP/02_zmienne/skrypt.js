let zmienna = 5;
document.writeln(zmienna);
zmienna = zmienna + 2;
document.writeln(zmienna);

const tytul = "Zmienne w JS";
//tytul = "Inny tytuł"; //Błąd  nie można zmieniać
document.writeln(tytul);

//Złe praktyki
var staraZmienna = 10;
document.writeln(staraZmienna);
zmiennaGlobalna = 15; //tworzy zmienną globalną bez słowa kluczowego

let nazwisko = "Kowalski";
let imie = "Jan";
const rokUrodzenia = 1990;
document.writeln("<p>Nazywam się " + imie + " " + nazwisko + " urodziłem się w roku " + rokUrodzenia + ", więc mam " + (2025 - rokUrodzenia) + " lat.</p>");

document.writeln(`<p>Nazywam się ${imie} ${nazwisko} urodziłem się w roku ${rokUrodzenia}, więc mam ${2025 - rokUrodzenia} lat.</p>`);