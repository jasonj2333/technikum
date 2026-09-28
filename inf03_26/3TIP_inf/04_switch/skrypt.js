let dzien = prompt("Podaj dzień tygodnia (1 - pn, 7 - niedziela");

switch( Number(dzien) ){
    case 1:
        document.writeln("Poniedziałek");
        break;
    case 2:
        document.writeln("Wtorek");
        break;
    case 3:
        document.writeln("Środa");
        break;
    case 4:
        document.writeln("Czwartek");
        break;
    case 5:
        document.writeln("Piątek");
        break;
    case 6:
    case 7:
        document.writeln("Weekend");
        break;
    default:
        document.writeln("Nie ma takiego dnia");
        break;
}