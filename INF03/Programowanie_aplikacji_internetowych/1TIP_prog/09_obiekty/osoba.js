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
        kodPocztowy: "32-005"
    },
    przedstawSie(){
        document.write(`Cześć jestem ${this.imie} ${this.nazwisko}`);
    },
    wyswietlAdres(){
        document.write(`Mieszkam w ${this.adres.miejscowosc} na ulicy ${this.adres.ulica} pod numerem ${this.adres.nrDomu}`)
    },
    mojWiek(){
        const d = new Date();
        let year = d.getFullYear();
        document.write(`Mam ${year - this.rokUrodzenia} lat`);
    }

}

osoba.przedstawSie();
osoba.wyswietlAdres();
osoba.mojWiek();