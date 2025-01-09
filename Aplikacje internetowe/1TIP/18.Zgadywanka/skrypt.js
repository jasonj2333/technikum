let liczba = Math.floor(Math.random() * 100) + 1;

console.log(liczba);
const odpowiedzInput = document.querySelector("#odpowiedz");
const wynikDiv = document.querySelector("#wynik");

function sprawdzLiczbe() {
    let odp = parseInt(odpowiedzInput.value);
    if(odp > liczba){
        wynikDiv.innerHTML = "Za dużo"
    }
    else if(odp < liczba){
        wynikDiv.innerHTML = "Za mało"
    }
    else if(odp == liczba){
        wynikDiv.innerHTML = "Brawo!!";
    }
    else{
        wynikDiv.innerHTML = "To co wpisałeś nie jest liczbą";
    }

}