let liczba = 7; //zmienna liczbowa w JS
document.writeln(liczba);
liczba = 9;

const tytul = "Tytul strony";
//stala = "poniedziałek"; //błąd nie można przypisać ponownie wartości do const
document.writeln("<br>");
document.writeln(liczba);
document.writeln("<br> Bardzo lubie informatykę<br>");
document.writeln(tytul);

let imieNazwisko = "Jerzy Jasonek";
const rokUrodzenia = 2009;
let wiek = 2025 - rokUrodzenia;

document.writeln("<p> Nazywam się " + imieNazwisko + "</p>")
document.writeln("<p> Mam " + wiek + "lat</p>");
document.writeln(`<p>Urodziłem się w ${rokUrodzenia}.</p>`);