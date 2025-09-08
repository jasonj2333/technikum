// Utwórz obiekt osoba zawierający pola:
// - imie
// - nazwisko
// - rokUrodzenia
// - adres -> obiektem zawierającym
// 	- miejsowosc
// 	- ulica
// 	- nrDomu
// 	- kodPocztowy
// Metody:
// - przedstawSie() - zwraca imie, nazwisko
// - wyswietlAdres() - wypisuje adres (miejscowosc, kodPocztowy, ulica, nrDomu)

// Utwórz 3 osoby według powyższego schematu i umieść je w tablicy Uczniowie,
// a następnie za pomocą pętli wywołaj metodę przewstawSię na każdym elemencie
// tej tablicy

let osoba = {
    imie: "Tomek",
    nazwisko: "Atomek",
    rokUrodzenia: 2001,
    adres: {
        miejscowosc: "Niepołomice",
        ulica: "Szkolna",
        nrDomu: 1,
        kodPocztowy: "32-005"
    },
    przedstawSie: function () {
        return this.imie + " " + this.nazwisko;
    },
    wyswietlAdres(){
        document.write(this.adres.miejscowosc +" " + this.adres.kodPocztowy);
    }
}

let osoba2 = {
    imie: "Zosia",
    nazwisko: "Atomek",
    rokUrodzenia: 2001,
    adres: {
        miejscowosc: "Niepołomice",
        ulica: "Szkolna",
        nrDomu: 1,
        kodPocztowy: "32-005"
    },
    przedstawSie: function () {
        return this.imie + " " + this.nazwisko;
    },
    wyswietlAdres(){
        document.write(this.adres.miejscowosc +" " + this.adres.kodPocztowy);
    }
}

let osoba3 = {
    imie: "Ania",
    nazwisko: "Atomek",
    rokUrodzenia: 2001,
    adres: {
        miejscowosc: "Niepołomice",
        ulica: "Szkolna",
        nrDomu: 1,
        kodPocztowy: "32-005"
    },
    przedstawSie: function () {
        return this.imie + " " + this.nazwisko;
    },
    wyswietlAdres(){
        document.write(this.adres.miejscowosc +" " + this.adres.kodPocztowy);
    }
}

let Uczniowie = [osoba, osoba2, osoba3];

for (let i = 0; i < Uczniowie.length; i++) {
   document.write(Uczniowie[i].przedstawSie() + "<br>");
    
}

for (const uczen of Uczniowie) {
    document.write(uczen.przedstawSie() +"<br>");
}