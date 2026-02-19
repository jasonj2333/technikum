let uczen = {
    imie: "Tomek",
    nazwisko: "Atomek",
    pesel: "08232133213",
    klasa: "1TIP",
    nrWDzienniku: 5,
    przedstawSie: function(){
        document.writeln(`Nazywam się ${this.imie} ${this.nazwisko} <br>`);
    },
    obecny: function(){
        document.writeln("Jestem obecny <br>");
    }
}

uczen.przedstawSie();
uczen.obecny();
document.writeln(uczen.pesel + "<br>");
uczen.klasa = "2TIP";
document.writeln(uczen.klasa + "<br>");
uczen.wiek = 16;
document.writeln(uczen.wiek + "<br>");
uczen.wypiszWiek = function(){
    document.writeln(`Mam ${this.wiek} lat <br>`);
}

uczen.wypiszWiek();

console.dir(uczen);