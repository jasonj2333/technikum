const przycisk = document.querySelector("form button");
//console.log(przycisk);
const wynik = document.querySelector("#wynik");
const formularz = document.querySelector("form");

przycisk.onclick = function(event){
    event.preventDefault();
    wynik.innerHTML = "";

    const imie = document.querySelector("#imie");
    const nazwisko = document.querySelector("#nazwisko");
    const email = document.querySelector("#email");
    const haslo = document.querySelector("#haslo");
    let errors = 0;

    if(imie.value.length < 3){
        wynik.innerHTML += "<p>Imię musi mieć przynajmniej 3 znaki</p>";
        errors++;
    }
    if(nazwisko.value.length < 3){
        wynik.innerHTML += "<p>Nazwisko musi mieć przynajmniej 3 znaki</p>";
        errors++;
    }
    if(email.value.length < 6){
        wynik.innerHTML += "<p>Email musi mieć przynajmniej 6 znaków</p>";
        errors++;
    }
    if(!email.value.includes("@") || !email.value.includes(".")){
        wynik.innerHTML += "<p>Email musi zawierać znak @ i .</p>";
        errors++;
    }

    if(haslo.value.length < 8){
        wynik.innerHTML += "<p>Hasło musi mieć przynajmniej 8 znaków</p>";
        errors++;
    }

    //console.log(wynik.innerHTML.length);
    if(errors == 0){
        wynik.innerHTML = "<p>Dane zostały wysłane</p>";
        //formularz.submit();
    }
}