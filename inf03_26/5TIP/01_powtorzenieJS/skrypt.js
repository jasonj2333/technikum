const naglowek = document.querySelector("h1");
const tlo = document.body;

function zmien(styl) { 
    if(styl == "styl1"){
        naglowek.style.color = "red";
        tlo.style.backgroundColor = "green";
    }else if(styl == "styl2"){
        naglowek.style.color = "blue";
        tlo.style.backgroundColor = "yellow";
    }else if(styl == "styl3"){
        naglowek.style.color = "white";
        tlo.style.backgroundColor = "red";
    }else if(styl == "reset"){
        naglowek.style.color = "black";
        tlo.style.backgroundColor = "white";
    }
    
    //console.log(naglowek);
}