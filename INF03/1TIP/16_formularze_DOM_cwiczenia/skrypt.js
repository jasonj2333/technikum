// const indigoButton = document.querySelector("#Indigo");

// indigoButton.addEventListener("click", ()=>{
//     document.body.style.backgroundColor = "Indigo";
// })

const colorButtons = document.querySelectorAll("button");
//console.log(colorButtons);

colorButtons.forEach(button => {
    //console.log(button.id);
    button.addEventListener("click", (e)=>{
        console.log(e.target.id);
        //document.body.style.backgroundColor = button.id;
        //document.body.style.backgroundColor = this.id; //nie działa w funkcji strzałkowej
        document.body.style.backgroundColor = e.target.id;
    })
})

//https://kursjs.pl/kurs/obiekty/obiekty-zaawansowane-this

const fontColor = document.querySelector("#fontColor");
fontColor.addEventListener("change", ()=>{
    document.body.style.color = fontColor.value;
})

const fontSize = document.querySelector("#fontSize");
fontSize.addEventListener("input", ()=>{
    document.body.style.fontSize = fontSize.value + "%";
})

const borderCheck = document.querySelector("#borderCheck");
const image = document.querySelector("#gibraltar");
borderCheck.addEventListener("change", ()=>{
    if(borderCheck.checked){
        image.style.border = "1px solid red";
    }else{
        image.style.border = "none";
    }
})

const listStyles = document.querySelectorAll("input[name='listStyle']");
const lista = document.querySelector("#lista");
console.log(listStyles);
//ul.a {list-style-type: circle;}