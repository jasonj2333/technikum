const formularz = document.querySelector("form");
const bledy = document.querySelector("#bledy");

formularz.addEventListener("submit", (e)=>{
    e.preventDefault();
    bledy.innerHTML = "";
    let errors = 0;

    const dane = new FormData(formularz);
    const imie = dane.get("imie");
    const nazwisko = dane.get("nazwisko");
    const wyksztalcenie = dane.get("wyksztalcenie");
    const email = dane.get("email");
    const rodo = dane.get("rodo");
    dane.append("klucz", "12123133124312412341241");

    if(wyksztalcenie.length === 0){
        dane.set("wyksztalcenie", "brak");
    }

    if(imie.length < 3){
        bledy.innerHTML += "<p>Imię musi mieć przynajmniej 3 znaki</p>";
        errors++;
    }

    if(errors == 0){
        //Jeżeli chcesz przesłać zmieniony obiekt dane użyj fetch
        dane.forEach((value, key)=>{
            console.log(key, value);
        })
        //formularz.submit();
    }
})