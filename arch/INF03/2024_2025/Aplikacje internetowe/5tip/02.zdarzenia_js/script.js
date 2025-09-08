const imie = document.querySelector("#imie");
const nazwisko = document.querySelector("#nazwisko");
const telefon = document.querySelector("#telefon");
const formularz = document.querySelector("form");

//Metoda 1
function sprawdz() {
    if (imie.value.length < 3) {
        alert("Wypełnij poprawnie pole imię min. 3 znaki");
        return;
    }
    if (nazwisko.value.length < 3) {
        alert("Wypełnij poprawnie pole nazwisko min. 3 znaki");
        return;
    }
    if (telefon.value.length < 9) {
        alert("Wypełnij poprawnie pole telefon min. 9 znaków");
        return;
    }
    formularz.submit();
}

//Metoda 2
const wyslij2 = document.querySelector("#wyslij2");

wyslij2.onclick = function (event) {
    event.preventDefault();
    sprawdz();
}

function sprawdzFormularz(e) {
    e.preventDefault();
    sprawdz();
}

//Metoda 3
const wyslij3 = document.querySelector("#wyslij3");
wyslij3.addEventListener("click", sprawdzFormularz);