const dataCzas = document.querySelector("#dataCzas");

let date = new Date();

console.dir(date);
dataCzas.innerHTML = date.toLocaleString();

function dateToPl(){
    let data = new Date();
    let rok = data.getFullYear();
    let miesiac = data.getMonth();
    let dzien = data.getDate();
    let dzien_tyg = data.getDay();
    let godzina = data.getHours();
    let minuty = data.getMinutes();
    let sekundy = data.getSeconds();

    const dni_tygodnia = ["Niedziela", "Poniedziałek", "Wtorek", "Środa", "Czwartek", "Piątek", "Sobota"];

    const miesiace = ["styczeń", "luty", "marzec", "kwiecień", "maj", "czerwiec", "lipiec", "sierpień", "wrzesień", "październik", "listopad", "grudzień"];

    console.log(miesiace[miesiac]);

    let dataPrint = "Dzisiaj jest: ";
    dataPrint += `${dni_tygodnia[dzien_tyg]}, ${dzien} ${miesiace[miesiac]} ${rok}`;

    //16:05:21

    dataCzas.innerHTML = dataPrint;
}

dateToPl();