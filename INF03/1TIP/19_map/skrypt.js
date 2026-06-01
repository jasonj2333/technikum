const wynik = document.querySelector("#wynik");

let liczby = [1, 2, 3, 4]

liczby.map(function(element, index, liczby){
    wynik.innerHTML += `<p>${index}. ${element}</p>`;
    //console.log(liczby);
})



//Tu lepiej użyć forEach
liczby.map(element => {
    wynik.innerHTML += `<p>${element * 2}</p>`;
})

let wyniki = liczby.map(x => x**2);
console.log(wyniki);

let imiona = ["ania", "wojtek", "tomek"]

let duze = imiona.map(imie => imie.toUpperCase());
console.log(duze);

let dlugosc = imiona.map(i => i.length);
console.log(dlugosc)