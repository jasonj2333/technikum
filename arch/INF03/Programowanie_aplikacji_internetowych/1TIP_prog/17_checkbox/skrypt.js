const wyslij = document.querySelector("#wyslij");
const imie = document.querySelector("#imie");
const rodo = document.querySelector("#rodo");

wyslij.addEventListener("click", sprawdz);

function sprawdz(){
    if(!rodo.checked){
        alert("Musisz wyrazić zgodę na RODO");
    }else{
        alert("Twoja wiadomość została wysłana");
    };
}