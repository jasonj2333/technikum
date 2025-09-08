const miasto = document.querySelector("#miasto");
const kilometry = document.querySelector("#kilometry");
const oblicz = document.querySelector("button");
const wynik = document.querySelector("#wynik");

function obliczKosztDostawy() {
    if(miasto.checked){
        wynik.innerHTML = "Dowieziemy Twoją pizzę za darmo";
        return;
    }

    let km = parseInt(kilometry.value);
    let koszt = km * 2;
    wynik.innerHTML = `Koszt dostawy Pizzy wynosi ${koszt} złotych`; 
}

//oblicz.onclick = obliczKosztDostawy;
oblicz.addEventListener("click", obliczKosztDostawy);