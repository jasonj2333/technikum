const liczbaX = document.querySelector("#liczbaX");
const liczbaY = document.querySelector("#liczbaY");
const suma = document.querySelector("#suma");

let x = parseInt( prompt("x = ") );
let y = Number( prompt("y = ") );

liczbaX.innerHTML = `x = ${x}`;
liczbaY.innerHTML = `y = ${y}`;
suma.innerHTML = `${x} + ${y} = ${x + y}`;