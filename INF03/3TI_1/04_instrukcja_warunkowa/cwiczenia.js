let miesiac = 9;

//Jeżeli miesiac jest 12, 1, 2
// - mamy zimę
//Jeżeli miesiac jest 3, 4, 5
// - jest wiosna
//Jeżeli miesiac jest 6, 7, 8
// - mamy lato
//Jeżeli miesiac to 9, 10, 11
// - jest jesień
//W przeciwnym razie - nie znam takiego miesiąca

let a = 1;
let b = -6;
let c = 9;

let delta = b * b - 4 * a * c;
document.writeln(`delta = ${delta} <br>`);

if(delta > 0){
    let x1 = (-b - Math.sqrt(delta)) / 2 * a;
    let x2 = (-b + Math.sqrt(delta)) / 2 * a;
    document.writeln(`x1 = ${x1} <br>`);
    document.writeln(`x2 = ${x2} <br>`);
}else if(delta == 0){
    let x = -b / (2 * a);
    document.writeln(`x = ${x} <br>`);
}else{
    document.writeln("Równanie nie ma pierwiastków rzeczywistych");
}