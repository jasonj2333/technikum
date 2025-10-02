let dzien = 1;

switch (dzien) {
    case 1:
        document.writeln("mamy poniedziałek");
        break;
    case 2:
        document.writeln("Już jest wtorek");
        break;
    case 3:
        document.writeln("Środa - środek tygodnia");
        break;
    case 4:
        document.writeln("Czwartek - już prawie weekend");
        break;
    case 5:
        document.writeln("Piatek - wieczorem zaczynam weekend");
        break;
    case 6:
    case 7:
        document.writeln("Mamy weekend");
        break;
    default:
        document.writeln("Nie znam takiego dnia tygodnia");
        break;
}

document.writeln("<br>");

let miesiac = 10;
//Jeżeli miesiac to 12, 1, 2 - mamy zimę
//Jeżeli miesiac to 3, 4, 5 - jest wiosna
//Jeżeli miesiac to 6, 7, 8 - mamy lato
//Jeżeli miesiac to 9, 10, 11 - jest jesień
//Inna wartość - nie znam takiego miesiąca
switch (miesiac) {
    case 12:
    case 1:
    case 2:
        document.writeln("jest zima")
        break;
    case 3:
    case 4:
    case 5:
        document.writeln("mamy wiosnę")
        break;
    case 6:
    case 7:
    case 8:
        document.writeln("jest lato")
        break;
    case 9:
    case 10:
    case 11:
        document.writeln("mamy jesień")
        break;
    default:
        document.writeln("Nie znam takiego miesiaca");
        break;
}