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
    //pola prywatne - nie widoczne poza klasą
    #paliwo = 50;
    #punkty = 1;
    #przebieg = 1;

    constructor(marka, model, rok){
        this.marka = marka;
        this.model = model;
        this.rok = rok;
        this.predkosc = 1;
    }

    info(){
        return `${this.marka} ${this.model} ${this.rok}`;
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

    get paliwo(){
        return this.#paliwo;
    }

    get punkty(){
        return this.#punkty;
    }

    get przebieg(){
        return this.#przebieg;
    }
}

const skoda = new Samochod("Skoda", "Fabia", 2000);
// skoda.info();
// skoda.przyspiesz(100);
// skoda.info();
// skoda.hamuj(120);
// skoda.info();
const nazwa = document.querySelector("#nazwa");
const predkosc = document.querySelector("#predkosc");
const paliwo = document.querySelector("#paliwo");
const przebieg = document.querySelector("#przebieg");
const punkty = document.querySelector("#punkty");
//Przyciski
const gaz = document.querySelector("#gaz");
const hamulec = document.querySelector("#hamulec");
const jedz = document.querySelector("#jedz");
const tankuj = document.querySelector("#tankuj");
const hamuj = document.querySelector("#hamuj");

//Aktualizacja
nazwa.textContent = skoda.info();
paliwo.textContent = skoda.paliwo;
przebieg.textContent = skoda.przebieg;
punkty.textContent = skoda.punkty;
predkosc.textContent = skoda.predkosc;