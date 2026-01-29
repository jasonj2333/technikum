//Ustaw tło strony na beige i kolor tekstu na purple
document.body.style.backgroundColor = "beige";
document.body.style.color = "purple";
document.body.style.fontSize = "10px";

document.body.style = "background-color: #ffccff; color: #123123;";

//Dodaj do tytułu strony !!! na końcu
document.title += "!!!";
document.title = "Lekcja 08 - " + document.title; //doklejenie czegoś na początku

//Dodaj żółte tło dla elementy o class = "title" .title
const tytul = document.querySelector(".title");
tytul.style.backgroundColor = "yellow";

//Pobierz wszystkie akapity (p) i wyświetl je w konsoli
const akapity = document.querySelectorAll("p");
console.log(akapity);
//Ustaw tlo dla 5 (z indeksem 4) akapitu na green
akapity[4].style.backgroundColor = "green";

for(let i = 0; i < akapity.length; i++){
    akapity[i].style.color = "red";
}

akapity.forEach(function(element){ //funkcja anonimowa
    element.style.backgroundColor = "#ABC789";
})

akapity.forEach(element =>{ //funkcja strzałkowa
    element.style.fontSize = "1.5rem";
})