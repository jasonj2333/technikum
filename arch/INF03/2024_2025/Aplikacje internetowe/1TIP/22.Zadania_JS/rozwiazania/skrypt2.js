const spalanie = document.querySelector("#spalanie");
const dystans = document.querySelector("#dystansKM");
const wynik = document.querySelector("#wynik_16");
const oblicz = document.querySelector("button");

oblicz.addEventListener("click", ()=>{
    let paliwo = +spalanie.value * +dystans.value / 100;
    //wynik.innerHTML = "Potrzebujesz: " + paliwo + " litrów paliwa";
    wynik.innerHTML = `Potrzebujesz: ${paliwo} litrów paliwa`;
});