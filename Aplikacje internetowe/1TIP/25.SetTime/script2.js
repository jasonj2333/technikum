//Ustawia tło strony na czerwone po upływie 1 sekundy

//Ustawia co 4 sekund losowy kolor tła
// style="background-color:rgb(255, 99, 71)"
//Math.floor(Math.random() * 256);

function changeBackgroundColor(r, g, b){
    document.body.style = `background-color: rgb(${r}, ${g}, ${b})`;
}

setTimeout(changeBackgroundColor(255, 0, 0), 1000);

setInterval(function () {
    let r = Math.floor(Math.random() * 256);
    let g = Math.floor(Math.random() * 256);
    let b = Math.floor(Math.random() * 256);
    changeBackgroundColor(r, g, b);
}, 4000);