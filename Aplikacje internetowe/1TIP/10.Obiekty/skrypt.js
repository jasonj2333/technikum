document.write("<h1>Obiekty</h1>")

let uczen = {
    imie: "Tomek",
    nazwisko: "Atomek",
    rokUrodzenia: 2009,
    pesel: "09111111111",
    klasa: "1TIP",
    nrDzienniku: 5,
    przedstawSie: function(){
        document.write(`<p>Nazywam się ${this.imie} ${this.nazwisko}</p>`);
    },
    obecny: function(){
        document.write("<p>Obecny!</p>");
    }
}

uczen.przedstawSie();
uczen.obecny();
document.write( uczen.imie );
uczen.imie = "Anna";
uczen.przedstawSie();

uczen.wychowawca = "Tytus";
uczen.podajWychowawce = function(){
    document.write(`<p>Moim wychowawcą jest ${this.wychowawca}</p>`)
}

uczen.podajWychowawce();