const predkosc = document.querySelector("#predkosc");

const hamulec = document.querySelector("#hamulec");
const tankuj = document.querySelector("#tankuj");
const paliwo = document.querySelector("#paliwo");
const jedz = document.querySelector("#jedz");
const przebieg = document.querySelector("#przebieg");
const punkty = document.querySelector("#punkty");
const spalanie = 5;

const panel = document.querySelector(".panel");

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
tankuj.addEventListener("click", function(){ //funkcja anonimowa
    let bak = parseFloat(paliwo.textContent);
    if(bak < 50){
        bak += 10;
        paliwo.textContent = bak;
    }    
})

jedz.addEventListener("click", () => { //funkcja strzałkowa
    let S = parseInt(przebieg.textContent);
    let V = parseInt(predkosc.textContent);
    let bak = parseFloat(paliwo.textContent);
    let pkt = parseInt(punkty.textContent);
    let spalonePaliwo = spalanie / 10;
    if(V > 0 && bak > 0){
        S += 10;
        przebieg.textContent = S;
        pkt += 10; 
        bak -= spalonePaliwo;
        paliwo.textContent = bak;
    }else{
        if(V <= 0) alert("Dodaj gazu");
        else alert("Brak paliwa");
        pkt -= 10;
    }
    punkty.textContent = pkt;
})

panel.addEventListener("mousemove", ()=>{
    console.log("Myszka w panelu");
})