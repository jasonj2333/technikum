let osoba = {
    imie: "Tomek",
    nazwisko: "Atomek",
    pesel: 11122233344,
    kolory: ["czerwony", "zielony"],
    adres: {
        miejscosc: "Niepołomice",
        ulica: "Szkolna",
        numer: 2
    },
    przedstawSie: function(){
        document.write(`Nazywam się ${this.imie} ${this.nazwisko}`)
    },
    podajPesel(){
        document.write(`Mój pesel ${this.pesel}`)
    }

}

document.write(osoba.imie);
document.write(osoba.adres.miejscosc);
osoba.przedstawSie();