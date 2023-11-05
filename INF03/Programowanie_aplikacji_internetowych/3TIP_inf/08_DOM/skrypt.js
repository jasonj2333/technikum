const tytul = document.getElementById("tytul");
const tekst = document.getElementById("tekst");
const kolor = document.getElementById("kolor");
const body = document.getElementById("strona");
//console.dir(kolor);

tytul.style.color = "red";
tytul.style.backgroundColor = "beige";

tytul.innerHTML = "Fake title";

tekst.style.backgroundColor = "Snow";
tekst.innerHTML = "<p>Bardzo lubię JS</p>";

body.style.backgroundColor = kolor.value;