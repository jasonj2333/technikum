// osoba
// - imie
// - nazwisko
// - rok urodzenia
// - adres
// - przedstawSie()

const osoba = {
    imie: "Tomek",
    nazwisko: "Atomek",
    rokUrodzenia: 1997,
    adres: {
        miejscowosc: "Niepołomice",
        ulica: "Szkolna",
        nrDomu: 15,
        kodPocztowy: "32-005",
    },
    przedstawSie: function(){
        document.write(`<p>Cześć jestem ${this.imie} ${this.nazwisko}</p>`)
    },
    wyswietlAdres(){
        document.write(`<p>Mieszkam w ${this.adres.miejscowosc} na ulicy ${this.adres.ulica} pod numerem ${this.adres.nrDomu}</p>`)
    }
}


console.log(osoba.imie)
console.log(osoba.adres.miejscowosc)
osoba.przedstawSie();
osoba.wyswietlAdres();