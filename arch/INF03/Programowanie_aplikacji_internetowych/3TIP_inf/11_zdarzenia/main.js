function czesc(){
    alert("Cześć");
}

function tlo(kolor = "red"){
    document.body.style.backgroundColor = kolor;
    //document.body.style = "background-color: red";
}

document.querySelector("#tlo3").onclick = function(){
    tlo("yellow");
};

document.querySelector("#reset").onclick = function(){
    tlo("");
};