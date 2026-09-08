const naglowek = document.querySelector("h1");
const tlo = document.body;
// const styl1 = document.querySelector("#styl1");
// const styl2 = document.querySelector("#styl2");
// const styl3 = document.querySelector("#styl3");
// const reset = document.querySelector("#reset");
const przyciski = document.querySelectorAll("button");
//console.log(przyciski);

// styl1.onclick = function(){
//     zmien('styl1');
// };

// styl1.onclick = zmien;
// styl2.onclick = zmien;
// styl3.onclick = zmien;
// reset.addEventListener("click", zmien);
przyciski.forEach(btn => {
    //btn.onclick = zmien;
    btn.addEventListener("click", zmien);
});

function zmien(event) {
    const styl = event.target.id; 
    //console.log(styl);
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