const divZegar = document.getElementById("zegar");
const divData = document.getElementById("data");
const divWakacje = document.getElementById("wakacje");
const holiday = new Date(2024, 5, 21, 12, 0, 0);

let zegar = setInterval(function(){
    let date = new Date();
    let now = date.getTime();
    let distance = holiday.getTime() - now;

    let days = Math.floor(distance / (60 * 60 * 24 * 1000));
    let hours = Math.floor((distance % (60 * 60 * 24 * 1000)) / (60 * 60 * 1000));
    let minutes = Math.floor((distance % (60 * 60  * 1000)) / (60 * 1000));
    let seconds = Math.floor((distance % (60  * 1000)) / 1000);

    if(hours < 10 ) hours = "0" + hours;
    if(minutes < 10 ) minutes = "0" + minutes;
    if(seconds < 10 ) seconds = "0" + seconds;

    divZegar.innerHTML = date.toLocaleTimeString();
    divData.innerHTML = date.toLocaleDateString();
    divWakacje.innerHTML = `${days} dni,  ${hours}:${minutes}:${seconds}`;
}, 1000);

// let swieta = new Date(2023, 11, 24, 18, 0);
// generujTimer(swieta)
// let ferie = new Date(2024, 1, 20)
// generujTimer(ferie);