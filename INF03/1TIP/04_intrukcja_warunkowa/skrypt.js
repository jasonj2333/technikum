let a = 35;
let b = 25;

if(a > b){
    document.writeln(`Zmienna a=${a} jest większa od b=${b}`);
}else{
    //document.writeln(`Zmienna a=${a} nie jest większa od b=${b}`);
    if(b > a){
        document.writeln(`Zmienna b=${b} jest większa od a=${a}`);
    }else{
        document.writeln(`Zmienne a i b są sobie równe`);
    }
}

document.writeln("<br>");

if(a > b){
    document.writeln(`Zmienna a=${a} jest większa od b=${b}`);
}else if(b > a){
    document.writeln(`Zmienna b=${b} jest większa od a=${a}`);
}else{
    document.writeln(`Zmienne a i b są sobie równe`);
}

document.writeln("<br>");
document.writeln("Dalsza część programu");

let wiek = 17;
//Jeżeli wiek >= 18 - możesz głosować
// w przeciwnym razie - nie możesz głosować

let ocena = 3;
//Jeżeli ocena jest równa 1 - nie przechodzisz do następnej klasy
//Jeżeli ocena jest równa 2 - przechodzisz, ale wiele nie umiesz
//Jeżeli ocena jest równa 3 - coś tam umiesz
//Jeżeli ocena jest równa 4 - umiesz całkiem dobrze
//Jeżeli ocena jest równa 5 - brawo naprawdę to umiesz
//Jeżeli ocena jest równa 6 - umiesz celująco
//W przeciwnym razie - nie znam takiej oceny