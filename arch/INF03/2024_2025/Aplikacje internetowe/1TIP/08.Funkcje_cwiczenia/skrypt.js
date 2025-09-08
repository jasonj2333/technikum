function wypisz(a){
    document.write("<p>" + a + "</p>");
}

document.write("<h2>Pole koła</h2>");
// Zadanie 1.
// Napisz funkcję obliczającą pole koła.

function poleKola(r){
    let pi = 3.141592;
    return pi * r * r;
}

wypisz( poleKola(5) );

// Zadanie 2.
// Napisz funkcję sprawdzającą czy przekazany do niej rok jest przestępny.
document.write("<h2>Rok przestępny</h2>");
function rokPrzestepny(rok) {
    if((rok%4 == 0 && rok%100 !=0) || (rok%400 == 0)) {
        return true;
    }
    return false;
}

wypisz( rokPrzestepny(2024) );
wypisz( rokPrzestepny(2021) );

 

// Zadanie 3.
// Napisz funkcję sprawdzającą czy przekazana do niej liczba jest parzysta.
document.write("<h2>Parzysta</h2>");

function parzysta(liczba) {
    return liczba % 2 == 0;
}

wypisz(parzysta(5)); 
wypisz(parzysta(12)); 

if(parzysta(11)){
    wypisz("Liczba jest parzysta");
}else{
    wypisz("Liczba jest nieparzysta");
}

// Zadanie 4.
// Napisz funkcję zamieniającą numer dnia na jego nazwę. Zastosuj w niej instrukcję switch.
document.write("<h2>Dzień tygodnia</h2>");

function dzienTygodnia(nr) {
    switch (nr) {
        case 1:
            return "poniedziałek";
            break;
        case 2:
            return "wtorek";
            break;
        default:
            return "Nie znam takie dnia tygodnia";
            break;
    }
}

wypisz( dzienTygodnia(1) );
wypisz( dzienTygodnia(2) );
wypisz( dzienTygodnia(3) );

// Zadanie 5.
// Napisz funkcję sprawdzającą na podstawie wieku czy osoba jest pełnoletnia.
document.write("<h2>Pełnoletnia</h2>");
function pelnoletnia(wiek) {
    return wiek >= 18;
}
wypisz( pelnoletnia(18) );
wypisz( pelnoletnia(14) );
wypisz( pelnoletnia(22) );
 

//KALKULATOR: Obliczy wybrane przez użytkownika działanie (suma, różnica, iloczyn lub iloraz) z dwóch podanych przez użytkownika liczb. Wynik działania zwracamy.

//MAKS: wypisze na ekran wartość największej spośród 3 liczb podanych przez użytkownika.

//WZROST: wczyta od użytkownika wzrost, następnie wypisze na ekran komunikat klasyfikujący wzrost do jednej z trzech kategorii: < 150cm niski, > 180cm wysoki lub w pozostałych przypadkach średni.

//BMI: wczyta od użytkownika wartość wzrostu (cm) oraz wagi (kg), następnie obliczy wartość BMI (kg/m2). Następnie zwróci komentarz:
// - BMI < 18,5: za mało!
// - BMI > 25: za dużo!
// - pomiędzy: OK!

//STARSZY: wczyta dwa argumenty będące liczbą lat dwóch osób, następnie wypisze komunikat z informacją, która z tych osób jest starsza

//TROJKAT: wczyta od użytkownika 3 liczby całkowite, następnie zwróci wynik true lub false będący informacją czy jeśli przyjąć, że są to długości boków, czy dałoby się utworzyć z nich trójkąt
