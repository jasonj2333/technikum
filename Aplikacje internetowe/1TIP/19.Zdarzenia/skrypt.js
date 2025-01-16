//const img = document.querySelector("section > img");

//console.log(document.images);

//document.images[0].onmouseover = function(){};
document.images[0].onmouseover = powieksz;
document.images[0].addEventListener("mouseout", zmniejsz);
document.images[0].addEventListener("mousemove", ruch);
document.images[0].addEventListener("mouseup", pusc);
// document.images[0].addEventListener("click", function () {
//     alert("Mówiłem nie klikaj");
// });
document.images[0].addEventListener("click", ()=>{
    alert("Mówiłem nie klikaj");
}); 

document.body.addEventListener("dblclick", ()=>{
    document.body.style = "background-color: red";
});

document.body.addEventListener("keypress", (e)=>{
    console.log(e);
    if(e.key == 'b'){
        document.body.style="background-color: blue";
    }else if(e.code == "KeyY"){
        document.body.style="background-color: yellow";
    }else if(e.code == "KeyG"){
        document.body.style="background-color: green";
    }
    else{
        let r = Math.floor(Math.random() * 256);
        let g = Math.floor(Math.random() * 256);
        let b = Math.floor(Math.random() * 256);
        document.body.style= `background-color: rgb(${r}, ${g}, ${b})`;
    }
});

function powieksz(){
    document.images[0].src = "ziemia.png";
}

function zmniejsz(){
    document.images[0].src = "ziemia1.png";
}

function ruch(){
    console.log("*");
}

function pusc(){
    console.log("!");
}