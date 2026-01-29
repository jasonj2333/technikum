//Ustaw tło strony na beige i kolor dla strony na blue
document.body.style.backgroundColor = "beige";
document.body.style.color = "blue";

document.body.style = "background-color: #ffccff; color: #330033";

//Dodaj do tytułu strony !!!
document.title += "!!!";
document.title = "!!!" + document.title;

//Dodaj żółte tło dla elementu o class="title" .title
const tytul = document.querySelector(".title");
tytul.style.backgroundColor = "yellow";

//Pobierz wszystkie akapity (p) i wyświetl w konsoli 
const akapity = document.querySelectorAll("p");
console.log(akapity);
akapity[4].style.backgroundColor = "green";

for(let i = 0; i < akapity.length; i++){
    akapity[i].style.color = "red";
}

akapity.forEach(function(element){ //Funkcja anonimowa
    element.style.backgroundColor = "yellow";
})

akapity.forEach(element => { //funkcja strzałkowa
    element.style.fontSize = "1.5rem";
})

