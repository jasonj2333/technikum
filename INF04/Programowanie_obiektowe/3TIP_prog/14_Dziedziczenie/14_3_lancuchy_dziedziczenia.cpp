#include<iostream>
using namespace std;

//Definicja klasy bazowej osoba
class Osoba {
public:
    string imie;
    string nazwisko;
    string zwrocDane() {
        return imie + " " + nazwisko;
    }
};

//Definicja klasy bazowej przedmiot
class Przedmiot {
public:
    string przedmiot;
    string zwrocDane() {
        return przedmiot;
    }
};

//Definicja klasy bazowej Klasa
class Klasa {
public:
    string klasa;
    string zwrocDane() {
        return klasa;
    }
};

//Definicja klasy pochodnej Pracownik klasy bazowej osoba
class Pracownik : public Osoba {
public: 
    string id;
    string nazwisko{ "" };
    string zwrocDane() {
        return imie + " " + nazwisko + ", numer id: " + id;
    }
};

//Definicja klasy pochodnej Nauczyciel klas bazowych Pracownik, Przedmiot
class Nauczyciel : public Pracownik, public Przedmiot { 
public:
    string zwrocDane() {
        return imie + " " + nazwisko + ", przedmiot: " + przedmiot;
    }
};

//Definicja klasy pochodnej Wychowawca, klas bazowych Nauczciel, Klasa
class Wychowawca : public Nauczyciel, public Klasa {
public:
    string zwrocDane() {
        return imie + " " + nazwisko + ", przedmiot: " + przedmiot + ", klasa: " + klasa;
    }
};

//Definicja klasy pochodnej Uczen, klas bazowych Osoba, Klasa
class Uczen : public Osoba, public Klasa {
public:
    string zwrocDane() {
        return imie + " " + nazwisko + ", klasa: " + klasa;
    }
};
int main()
{
    //Utworzenie obiektu wychowawca klasy Wychowawca
    Wychowawca wychowawca;
    //Nadanie wartości zmiennych członkowskich obiketu wychowawca
    wychowawca.imie = "Jan"; //zmienna odziedziczona po klasie Osoba
    wychowawca.nazwisko = "Kowalski"; //zmienna odziedziczona po klasie Osoba
    wychowawca.przedmiot = "elektronika"; //zmienna odziedziczona po klasie Przedmiot
    wychowawca.klasa = "4A"; //zmienna odziedziczona po klasie Klasa

    //Wywołanie metody zwrocDane() zdefiniowanej w klasie Wychowawca
    cout << "Dane nauczyciela wychowawcy: " << wychowawca.zwrocDane() << endl;
    /*UWAGA:
    Funkcja zwrocDane() wywołana powyżej została zdefiniowana w klasie Wychowawca
    Metoda ta przesłoniła metody o tej samej nazwie zdefiniowane w klasach, po których
    dziedziczy klasa Wychowawca*/

    //Utworzenie obiektu uczen jako instacji klasy Uczen
    Uczen uczen;
    //Nadanie wartości zmiennym członkowskim obiektu uczen
    uczen.imie = "Adam";
    uczen.nazwisko = "Nowak";
    uczen.klasa = "3B";
    //Prezentacja danych ucznia
    cout << "Dane ucznia: " << uczen.zwrocDane() << endl;
    return 0;
}