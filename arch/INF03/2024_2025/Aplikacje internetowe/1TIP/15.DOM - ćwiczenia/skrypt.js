const autor = document.querySelector("#autor");
autor.innerHTML = "Wykonał: Jerzy Jasonek";

const header = document.querySelector("header");
header.style.backgroundColor = "blue";

//const images = document.querySelectorAll("img");
//console.log(document.images);

for (const img of document.images) {
    img.style = "border: 4px solid red";
}

const li = document.querySelectorAll("li");
for (const el of li) {
    el.style.color = "red";
}

// const ul = document.querySelector("ul");
// ul.style.color = "yellow";

//console.log(document.forms);
//console.log(document.links);

const headerA = document.querySelectorAll("header > a");
//console.log(headerA);
for (const a of headerA) {
    a.style.color = "white";
}

//const imgTruskawka = document.querySelector("#truskawka");
const imgTruskawka = document.querySelector("#wyroby > img:nth-child(3)");
console.log(imgTruskawka);
imgTruskawka.style.width = "400px";

//width: 200%

const ul = document.querySelector("ul");
//console.log(ul);
ul.innerHTML += "<li>Czekolada</li>";

const nowyLi = document.createElement("li"); //<li></li>
nowyLi.innerText = "Cukierki"; //<li>Cukierki</li>
nowyLi.style.color = "red"; //<li style="color: red">Cukierki</li>

ul.appendChild(nowyLi);

console.log(ul.children);

for (const element of ul.children) {
    if(element.innerText == "Czekolada"){
        element.remove();
    }
}

//ul.remove();

//w article dodaj <p>Najlepsze ciasta na świecie</p>
//<p>Codzienne super promocje</p>

const article = document.querySelector("article");
article.innerHTML += "<p>Najlepsze ciasta na świecie</p>";

const p = document.createElement("p");
p.innerText = "Codzienne super promocje";
article.appendChild(p);