//Uchwyty do poszczególnych elementów
const divZegar = document.getElementById("zegar");
const divData = document.getElementById("data");
const divWakacje = document.getElementById("wakacje");
const divWigilia = document.getElementById("wigilia");
const divFerie = document.getElementById("ferie");

//Czasy dla timerów
const wakacje = new Date(2024, 5, 21, 12, 0, 0);
const wigilia = new Date(2023, 11, 24, 18, 0, 0);
const ferie = new Date(2024, 1, 12);

//Funkcja wstawiająja aktualną datę i czas
function aktualnyCzas(){
    let zegar = setInterval(function(){
        let date = new Date();
        divZegar.innerHTML = date.toLocaleTimeString();
        divData.innerHTML = date.toLocaleDateString();
    });
}

function generujTimer(targetDate, element){
    //Tu kod funkcji tworzącej timer
    //targetDate - data do której ma odliczać timer
    //element - miejsce w drzewie DOM, gdzie ma być wstawiony timer
}

aktualnyCzas();
//Wywołania funkcji z kolejnymi datami
generujTimer(wakacje, divWakacje);
generujTimer(ferie, divFerie);
generujTimer(wigilia, divWigilia);

