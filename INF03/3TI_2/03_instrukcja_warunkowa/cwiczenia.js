let ocena =  4;

//Jeżeli ocena == 1 - pozostajesz w klasie 3
//Jeżeli ocena >= 2 && ocena <= 5 - witamy w klasie 4
//Jeżeli ocena == 6 - Kujon

if(ocena == 1){
    document.writeln("pozostajesz w klasie 3");
}else if(ocena >= 2 && ocena <=5){
    document.writeln("witamy w klasie 4");
}else if(ocena == 6){
    document.writeln("Kujon");
}

let a = 2;
let b = 3
let c = -1;
//ax*x + b*x + c

let delta = b*b - 4*a*c;
document.writeln(`<br>Delta: ${delta}`);
if(delta > 0){
    let x1 = (-b - Math.sqrt(delta)) / 2 * a;
    let x2 = (-b + Math.sqrt(delta)) / 2 * a;
    document.writeln(`x1 = ${x1}, x2 = ${x2}`);
}
else if(delta == 0){
    let x = -b / (2*a)
    document.writeln(`x = ${x}`);
}else{
    document.writeln("Brak miejsc zerowych");
}
