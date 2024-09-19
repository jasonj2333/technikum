const a = document.querySelector("#a");
const b = document.querySelector("#b");
const wynik = document.querySelector("#wynik");

function dodawanie() {
    let suma = parseInt(a.value) + parseInt(b.value);
    wynik.innerHTML = 'Wynik: ' + suma;
}

function potegowanie() {
    let pot = parseInt(a.value) ** parseInt(b.value);
    wynik.innerHTML = 'Wynik: ' + pot;
}

//Metoda 2
const przyciskOdejmij = document.querySelector("#odejmij");

przyciskOdejmij.onclick = function() {
    let roznica = parseInt(a.value) - parseInt(b.value);
    wynik.innerHTML = 'Wynik: ' + roznica;
}

//Metoda 3
const przyciskMnozenie = document.querySelector("#pomnoz");

przyciskMnozenie.addEventListener("click", function () {
    let iloczyn = parseInt(a.value) * parseInt(b.value);
    wynik.innerHTML = 'Wynik: ' + iloczyn;
})