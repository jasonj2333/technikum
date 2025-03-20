const sekcja1 = document.querySelector("#sekcja1");
const sekcja2 = document.querySelector("#sekcja2");

function hello(){
    //Piękny mamy dzień
    sekcja1.innerHTML = "Piękny mamy dzień";
}

window.setTimeout(hello, 3000);

sekcja2.innerHTML += "Skrypt działa dalej. "; 

window.setTimeout(function(){
    sekcja1.innerHTML += "Już jutro weekend !!!";
}, 4000);

function changeBackgroundColor(color="yellow"){
    document.body.style.backgroundColor = color;
}

setTimeout(changeBackgroundColor, 2000);

let lekcje = 8;

function doDomu() {
    sekcja2.innerHTML = `Zostało już tylko ${lekcje} lekcji`;
    lekcje--;
    if(lekcje < 0){
        sekcja2.innerHTML = `Hurra idziemy do domu`;
        clearInterval(pozostalo);
    }
}

let pozostalo = setInterval(doDomu, 1000);
