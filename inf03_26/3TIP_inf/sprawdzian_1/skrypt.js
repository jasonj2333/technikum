let liczba = Number(prompt("Podaj liczbę całkowitą"));

if(liczba > 0 ){
    document.writeln("Liczba większa od 0")
}else if(liczba < 0){
    document.writeln("Liczba mniejsza od 0")
}else{
    document.writeln("Liczba jest równa 0")
}

let dzien = Number(prompt("Podaj dzień tygodnia"));
switch (dzien) {
    case 1:
        document.writeln("poniedziałek")
        break;
    case 2:
        document.writeln("wtorek")
        break;

    default:
        document.writeln("Nieprawidłowy numer dnia")
        break;
}

let liczbaDodatnia = Number(prompt("Podaj liczbę całkowitą dodatnią"));
for (let i = 1; i <= liczbaDodatnia; i++) {
    document.writeln(i + " ") ;
}