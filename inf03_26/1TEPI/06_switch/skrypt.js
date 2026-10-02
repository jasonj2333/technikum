let poraRoku = "zima1";

switch (poraRoku) {
    case "zima":
        document.writeln("Mamy zimę, jest zimno, trzeba się ciepło ubrać");
        break;
    case "wiosna":
        document.writeln("Coraz ciepłej, już niedługo lato.");
        break;
    case "lato":
        document.writeln("Mamy wakacje, czas odpoczynku!");
        break;
    case "jesień":
        document.writeln("Raz ciepło, raz zimno. Trzeba wracać do szkoły.");
        break;
    default:
        document.writeln("Nie znam takiej pory roku.");
        break;
}

document.writeln("<br>");

let dzienTygodnia = 6;

switch (dzienTygodnia) {
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
        document.writeln("Nie znam takiego dnia tygodnia");
        break;
}