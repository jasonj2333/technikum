//zmienna globalna
let imie1 = "Tomek";
var imie = "Tomek VAR"; //raczej nie używamy

function czesc(imie = "Gall Anonim"){
    console.log("Zmienna globalna imie: " + imie1);
    console.log("Zmienna globalna imie VAR: " + globalThis.imie);
    document.writeln("Cześć " + imie + "<br>");
}

console.log(imie1);

{ //Zakres
    let zmiennaLokalna = "Jestem zmienna lokalna";
    console.log(zmiennaLokalna);
}

// document.writeln(zmiennaLokalna); // błąd próba wykorzystania zmiennej poza zakresem

czesc("Michał");
czesc("Anna");
czesc("Wojciech");
czesc();