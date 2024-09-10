//let dzienTygodnia = "poniedziałek";
let dzienTygodnia = prompt('Podaj dzień tygodnia');

switch(dzienTygodnia){
    case "poniedziałek":
        document.write('Cały tydzień przede mną');
        break;
    case "wtorek":
        document.write('Jeszcze tylko 4 dni i weekend');
        break;
    case "środa":
        document.write('To już środek tygodnia');
        break;
    case "czwartek":
        document.write('To już jutro');
        break;
    case "piątek":
        document.write('Już prawie weekend');
        break;
    case "sobota":
    case "niedziela":
        document.write('Weekend !!!!');
        break;
    default:
        document.write('Nie znam takie dnia tygodnia');
        break;
}

// switch (key) {
//     case value:
        
//         break;

//     default:
//         break;
// }

