//Ustawili tlo strony na beige
document.body.style.backgroundColor = "beige";
document.body.style.color = "blue";

document.body.style = "background-color: #ffccff; color: #330033";

//Dodać do tytułu strony !!!
document.title += "!!!";

//Dodaj żółte tło dla class="title"
const h1 = document.querySelector(".title");
h1.style.backgroundColor = "yellow";

//Wszystkie li z pierwszego artykulu
const firstArticle = document.querySelector(".articles article");
const li = firstArticle.querySelectorAll("li");
console.log(li);
//li[0].style.color = "red";
for(let i = 0; i < li.length; i++){
    li[i].style.color = "red";
}

li.forEach(function(element){ //funkcja anonimowa
    element.style.backgroundColor = "yellow";
})

li.forEach(element => { //funkcja strzałkowa
    element.style.backgroundColor = "green";
})

//Pobieramy wszystkie paragrafy i ustalamy im kolor tekstu na niebieski
const akapity = document.querySelectorAll("p");
console.log(akapity);
akapity.forEach(p => {
    p.style.color = "blue";
})

//przycisk ze stopki
const buttonFooter = document.querySelector("footer button");
buttonFooter.innerText = "Przycisk";

//Pobierz rodzica elementu z klasą "menu-item";
const menuItem = document.querySelector(".menu-item");
console.log(menuItem);
const parentOfMenuItem = menuItem.parentElement;
console.dir(parentOfMenuItem);

//Dzieci elementu
console.log(firstArticle.children[1]);
console.log(firstArticle.firstElementChild);
console.log(firstArticle.firstChild);
console.log(firstArticle.lastElementChild);
console.log(firstArticle.lastElementChild.previousElementSibling); //Poprzedzający element - rodzeństwo
console.log(firstArticle.firstElementChild.nextElementSibling); //Następny element - rodzeństwo
firstArticle.firstElementChild.nextElementSibling.style.color = "white";
console.log(firstArticle.nextElementSibling);

const secondArticle = document.querySelector("[data-id = '2']");
console.log(secondArticle);
secondArticle.style.backgroundColor = "beige";
console.log(secondArticle.dataset.folder);
