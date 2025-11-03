const napis = document.querySelector("#napis");
const wynik = document.querySelector("#wynik");
const wielkosc = document.querySelector("#wielkosc");

// napis.onchange = function(){
//     wynik.innerHTML = napis.value;
// }

// napis.addEventListener("keydown", function(){
//     wynik.innerHTML = napis.value;
// })

napis.addEventListener("keydown", ()=>{
    wynik.innerHTML = napis.value;
})

wielkosc.onchange = function(){
    wynik.style.fontSize = wielkosc.value + "px";
}

