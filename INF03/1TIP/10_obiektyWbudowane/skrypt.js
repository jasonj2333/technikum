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

let nowaData = new Date(-23235465465469);
console.log(nowaData.toLocaleString());