let ocena = 2;
//Jeżeli ocena jest równa 1 - nie przechodzisz do następnej klasy
//Jeżeli ocena jest równa 2 - przechodzisz, ale wiele nie umiesz
//Jeżeli ocena jest równa 3 - coś tam umiesz
//Jeżeli ocena jest równa 4 - umiesz całkiem dobrze
//Jeżeli ocena jest równa 5 - brawo naprawdę to umiesz
//Jeżeli ocena jest równa 6 - brawo naprawdę to umiesz
//W przeciwnym razie - nie znam takiej oceny
switch (ocena) {
    case 1:
        document.writeln("nie przechodzisz do następnej klasy");
        break;
    case 2:
        document.writeln("przechodzisz, ale wiele nie umiesz");
        break;
    case 3:
        document.writeln("coś tam umiesz");
        break;
    case 4:
        document.writeln("umiesz całkiem dobrze");
        break;
    case 5:
    case 6:
        document.writeln("brawo naprawdę to umiesz");
        break;
    default:
        document.writeln("nie znam takiej oceny");
        break;
}

let miesiac = 10;
//Jeżeli miesiac jest 12, 1, 2 - jest zima
//Jeżeli miesiac jest 3, 4, 5 - mamy wiosnę
//Jeżeli miesiac jest 6, 7, 8 - jest lato
//Jeżeli miesiac jest 9, 10, 11 - mamy jesien
//Inna wartość - nie znam takiego miesiaca