const blokPierwszy = document.getElementById('pierwszy');
const blokDrugi = document.getElementById('drugi');
const blokTrzeci = document.querySelector('#trzeci');
let szerokoscPaska = 4;
const pasek = document.querySelector("#pasek > section");

function aktywuj(blok) {
    blokPierwszy.style.display = "none";
    //blokPierwszy.style = "display: none";
    blokDrugi.style.display = "none";
    blokTrzeci.style.display = "none";

    switch (blok) {
        case 'klient':
            blokPierwszy.style.display = "block";
            break;
        case 'adres':
            blokDrugi.style.display = "block";
            break;
        case 'kontakt':
            blokTrzeci.style.display = "block";
            break;
        default:
            break;
    }
}

function zmianaPaska() {
    if(szerokoscPaska < 100) {
        szerokoscPaska += 12;
        pasek.style.width = szerokoscPaska + "%";
    }
}

function zatwierdzDane() {
    const imie = document.getElementById('imie');
    const nazwisko = document.getElementById('nazwisko');
    const data_urodzenia = document.getElementById('data_urodzenia');
    const ulica = document.getElementById('ulica');
    const numer = document.getElementById('numer');
    const miasto = document.getElementById('miasto');
    const telefon = document.getElementById('telefon');
    const rodo = document.getElementById('rodo');

    console.log(imie.value + ',' + nazwisko.value + ',' + data_urodzenia.value + ',' + ulica.value + ',' + numer.value + ',' + miasto.value + ',' + telefon.value + ',' + rodo.checked);

    // const kontrolki = document.querySelectorAll("input");
    // let wynik = "";
    // kontrolki.forEach(kontrolka => {
    //     if(kontrolka.id == 'rodo'){
    //         if(kontrolka.checked){
    //             wynik += 'TAK' + ',';
    //         }else {
    //             wynik += 'NIE' + ',';
    //         }
    //     }else{
    //         wynik += kontrolka.value + ',';
    //     }
        
    // })
    // console.log(wynik);
}