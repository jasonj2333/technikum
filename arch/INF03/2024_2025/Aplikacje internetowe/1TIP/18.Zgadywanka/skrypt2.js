const sprawdzButton = document.querySelector("#sprawdz");
const odpowiedzInput = document.querySelector("#odpowiedz");
const wynikDiv = document.querySelector("#wynik");

let liczba = Math.floor(Math.random() * 100) + 1;
console.log(liczba);

// sprawdzButton.addEventListener("click", function(){

// });

sprawdzButton.addEventListener("click", ()=>{
    let odp = Number(odpowiedzInput.value);
    if(isNaN(odp) || odp == 0){
        odpowiedzInput.value = "";
        return;
    }
    if(odp == liczba){
        wynikDiv.innerHTML = "Brawo!!";
        return;
    }
    if(odp > liczba){
        wynikDiv.innerHTML = "Za dużo";
        return;
    }
    if(odp < liczba){
        wynikDiv.innerHTML = "Za mało";
        return;
    }
});