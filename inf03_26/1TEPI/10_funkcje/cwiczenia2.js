function czyPierwsza(liczba){
    if(liczba < 2) return false;

    for(let i = 2; i <= Math.sqrt(liczba); i++){
        if(liczba % i == 0) return false;
    }
    return true;
}

console.log( czyPierwsza(6) );
console.log( czyPierwsza(17) );