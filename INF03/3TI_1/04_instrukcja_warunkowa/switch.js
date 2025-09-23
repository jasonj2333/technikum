let dzienTygodnia = 1; //poniedziałek

switch (dzienTygodnia) {
    case 1:
        document.writeln("Jest poniedziałek, cały tydzień przede mną");
        break;
    case 2:
        document.writeln("Jeszcze tylko 4 dni i weekend");
        break;
    case 3:
        document.writeln("To już środek tygodnia");
        break;
    case 4:
        document.writeln("Już jutro zacznie się weekend");
        break;
    case 5:
        document.writeln("Wieczorem rozpoczyna się weekend");
        break;
    case 6:
    case 7:
        document.writeln("Weekend");
        break;
    default:
        document.writeln("Nie znam takie dnia tygodnia");
        break;
}