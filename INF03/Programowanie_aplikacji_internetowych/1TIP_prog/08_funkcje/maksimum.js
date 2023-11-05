//Funkcja o nazwie maks(a, b)
//Zwraca większą wartość
function maks(a, b){
    if(a > b) return a;
    return b;
}

function najwieksza(){
    return arguments;
}

let wieksza = maks(5, 5);
let maksimum = najwieksza(1, 2, 7, 12);
document.write(maksimum[3]);
console.log(maksimum);