const wyslijBtn = document.querySelector("#dane > button");
const bokA = document.querySelector("#bokA");
const bokB = document.querySelector("#bokB");
const wynik = document.querySelector("#wynik");
//console.log(wyslijBtn);

wyslijBtn.onclick = function(){ 
    let pole = Number(bokA.value) * Number(bokB.value);
    wynik.innerHTML = `<h3>Pole prostokąta o bokach ${bokA.value} i ${bokB.value} wynosi ${pole}</h3>`;
}