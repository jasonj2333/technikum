document.images[0].onclick = zakaz;

document.images[0].addEventListener("mouseover", powieksz);
document.images[0].addEventListener("mouseout", zmniejsz);
document.body.addEventListener("click", ()=>{
    document.body.style = "background-color: red"
});

document.body.addEventListener("keypress", (e)=>{
    //console.log(e);
    if(e.key == "b"){
        document.body.style = "background-color: blue";
    }
    else if(e.code == "KeyY"){
        document.body.style = "background-color: yellow";
    }
    else if(e.code == "KeyG"){
        document.body.style = "background-color: green";
    }
    else{
        let red = Math.floor(Math.random() * 256);
        let green = Math.floor(Math.random() * 256);
        let blue = Math.floor(Math.random() * 256);
        document.body.style = `background-color: rgb(${red}, ${green}, ${blue})`;
    }
})

function zakaz(){
    alert("Mówiłem nie klikaj!!!");
}

function powieksz(){
    document.images[0].src = "ziemia1.png"
}

function zmniejsz(){
    document.images[0].src = "ziemia2.png"
}

function ruch(){
    console.log("*");
}

function pusc(){
    console.log("!");
}