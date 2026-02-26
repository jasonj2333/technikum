const przycisk = document.querySelector("form button");
console.log(przycisk);

przycisk.onclick = function(event){
    event.preventDefault();

    const imie = document.querySelector("#imie");
    const nazwisko = document.querySelector("#nazwisko");
    const email = document.querySelector("#email");
    const haslo = document.querySelector("#haslo");
    console.log(imie.value);
    console.log(nazwisko.value);
    console.log(email.value);
    console.log(haslo.value);
}