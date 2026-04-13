//koszt od osoby 100 zł
//w przypadku gdy poprawiny są zaznaczone do ceny wesela należy doliczyć 30%
const sprawdz = document.querySelector("button");
const liczbaGosci = document.querySelector("#iloscGosci");
const poprawiny = document.querySelector("#poprawiny");
const wynik = document.querySelector("#wynik");

sprawdz.addEventListener("click", function(e){
    e.preventDefault();
    let cena = liczbaGosci.value * 100;
    if(poprawiny.checked){
        cena = cena * 1.3;
    }
    wynik.innerHTML = cena;
})