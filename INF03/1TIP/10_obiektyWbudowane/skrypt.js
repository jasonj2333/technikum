//Obiekt String
let tekst = "Obiekty języka JS";
console.log(tekst.length);
console.log(tekst.at(16));
console.log(tekst.substring(8, 14));
console.log(tekst.toUpperCase());
console.log(tekst.toLowerCase());

//Obiekt Date
let dataBiezaca = new Date();
console.log(dataBiezaca);
console.log(dataBiezaca.getFullYear());
console.log(dataBiezaca.getDate()); //dzień miesiąca
console.log(dataBiezaca.getDay());
console.log(dataBiezaca.toString());
console.log(dataBiezaca.toLocaleString());
console.log(dataBiezaca.toLocaleTimeString());
console.log(dataBiezaca.toGMTString());

let dataUrodzenia = new Date(2010, 1, 1, 13, 5, 34);
console.log(dataUrodzenia.toLocaleString());
console.log(dataBiezaca.getTime());

let nowaData = new Date(3445354);
console.log(nowaData.toLocaleString());

//Obiekt Array
let imiona = ["Michał", "Tomek", "Ala", "Zosia"];
let liczby = new Array();
liczby.push(5);
liczby.push(10);
liczby.push(15);
imiona.push("Ola");
console.log(imiona);
console.log(liczby);
console.log(imiona.length);
console.log(imiona[1]);
console.log(imiona.at(3));
console.log(imiona[imiona.length-1]); //ostatni element tablicy

for(let i = 0; i<imiona.length; i++){
    console.log(i+1, imiona[i]);
}

for(const imie of imiona){
    console.log(imie.toUpperCase());
}

let tekstImiona = imiona.join("-"); //łączenie elementów tablicy w jeden ciąg tekstowy
console.log(tekstImiona);

imiona.sort(); //sortowanie rosnąco - zmiana tablicy źródłowej
console.log(imiona);
imiona.reverse(); //obracanie elementów w tablicy
console.log(imiona);

function porownaj(a, b){
    return a - b; //rosnąco
    //return b - a; //malejąco
}

//Sortowanie liczb
console.log(liczby);
liczby.push(56);
liczby.push(123);
liczby.push(1045);
liczby.push(78);
console.log(liczby);
liczby.sort(porownaj);
console.log(liczby);

const samochody = ["Fiat", "BMW", "Honda"];
samochody.push("Audi");
samochody.push("Dacia");
console.log(samochody);
samochody.pop("Dacia"); //usuwa ostatni element
console.log(samochody.toSorted()); //sortowanie bez zmiany tablicy źródłowej
console.log(samochody.toSorted().toReversed()); //sortowanie malejąco bez zmiany tablicy źródłowej
console.log(samochody);

for(const samochod of samochody){
    document.writeln(`<p>${samochod}</p>`);
}
