class Osoba{
    adres = {}
    constructor(imie, nazwisko, rokUrodzenia, miejscowosc=null, ulica=null, nrDomu=null){
        this.imie = imie;
        this.nazwisko = nazwisko;
        this.rokUrodzenia = rokUrodzenia;
        this.adres.miejscowosc = miejscowosc;
        this.adres.ulica = ulica;
        this.adres.nrDomu = nrDomu;
        this.kolor = "niebieski";

        document.write("<p>Nowa osoba została utworzona</p>");
    }

    przedstawSie(){
        return this.imie + " " + this.nazwisko;
    }

    zwrocAdres(){
        if(this.adres.miejscowosc == null || this.adres.ulica == null){
            return "Niepełne dane adresowe";
        } 
        return this.adres.miejscowosc + ", " + this.adres.ulica + " " + this.adres.nrDomu;
    }
}

let osoba1 = new Osoba("Tomek", "Atomek", 2004, "Niepołomice", "Szkolna", 1);
let osoba2 = new Osoba("Ala", "Nowak", 2001, "Niepołomice", "Szkolna", 14);
let osoba3 = new Osoba("Zofia", "Buczek", 2002);

//let uczniowie = new Array(osoba1, osoba2, osoba3);
let uczniowie = [osoba1, osoba2, osoba3];

for (const uczen of uczniowie) {
    document.write( uczen.przedstawSie() + "<br>" );
    document.write( uczen.zwrocAdres() + "<br>" );
}