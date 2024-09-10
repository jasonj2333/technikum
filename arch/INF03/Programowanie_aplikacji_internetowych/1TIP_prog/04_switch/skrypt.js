let dzienTygodnia = "sobota";

switch(dzienTygodnia){
    case "poniedziałek":
        document.write("Nie lubię poniedziałków");
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
        document.write("Weekend!!!");
        break;
    default:
        document.write("Nie znam takiego dnia tygodnia");
        break;
}

document.write("<h2>Promocja do 2 klasy</h2>");
let ocena = 7;

//1 - Nie przechodzisz do klasy II
//2-5 - Uzyskałeś promocje do klasy II
//6 - Uzyskałeś promocje z wyróżnieniem
//inna - nie ma takiej oceny

switch (ocena) {
    case 1:
        document.write("Nie przechodzisz do klasy II");
        break;
    case 2:
    case 3:
    case 4:
    case 5:
        document.write("Uzyskałeś promocje do klasy II");
        break;
    case 6:
        document.write("Uzyskałeś promocje z wyróżnieniem");
        break;

    default:
        document.write("nie ma takiej oceny");
        break;
}