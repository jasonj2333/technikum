function obliczWynagrodzenie(godziny, stawka){
    if(godziny > 160){
        let nadgodziny = godziny - 160;
        let wynagrodzenie = 160 * stawka + (nadgodziny * stawka * 1.5)
        return wynagrodzenie;
    }
    return godziny * stawka;
}

const stawka = 32;
let godziny = Number(prompt("Ile przepracowałeś godzin: "));

console.log( obliczWynagrodzenie(godziny, stawka) );