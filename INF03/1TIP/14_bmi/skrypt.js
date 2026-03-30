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
    let bmi = wg / Math.pow(wzr / 100, 2);
    return bmi;
}

function opisBmi(wskaznikBmi){
    if(wskaznikBmi < 18.5) return "niedowaga";
    else if(wskaznikBmi < 25) return "optimum";
    else if(wskaznikBmi < 30) return "nadwaga";
    else return "otyłość";
}

button.addEventListener("click", (event)=>{
    event.preventDefault();
    const wskaznikBmi = Math.round(bmi() * 100) / 100;

    wynik.innerHTML = wskaznikBmi + " (" + opisBmi(wskaznikBmi) + ")";
});