let ocena = -1;
let licznikOcen = 0;
let niedostateczny = 0;

while(ocena != 0){
    ocena = Number(prompt("Podaj ocenę: "));
    licznikOcen++;
    if(ocena == 1) niedostateczny++;
}

document.writeln(`Liczba wszystkich ocen: ${licznikOcen} <br>`);
document.writeln(`Liczba ocen niedostatecznych: ${niedostateczny} <br>`);

switch (niedostateczny) {
    case 0:
        document.writeln("Brak ocen niedostatecznych")
        break;
    case 1:
        document.writeln("Jedna ocena niedostateczna")
        break;
    case 2:
        document.writeln("Dwie oceny niedostateczne")
        break;

    default:
        document.writeln("Więcej niż dwie oceny niedostateczne");
        break;
}