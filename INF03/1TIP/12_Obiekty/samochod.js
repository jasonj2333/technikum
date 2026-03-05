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
    #paliwo = 20;
    #punkty = 0;
    #przebieg = 0;

    constructor(marka, model, rok){
        this.marka = marka;
        this.model = model;
        this.rok = rok;
        this.predkosc = 0;
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

    tankuj(wartosc){
        this.#paliwo += wartosc;
        if(this.#paliwo > 50){
            this.#paliwo = 50;
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

//Obsługa akcji
gaz.addEventListener("click", ()=>{
    if(skoda.predkosc <= 160) skoda.przyspiesz(20);
    aktualizacja();
});

hamulec.addEventListener("click", ()=>{
    skoda.hamuj(20);
    aktualizacja();
});

tankuj.addEventListener("click", ()=>{
    skoda.tankuj(10);
    aktualizacja();
});

//Aktualizacja
function aktualizacja(){
    nazwa.textContent = skoda.info();
    paliwo.textContent = skoda.paliwo;
    przebieg.textContent = skoda.przebieg;
    punkty.textContent = skoda.punkty;
    predkosc.textContent = skoda.predkosc;
}

aktualizacja();