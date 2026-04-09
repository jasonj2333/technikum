const predkosc = document.querySelector("#predkosc");

const hamulec = document.querySelector("#hamulec");
const tankuj = document.querySelector("#tankuj");
const paliwo = document.querySelector("#paliwo");

//Wywołanie z HTML
function gaz(){
    let V = parseInt(predkosc.textContent);
    if(V < 200){
        V += 20;
        predkosc.textContent = V;
    }   
}

//Zdarzenie - własciwość np. onclick
function hamuj(){
    let V = parseInt(predkosc.textContent);
    if(V > 0){
        V -= 20;
        predkosc.textContent = V;
    }
}

hamulec.onclick = hamuj;

//addEventListener
tankuj.addEventListener("click", function(){
    let bak = parseInt(paliwo.textContent);
    if(bak < 50){
        bak += 10;
        paliwo.textContent = bak;
    }    
})
