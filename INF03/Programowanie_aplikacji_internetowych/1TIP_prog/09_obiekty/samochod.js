//Utwórz obiekt samochod
//marka, model, rokProdukcji, przebieg
//funkcja wyswietlDane()

//Marka: Fiat, Model: 125p, Rok produkcji: 1987, Przebieg:150000

const samochod = {
    marka: "Fiat",
    model: "126p",
    rokProdukcji: 1981,
    przebieg: 15000,
    wyswietlDane: function(){
        document.write(`Marka: ${this.marka}, model: ${this.model}, rok produkcji: ${this.rokProdukcji}, przebieg: ${this.przebieg}`);
    }
}

samochod.wyswietlDane();