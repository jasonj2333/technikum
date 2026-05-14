const imie = document.querySelector("#imie");
const bilety = document.querySelector("#bilety");
const seans = document.querySelector("#seans");
const karta = document.querySelector("#karta");
const przycisk = document.querySelector("#przycisk");
const wynik = document.querySelector("#wynik");

przycisk.addEventListener("click", (e)=>{
    e.preventDefault(); //zatrzymanie domyślnej akcji - wysłania formularza
    //Jeżeli imię jest puste - Komunikat o błędzie i zatrzymanie działa skryptu
    //Jeżeli ilość biletów jest pusta lub wynosi 0 - - Komunikat o błędzie i zatrzymanie działa skryptu
    if(imie.value.length == 0){
        wynik.innerHTML = "Podaj imię!!!";
        return;
    }

    if(bilety.value <= 0){
        wynik.innerHTML = "Liczba biletów musi być większa od zera";
        return;
    }
    let cena = 0;

    cena = +bilety.value * +seans.value;

    if(karta.checked){
        cena -= cena * 0.15;
    }

    wynik.innerHTML = `Witaj ${imie.value}. Koszt biletów wynosi ${cena} zł`;
})