const wzrost = document.querySelector("#wzrost");
const waga = document.querySelector("#waga");
const wynik = document.querySelector("#wynik");
const button = document.querySelector("form > button");

function bmi(){
    //let wzr = parseInt(wzrost.value);
    //let wzr = Number(wzrost.value);
    let wzr = +wzrost.value;
    let wg = +waga.value;
    // console.dir(typeof wzr);
    // console.dir(wzr);
}

button.addEventListener("click", (event)=>{
    event.preventDefault();
    bmi();
});