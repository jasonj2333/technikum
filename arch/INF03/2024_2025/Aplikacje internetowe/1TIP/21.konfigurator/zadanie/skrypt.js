// document.getElementById("intro");
// document.getElementsByTagName("p");
// document.getElementsByClassName("intro");
// document.getElementsByName("fname");
// document.querySelector(".intro")
// document.querySelectorAll('div')

const bgColorButtons = document.querySelectorAll(".buttons");
const kolorSelect = document.querySelector("#kolorC");
const prawyDiv = document.querySelector("#prawy");
const rozmiarInput = document.querySelector("#rozmiar");
const ramkaCheckbox = document.querySelector("#ramka");
const obrazImg = document.querySelector("#obraz");
//const punktorRadio = document.getElementsByName("punktor");
const punktorRadio = document.querySelectorAll("input[name='punktor']");
const lista = document.querySelector("#lista");


bgColorButtons.forEach(button => {
    button.addEventListener("click", (e)=>{
        kolorTla(e.target.id);
    })
})

function kolorTla(kolor){
    document.body.style.backgroundColor = kolor;
}

kolorSelect.addEventListener("change", kolorCzcionki);

function kolorCzcionki(){
    prawyDiv.style.color = kolorSelect.value;
}

rozmiarInput.addEventListener("change", ()=>{
    prawyDiv.style.fontSize = rozmiarInput.value + "%";
})

ramkaCheckbox.addEventListener("change", (e)=>{
    if(e.target.checked){
        obrazImg.style ="border: 1px solid white";
    }else{
        obrazImg.style.border = "none";
    }
})

punktorRadio.forEach(punkt => {
    punkt.addEventListener("change", (e)=>{
        // const element = e.target.nextSibling.textContent;
        // if(element == "dysk"){
        //     lista.style = "list-style-type: disc";
        // }else if(element == "okrąg"){
        //     lista.style = "list-style-type: circle";
        // }else if(element == "kwadrat"){
        //     lista.style = "list-style-type: square";
        // }
        //console.dir(e.target);
        lista.style = "list-style-type: "+ e.target.value;

    })
})


