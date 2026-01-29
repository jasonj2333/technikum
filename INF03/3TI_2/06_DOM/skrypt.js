console.dir(document);

// const start = Date.now();
// while (Date.now() - start < 2000) {}

document.title = "DOM - Document Object Model";
document.body.style.backgroundColor = "yellow";

//Po id 
const naglowek = document.getElementById("naglowek");
console.log(naglowek);
naglowek.innerHTML += "!!!";

//Po tagu
const paragrafy = document.getElementsByTagName("p");
console.log(paragrafy);
paragrafy[1].style.color = "red";

//Po klasie - class
const nieparzyste = document.getElementsByClassName("odd");
const parzyste = document.getElementsByClassName("even");
console.log(nieparzyste);
console.log(parzyste);
nieparzyste[1].style.color = "green";
parzyste[0].style.color = "blue";

//querySelector / querySelectorAll
const naglowek2 = document.querySelector("#naglowek");
naglowek2.style.color = "purple";

const pierwszyP = document.querySelector("p"); //pobiera pierwszy element p
console.log(pierwszyP);
pierwszyP.style.backgroundColor = "white";

const wszystkieP = document.querySelectorAll("p");
console.log(wszystkieP);
wszystkieP[1].style.backgroundColor = "azure";

const nieparzyste2 = document.querySelectorAll(".odd");
const parzyste2 = document.querySelectorAll(".even");
console.log(nieparzyste2);
console.log(parzyste2);

//Funkcja obsługująca zdarzenie
function sprawdz(){
    let imie = document.querySelector("#imie").value;
    //console.log(imie);
    const wynik = document.querySelector("#wynik");
    wynik.innerHTML = "Cześć " + imie;
}