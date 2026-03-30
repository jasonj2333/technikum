const buttonWyslij = document.querySelector("button[type='submit']");
const formularz = document.querySelector("form");
const bledy = document.querySelector("#bledy");
const imie = document.querySelector("#imie");
console.log(formularz);

// buttonWyslij.addEventListener("click", (e)=>{
//     e.preventDefault();
//     console.log("Kliknięto wyślij");
// });

formularz.addEventListener("submit", (e)=>{
    e.preventDefault();
    if(imie.value.length < 3){
        bledy.innerHTML = "<p>Imię musi mieć przynajmniej 3 znaki</p>";
    }
});

