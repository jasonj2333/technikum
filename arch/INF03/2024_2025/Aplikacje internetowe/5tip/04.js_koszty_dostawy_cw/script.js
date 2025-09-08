const free = document.querySelector("#free");
const result = document.querySelector("#result");
const km = document.querySelector("#km");

function calculate() {
    if(free.checked ){
        result.innerHTML = "Dostawa za darmo";
    }else{
        let cost = parseInt(km.value) * 5;
        result.innerHTML = "Koszt: " + cost + " zł";
        //result.innerHTML = `Koszt: ${cost} zł`;
    }
}

const oblicz2 = document.querySelector("#oblicz2");
//oblicz2.onclick = calculate;

oblicz2.addEventListener("click", calculate);
