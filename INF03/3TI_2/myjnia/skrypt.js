const rodzaj = document.getElementById("rodzaj");
const czas = document.querySelector("#czas");
const wosk = document.querySelector("#wosk");
const oblicz = document.querySelector("#btn");
const wynik = document.querySelector("#wynik");

oblicz.addEventListener("click", function(e){
    e.preventDefault();
    let koszt = 0;
    if(czas.value <= 0){
        wynik.innerHTML = "Błędne dane !!!";
        return;
    }

    if(rodzaj.value == 'basic'){
        koszt = 2 * czas.value;
    }
    else if(rodzaj.value == 'premium'){
        koszt = 4 * czas.value;
    }
    else if(rodzaj.value == 'turbo'){
        koszt = 6 * czas.value;
    }
    else{
        wynik.innerHTML = "Błędne dane !!!";
        return;
    }

    if(wosk.checked){
        koszt += 15;
    }

    wynik.innerHTML = `Koszt usługi wynosi ${koszt} zł.`


})
//oblicz.onclick = function(){}