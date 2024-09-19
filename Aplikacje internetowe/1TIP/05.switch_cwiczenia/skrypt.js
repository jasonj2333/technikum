let dzienTygodnia = prompt("Podaj dzień tygodnia");

switch (dzienTygodnia) {
    case "poniedziałek":
        document.write("Nie lubię poniedziałku");
        break;
    case "wtorek":
        document.write("Jeszcze daleko do weekendu");
        break;
    case "środa":
        document.write("To już połowa tygodnia");
        break;
    case "czwartek":
    case "piątek":
        document.write("Już prawie weekend");
        break;
    case "sobota":
    case "niedziela":
        document.write("Weekend !!!!");
        break;
    default:
        document.write("Nie znam takiego dnia");
        break;
}

//ćwiczenie
let ocena = 7;

// 1 - Nie przechodzisz do II klasy
// 2-5 - Uzyskałeś promocję do II klasy
// 6 - Uzyskałeś promocję z wyróżnieniem do II klasy
// inny - Nie znam takiej oceny
switch (ocena) {
    case 1:
        document.write("<p>Nie przechodzisz do II klasy</p>");
        break;
    case 2:
    case 3:
    case 4:
    case 5:
        document.write("<p>Uzyskałeś promocję do II klasy</p>");
        break;
    case 6:
        document.write("<p>Uzyskałeś promocję z wyróżnieniem do II klasy</p>");
        break;
    default:
        document.write("<p>Nie znam takiej oceny</p>");
        break;
}