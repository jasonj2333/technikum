//Utwórz obiekt Samochod zawierajacy pola:
// - marka
// - model
// - rocznik
// - spalanie

// - info - funkcja wyświetlajaca informacje o samochodzie

let Samochod = {
    marka: "Fiat",
    model: "126p",
    rocznik: 1980,
    spalanie: 6.5,
    info: function() {
        document.writeln(`Mój samochód ${this.marka} ${this.model} rocznik: ${this.rocznik}, spalanie: ${this.spalanie}<br>`);
    }, 
    trasa: function(km){
        document.writeln(`Na trasie długości ${km} spalimy ${km/100*this.spalanie} litrów<br>`);
    }
}

Samochod.info();
Samochod.trasa(200);