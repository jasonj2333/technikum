//Funkcje wbudowane
//let imie = prompt("Podaj imię");
//alert("Witaj " + imie);

//Definicja fukcji
function funkcja(nazwa = "Anonim"){
    document.getElementById("witaj").innerHTML += "<p>Witaj jestem funkcja o nazwie " + nazwa + "<p>";
}

//Wywołanie funkcji
funkcja("Alicja");
funkcja("Tomek");
funkcja();

function suma(a, b){
    return a + b;
}

function iloraz(a, b){
    if(b == 0) return "Przez zero nie dzielimy";
    return a / b;
}

document.getElementById("witaj").innerHTML += "<p>Suma elementów wynosi " + suma(5, 9) +  "<p>";

document.getElementById("witaj").innerHTML += "<p>Iloraz wynosi " + iloraz(15, 0) +  "<p>";