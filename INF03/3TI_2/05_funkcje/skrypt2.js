function potega(a, n=2){
    if(n < 0) return;
    let iloraz = 1;
    for(let i = 0; i < n; i++){
        iloraz = iloraz * a;
    }
    return iloraz;
}

console.log(potega(5,4));
console.log(potega(6));
console.log(potega(9,3));
console.log(potega(28,-1));

function srednia(a, b, c){
    return (a + b + c)/3;
}

console.log(srednia(4, 11, 8));
console.log(srednia(5, 10, 15));

function czyPelnoletni(wiek){
    //Jeżeli wiek >= 18 zwraca true
    //w przeciwnym razie zwraca false
    if(wiek >= 18) return true;
    return false;
}

console.log(czyPelnoletni(16));
console.log(czyPelnoletni(18));
console.log(czyPelnoletni(23));

let sprawdzWiek = czyPelnoletni(21);
if(sprawdzWiek) document.writeln("Możesz kupić energetyka<br>");
else document.writeln("Nie możesz kupić tego towaru.");

function obliczVat(cena, stawka=23){
    //Zwraca wartość Vatu
    return cena * (stawka/100);
}

console.log(obliczVat(100));
console.log(obliczVat(100, 8));
console.log(obliczVat(50, 21));