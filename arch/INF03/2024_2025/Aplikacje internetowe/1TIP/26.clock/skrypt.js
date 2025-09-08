const divZegar = document.querySelector("#zegar");
const divData = document.querySelector("#data");
const divWakacje = document.querySelector("#wakacje");

const holiday = new Date(2025, 5, 27, 12, 0, 0);

let zegar = setInterval(function(){
    let date = new Date();
    let now = date.getTime();
    let distance = holiday.getTime() - now;

    let days = Math.floor(distance / (24 * 60 * 60 * 1000));
    let hours = Math.floor((distance % (24 * 60 * 60 * 1000))/ (60*60*1000));
    let minutes = Math.floor((distance % (60*60*1000)) / (60*1000));
    let seconds = Math.floor((distance % (60*1000)) / 1000);

    divWakacje.innerHTML = `${days} dni, ${hours} godzin ${minutes} minut ${seconds} sekund`;
    divZegar.innerHTML = date.toLocaleTimeString();
    divData.innerHTML = date.toLocaleDateString();
}, 1000);