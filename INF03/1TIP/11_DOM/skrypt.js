console.log(document);
document.body.style.backgroundColor = "yellow";
document.title = "DOM - Document Object Model";

const naglowek = document.getElementById("tytul");
console.log(naglowek);
console.dir(naglowek);
naglowek.style.color = "red";
//naglowek.innerText = "!!!"; //Zamiana tekstu
naglowek.innerText += "!!!"; //Dopisanie tekstu tekstu
console.log(naglowek.innerText);

const akapity = document.getElementsByTagName("p"); //Pobiera kolekcje elementów po nazwie znacznika
console.dir(akapity);
akapity[1].style.backgroundColor = "green";

const elementyListy = document.getElementsByClassName("odd"); //Pobiera po klasie
console.dir(elementyListy);

const imie = document.getElementsByName("imie"); //Pobieranie po atrybucie name
console.dir(imie[0]);
imie[0].value = "Jakiś tekst";

//Pobierania po selektorach CSS
const naglowek2 = document.querySelector("#tytul"); //Id
naglowek2.style.color = "purple";

const akapity2 = document.querySelectorAll("p"); //Tag
console.dir(akapity2);

elementyListy2 = document.querySelectorAll(".odd"); //Klasa
console.dir(elementyListy2);

const imie2 = document.querySelectorAll("[name = 'imie']"); //Atrybut
console.dir(imie2);