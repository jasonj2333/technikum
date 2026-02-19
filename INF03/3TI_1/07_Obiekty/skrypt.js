let uczen = {
    imie: "Tomek",
    nazwisko: "Atomek",
    pesel: "11122233344",
    klasa: "3TI",
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
document.writeln(uczen.pesel);
uczen.klasa = "4TI";
document.writeln(uczen.klasa);
uczen.wiek = 17;
document.writeln(uczen.wiek);
document.writeln("<br>");
uczen.wypiszWiek = function(){
    document.writeln(`Mam ${this.wiek} lat <br>`);
}
uczen.wypiszWiek();

console.dir(uczen);