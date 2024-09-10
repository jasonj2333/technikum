let liczby = [1, 5, 7, 12, 78];
let imiona = ["Ania", "Tomek", "Zosia"];
let samochody = new Array("BMW", "FIAT", "Kia");
let osoba = ["Tomek", "Atomek", 16, {ulica: "Poziomkowa", nr: 15}]

document.write(osoba[3].ulica);
document.write(osoba[3].nr);

//Metody na tablica
console.log(imiona.length);
imie = prompt('Podaj imie: ');
imiona.push(imie);
imiona.push("Tytus");
let usuniete = imiona.pop();
imiona.shift();
imiona.unshift("Maria");
console.log(imiona.length);