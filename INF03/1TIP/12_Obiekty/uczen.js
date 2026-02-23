class Uczen {
    constructor(imie, nazwisko, pesel, wiek, klasa, nrWDzienniku){
        this.imie = imie;
        this.nazwisko = nazwisko;
        this.pesel = pesel;
        this.wiek = wiek;
        this.klasa = klasa;
        this.nrWDzienniku = nrWDzienniku;
    }

    przedstawSie (){
        document.writeln(`Nazywam się ${this.imie} ${this.nazwisko} <br>`);
    }

    obecny() {
        document.writeln(`${this.nazwisko}: Jestem obecny <br>`);
    }

    wypiszWiek(){
        document.writeln(`Mam ${this.wiek} lat <br>`);
    }
}

const uczen1 = new Uczen("Tomek", "Atomek", "11122233344", 15, "1TIP", 2);
const uczen2 = new Uczen("Anna", "Nowak", "13232223334", 15, "1TIP", 18);
const uczen3 = new Uczen("Karolina", "Kowalska", "13235543553", 16, "2TIP", 21);

const szkola = [uczen1, uczen2, uczen3];

for(let i = 0; i < szkola.length; i++){
    szkola[i].przedstawSie();
}

for(const uczen of szkola){
    uczen.obecny();
}