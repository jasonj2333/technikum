console.dir(document);

// const start = Date.now();
// while (Date.now() - start < 2000) {}

document.title = "DOM - Document Object Model";
document.body.style.backgroundColor = "beige";
document.body.style.color = "blue";

//Po id
const naglowek = document.getElementById("naglowek");
console.log(naglowek);
naglowek.style.color = "purple";

//Po tagu - znaczniku
const paragrafy = document.getElementsByTagName("p");
console.log(paragrafy);
paragrafy[1].style.backgroundColor = "yellow";
paragrafy[0].style.color = "red";

//Po klasie - class
const nieparzyste = document.getElementsByClassName("odd");
const parzyste = document.getElementsByClassName("even");
console.log(nieparzyste);
console.log(parzyste);

nieparzyste[0].style.color = "white";
nieparzyste[1].style.color = "green";
parzyste[0].style.color = "#FF08A1";

//Query selector
const naglowek2 = document.querySelector("#naglowek"); //Po id
console.log(naglowek2);
naglowek2.style.backgroundColor = "yellow";

const paragrafy2 = document.querySelectorAll("p"); //Po tagu
console.log(paragrafy2);
paragrafy2[0].style.fontSize = "22px";
paragrafy2[1].style.fontSize = "2rem";

const parzyste2 = document.querySelectorAll(".even"); //Po klasie
const nieparzyste2 = document.querySelectorAll(".odd");
console.log(nieparzyste2);
console.log(parzyste2);

function sprawdz(){
    const imie = document.querySelector("#imie").value;
    const h2 = document.querySelector("h2");
    h2.innerHTML = "Cześć " + imie;
}