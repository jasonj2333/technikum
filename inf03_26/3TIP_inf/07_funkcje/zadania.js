function napiwek(cena, procent){
    return cena * procent / 100;
}

console.log(napiwek(80, 10));  // 8
console.log(napiwek(150, 15)); // 22.5

function naFahrenheita(stopnie){
    return stopnie * 9/5 + 32;
}

console.log(naFahrenheita(100)); // 212

for(let i = 0; i <= 100; i+=20){
    document.writeln(`Stopnie Celsjusz: ${i} -> ${naFahrenheita(i)} Fahrenheita <br>`);
}

function najwiekszaZTrzech(a, b, c){
    let maks = a;
    if(b > maks) maks = b;
    if(c > maks) maks = c;
    return maks;
}

console.log(najwiekszaZTrzech(3, 5, 4)); // 5
console.log(najwiekszaZTrzech(6, 2, 6)); // 6

function ileSamoglosek(tekst){
    const samogloski = "aeiouy";
    tekst = tekst.toLowerCase();
    let licznik = 0;
    // for(let i = 0; i < tekst.length; i++){
    //     if(samogloski.includes(tekst[i])) licznik++;
    // }
    for (const znak of tekst) {
        if(samogloski.includes(znak)) licznik++;
    }
    return licznik;
}

console.log(ileSamoglosek("programowanie")); // 6
console.log(ileSamoglosek("Informatyka"));