// Klasa Samochod ma mieć właściwości:
// marka
// model
// rok
// predkosc = 0

// Metody:
// info() – wyświetla informacje o samochodzie
// przyspiesz(wartosc) – zwiększa prędkość o wartosc
// hamuj(wartosc) – zmniejsza prędkość (nie może spaść poniżej 0)

class Samochod{
    constructor(marka, model, rok){
        this.marka = marka;
        this.model = model;
        this.rok = rok;
        this.predkosc = 0;
    }

    info(){
        console.log(`${this.marka} ${this.model} ${this.rok}`);
        console.log(`Aktualna prędkość: ${this.predkosc}`);
    }

    przyspiesz(wartosc){
        this.predkosc += wartosc;
    }

    hamuj(wartosc){
        this.predkosc -= wartosc;
        if(this.predkosc < 0){
            this.predkosc = 0;
        }
    }
}

const skoda = new Samochod("Skoda", "Fabia", 2000);
skoda.info();
skoda.przyspiesz(100);
skoda.info();
skoda.hamuj(120);
skoda.info();