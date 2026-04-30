const predkosc = document.querySelector("#predkosc");
const paliwo = document.querySelector("#paliwo");
const przebieg = document.querySelector("#przebieg");
const punkty = document.querySelector("#punkty");
const hamulec = document.querySelector("#hamulec");
const tankuj = document.querySelector("#tankuj");
const jedz = document.querySelector("#jedz");
const spalanie = 6;

function gaz(){
    let V = parseInt(predkosc.textContent);
    if(V < 200){
        V = V + 20;
        predkosc.textContent = V;
    }
    
}

hamulec.onclick = function(){
    let V = parseInt(predkosc.textContent);
    if(V > 0){
        V = V - 20;
        predkosc.textContent = V;
    } 
}

tankuj.onclick = function(){
    let bak = parseFloat(paliwo.textContent);
    if(bak < 50){
        bak += 10; //bak = bak + 10
        paliwo.textContent = bak;
    }
}

jedz.addEventListener("click", function(){
    let S = parseInt(przebieg.textContent);
    let pkt = parseInt(punkty.textContent);
    let bak = parseFloat(paliwo.textContent);
    let V = parseInt(predkosc.textContent);
    let spalonePaliwo = (spalanie * 10) / 100
    if(V > 0 && bak > 0){
        S += 10;
        pkt += 10;
        przebieg.textContent = S;
        bak -= spalonePaliwo;
        if(bak < 0) bak = 0;
        paliwo.textContent = bak.toFixed(2);
    }else{
        pkt -= 10;
        if(V <= 0) alert("Dodaj gazu");
        else alert("Brak paliwa");
    }
    punkty.textContent = pkt;
})

const panel = document.querySelector(".panel");
panel.addEventListener("mouseover", ()=>{ //funkcja strzałkowa
    let r = Math.floor(Math.random() * 256);
    let g = Math.floor(Math.random() * 256);
    let b = Math.floor(Math.random() * 256);
    panel.style.backgroundColor = `rgb(${r}, ${g}, ${b})`;
})