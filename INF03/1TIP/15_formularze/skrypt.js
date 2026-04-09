const buttonWyslij = document.querySelector("button[type='submit']");
const formularz = document.querySelector("form");
const bledy = document.querySelector("#bledy");
const imie = document.querySelector("#imie");
const nazwisko = document.querySelector("#nazwisko");
const rodo = document.querySelector("#rodo");
const email = document.querySelector("#email");
//console.log(formularz);
const regexEmail = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;

// buttonWyslij.addEventListener("click", (e)=>{
//     e.preventDefault();
//     console.log("Kliknięto wyślij");
// });

formularz.addEventListener("submit", (e)=>{
    e.preventDefault();
    bledy.innerHTML = "";
    let errors = 0;

    if(imie.value.length < 3){
        bledy.innerHTML += "<p>Imię musi mieć przynajmniej 3 znaki</p>";
        errors++;
    }

    if(nazwisko.value.length < 3){
        bledy.innerHTML += "<p>Nazwisko musi mieć przynajmniej 3 znaki</p>";
        errors++;
    }

    // if(email.value.length < 6 || !email.value.includes("@") || !email.value.includes(".")){
    //     bledy.innerHTML += "<p>Błędny email</p>";
    // }

    if(!regexEmail.test(email.value)){
        bledy.innerHTML += "<p>Błędny email</p>";
        errors++;
    }

    if(!rodo.checked){
        bledy.innerHTML += "<p>Musisz wyrazić zgodę na przetwarzanie danych osobowych</p>";
        errors++;
    }

});

