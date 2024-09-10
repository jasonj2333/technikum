const dataCzas = document.getElementById("dataCzas");

function dateToPl(){
    let date = new Date();
    let rok = date.getFullYear();
    let miesiac = date.getMonth();
    let dzien = date.getDate();
    let dzien_tyg = date.getDay(); 
    let godzina = date.getHours(); 
    let minuty = date.getMinutes(); 
    let sekundy = date.getSeconds();


    const dni_tygodnia = ["Niedziela", "Poniedziałek", "Wtorek", "Środa", "Czwartek", "Piątek", "Sobota"];

    const miesiace = ["stycznia", "lutego", "marca", "kwietnia", "maja", "czerwca", "lipca", "sierpnia", "września", "października", "listopada", "grudnia"];

    if(minuty < 10){
        minuty = "0" + minuty;
    }

    if(sekundy < 10){
        sekundy = "0" + sekundy;
    }

    let data_print = "Dzisiaj jest: <br>";
    data_print += `${dni_tygodnia[dzien_tyg]}, ${dzien} ${miesiace[miesiac]} ${rok} roku <br>`;
    data_print += `Godzina: ${godzina}:${minuty}:${sekundy}`;
    //Godzina: 16:09:05
    dataCzas.innerHTML = data_print;
}

dateToPl();
