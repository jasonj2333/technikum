const liczbaX = document.querySelector("#x");
const liczbaY = document.querySelector("#y");
const suma = document.querySelector("#suma");
const oblicz = document.querySelector("#oblicz");

oblicz.addEventListener("click", (e)=>{
    let x = +liczbaX.value;
    let y = +liczbaY.value;
    suma.innerHTML = x + y;
})