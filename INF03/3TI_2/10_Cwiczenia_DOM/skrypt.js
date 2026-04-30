const wzrost = document.querySelector("#wzrost");
const waga = document.querySelector("#waga");
const oblicz = document.querySelector("button");
const wynik = document.querySelector("#wynik");

oblicz.onclick = function(e){
    e.preventDefault();
    let wzr = (wzrost.value) / 100;
    let wg = waga.value;
    let bmi = wg / (wzr*wzr);

    wynik.innerHTML = bmi.toFixed(2);
    let opis = "";
    if(bmi < 18.5) opis = "niedowaga";
    else if (bmi < 25) opis = "optymalna waga";
    else opis = "nadwaga";
    wynik.innerHTML += "(" + opis + ")";
}

//oblicz.addEventListener("click", function(){})