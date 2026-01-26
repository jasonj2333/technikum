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