const przycisk = document.querySelector("form > button");
//console.log(przycisk);
const wynik = document.querySelector("#wynik");
const formularz = document.querySelector("form");

przycisk.onclick = function(event){
    event.preventDefault(); //Zatrzymaj domyślną akcje

    const imie = document.querySelector("#imie");
    const nazwisko = document.querySelector("#nazwisko");
    const email = document.querySelector("#email");
    const haslo = document.querySelector("#haslo");

    // console.log(imie.value);
    // console.log(nazwisko.value);
    // console.log(email.value);

    wynik.innerHTML = "";
    let errors = 0;

    if(imie.value.length < 3){
        wynik.innerHTML += "<p>Imię musi mieć przynajmniej 3 znaki!!</p>";
        errors++;
    }

    if(nazwisko.value.length < 3){
        wynik.innerHTML += "<p>Nazwisko musi mieć przynajmniej 3 znaki!!</p>";
        errors++;
    }

    if(email.value.length < 6){
        wynik.innerHTML += "<p>Email musi mieć przynajmniej 6 znaków!!</p>";
        errors++;
    }

    if(haslo.value.length < 6){
        wynik.innerHTML += "<p>Hasło musi mieć przynajmniej 6 znaków!!</p>";
        errors++;
    }

    if(!email.value.includes("@") || !email.value.includes(".")){
        wynik.innerHTML += "<p>W emailu musi być znak @ i .</p>";
        errors++;
    }

    if(errors == 0){
        //formularz.submit(); //Wysyła formularz
        wynik.innerHTML = "<p>Dane zostały przesłane</p>";
    }

}