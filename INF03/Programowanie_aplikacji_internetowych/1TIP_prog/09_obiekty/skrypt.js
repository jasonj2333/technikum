let uczen = {
    imie: "Tomek",
    nazwisko: "Atomek",
    pesel: "111222333",
    klasa: "1TIP",
    nrWDzienniku: 5,
    przedstawSie: function(){
        document.write(`Nazywam się ${this.imie} ${this.nazwisko} <br>`);
    },
    obecny: function(){
        document.write(`Jestem obecny <br>`);
    }
}


uczen.przedstawSie();
uczen.obecny();

document.write(uczen.pesel + "<br>");
uczen.klasa = "2TIP";
document.write(uczen.klasa + "<br>");
uczen.wiek = 16;
document.write(uczen.wiek + "<br>");

uczen.wypiszWiek = function(){
    document.write(`Mam ${this.wiek} lat <br>`);
}

uczen.wypiszWiek();
