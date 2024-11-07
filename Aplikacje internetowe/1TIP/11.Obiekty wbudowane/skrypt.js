document.write("<h2>Obiekt String</h2>");
let tekst = "Obiekty języka JavaScript";
let dlugosc = tekst.length;
document.write(dlugosc);

document.write("<p>" + tekst + "</p>");
document.write("<p>" + tekst.toUpperCase() + "</p>");
document.write("<p>" + tekst.toLowerCase() + "</p>");
let x = tekst.substring(15,19);
document.write("<p>" + x + "</p>");

document.write("<h2>Obiekt Date</h2>");
let dataDzisiejsza = new Date();
let jakaData = new Date(2013,2,27);

document.write( dataDzisiejsza.toString() + "<br>" );
document.write( jakaData.toString() + "<br>" );

document.write( dataDzisiejsza.toLocaleString() + "<br>" );
document.write( dataDzisiejsza.toUTCString() + "<br>" );
document.write( dataDzisiejsza.toDateString() + "<br>" );
document.write( dataDzisiejsza.toLocaleDateString() + "<br>" );
document.write( dataDzisiejsza.toTimeString() + "<br>" );
document.write( dataDzisiejsza.toLocaleTimeString() + "<br>" );
document.write( dataDzisiejsza.getFullYear() + "<br>" );
document.write( dataDzisiejsza.getHours() + "<br>" );
document.write( Date.now() + "<br>" );
//console.log(dataDzisiejsza.toJSON())

document.write("<h2>Obiekt Array</h2>");
let tablica = new Array();
let imiona = ["Michał", "Tomek", "Ala", "Zosia"];
console.log(imiona.length);
imiona[4] = "Krystyna";
imiona[imiona.length] = "Konrad";
imiona.push("Bohdan");

document.write(imiona[4]);
document.write(imiona.at(4));
console.log(imiona.length);
console.log(imiona);

for(let i=0; i<imiona.length; i++){
    document.write(`<p>${i+1}. ${imiona[i]}</p>`);
}

for(const imie of imiona){
    document.write(`<p>${imie.toUpperCase()}</p>`);
}

let tekstImiona = imiona.join("+");
console.log(tekstImiona);

imiona.sort();

document.write(imiona);

function porownaj(a, b) {
    return a - b;
}

document.write('<br>');
let liczby = [5, 144, 67, 668, 6, 320, 100];
liczby.sort(porownaj);
liczby.reverse();
document.write(liczby);

//Utwórz 8 elementową tablicę zawierająca nazwy samochodów, następnie posortuj tablicę w kolejności od Z do A i wyświetl wszystkie pozycje z tablicy za pomocą pętli.
// Pod spisem samochodów wyświetl ile ich jest.

let samochody = ["Fiat", "Audi", "Skoda", "Porsche", "BMW"];
samochody.sort();
samochody.reverse();

for (const samochod of samochody) {
    document.write(`<p>${samochod}</p>`);
}

// 1. Utwórz skrypt pobierający dowolny tekst, a następnie wyświetlający długość tego tekstu.
// 2. Utwórz skrypt pobierający dowolny tekst pisany dużymi i małymi literami, a następnie wyświetli ten tekst dużymi literami.
// 3. Utwórz skrypt pobierający dowolny tekst pisany dużymi i małymi literami, a następnie wyświetli ten tekst małymi literami.
// 4. Utwórz skrypt który z łańcucha o twoim imieniu i nazwisku, wytnie i wyświetli tylko twoje imię.
// 5. Utwórz skrypt wyświetlający aktualną datę i godzinę.
// 6. Utwórz skrypt wyświetlający tylko aktualną datę.
// 7. Utwórz skrypt wyświetlający tylko aktualną godzinę.
// 8. Utwórz skrypt zawierający tablicę przechowującą imiona osób z grupy.
// 9. Utwórz skrypt wyświetlający za pomocą pętli wszystkie imiona osób z zadania 8.
// 10. Utwórz skrypt wyświetlający bez użycia pętli wszystkie imiona osób z zadania 8.
// 11. Utwórz skrypt wyświetlający posortowane imiona osób z zadania 8.