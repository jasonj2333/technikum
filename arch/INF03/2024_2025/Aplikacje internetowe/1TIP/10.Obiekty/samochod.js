// Utwórz obiekt samochód
// Pola: marka, model, rokProdukcji, przebieg
// Metoda: funkcje wyswietlDane()

//Marka: Fiat, model: 126p, rok produkcji: 1987, przebieg: 15000

let samochod = {
    marka: "Fiat",
    model: "126p",
    rokProdukcji: 1987,
    przebieg: 15000,
    wyswietlDane: function(){
        document.write(`Marka: ${this.marka}, model: ${this.model}, rok produkcji: ${this.rokProdukcji}, przebieg: ${this.przebieg}`);
    }
}

samochod.wyswietlDane();