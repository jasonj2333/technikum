const divZegar = document.querySelector("#zegar");
const divData = document.querySelector("#data");
const divWakacje = document.querySelector("#wakacje");
const holiday = new Date(2026, 5, 26, 12, 0, 0);

// setTimeout(function(){
//     date = new Date();
//     divZegar.innerHTML = date.toLocaleTimeString();
// }, 3000);

let zegar = setInterval(function () {
    let date = new Date();
    divZegar.innerHTML = date.toLocaleTimeString();
    divData.innerHTML = date.toLocaleDateString();
    let distance = holiday - date;

    let days = Math.floor(distance / (60*60*24*1000));
    let hours = Math.floor((distance % (60*60*24*1000)) / (60*60*1000))
    let minutes = Math.floor((distance % (60*60*1000)) / (60*1000))
    let seconds = Math.floor((distance % (60*1000)) / 1000)
    divWakacje.innerHTML = `${days} dni ${hours} godzin ${minutes} minut ${seconds} sekund`;
}, 1000);