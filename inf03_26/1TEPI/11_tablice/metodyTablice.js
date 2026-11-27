const netto = [10, 20, 5];
const brutto = [];

for(const cena of netto){
    brutto.push(cena * 1.23);
}

console.log(brutto);

const brutto2 = netto.map((cena) => {
    return cena * 1.23;
});

//Zapis skrócony - tego co wyżej
//const brutto2 = netto.map((cena) => cena * 1.23);

console.log(brutto2);

const osoby = ["Ania", "Wojtek", "Bartek", "Zosia"];
// "1. Ania" itd.
const kartaWycieczki = osoby.map((imie, i) => `${i + 1}. ${imie}`);

// const kartaWycieczki = osoby.map((imie, i) => {
//     return `${i + 1}. ${imie}`;
// });

console.log(kartaWycieczki);

const liczby = [2, 7, 12, 19, 23, 29, 36];
const kwadratyLiczb = liczby.map((liczba) => liczba * liczba);
console.log(kwadratyLiczb);