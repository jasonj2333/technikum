const formularz = document.querySelector("form");
const wyslijBtn = document.querySelector("#wyslij");
const imie = document.querySelector("#imie");
const info = document.querySelector("#info");

//wyslijBtn.addEventListener("click", function(){});
//wyslijBtn.onclick = function(){};
//formularz.addEventListener("submit", ()=>{});
wyslijBtn.addEventListener("click", (e)=>{
    e.preventDefault();
    info.innerHTML = "";
    let errors = 0;
    if(imie.value.length < 3){
        errors++;
        info.innerHTML += "Za krótkie imię <br>";
    }
    if(nazwisko.value.length < 3){
        errors++;
        info.innerHTML += "Za krótkie nazwisko <br>";
    }
    if(wyksztalcenie.value.length < 4){
        errors++;
        info.innerHTML += "Podaj poprawne wykształcenie <br>";
    }
    if(email.value.length < 6 || !email.value.includes("@") || !email.value.includes(".")){
        errors++;
        info.innerHTML += "Niepoprawny email <br>";
    }

    if(rodo.checked == false){
        errors++;
        info.innerHTML += "Musisz zaakceptować RODO  <br>";
    }

    if(errors == 0){
        //akcja wysyłania
        //formularz.submit(); //wysłanie formularza na serwer
        info.innerHTML = "<h3>Formularz został wysłany</h3>";
    }
});