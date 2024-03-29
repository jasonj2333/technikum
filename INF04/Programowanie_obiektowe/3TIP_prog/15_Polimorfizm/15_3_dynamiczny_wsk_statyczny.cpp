#include<iostream>
using namespace std;


class Pracownik {
public:
    string imie, nazwisko;
    void zwrocDane();
};

class Nauczyciel : public Pracownik {
public:
    string przedmiot;
    void zwrocDane();
};

class PAdministracji : public Pracownik {
public:
    string stanowisko;
    void zwrocDane();
};

class PObslugi : public Pracownik {
public:
    string kategoriaZaszeregowania;
    void zwrocDane();
};

class Wychowawca : public Nauczyciel {
public:
    string klasa;
    void zwrocDane();
};


int main()
{
    Pracownik* w_pracownik;

    Pracownik pracownik1;
    pracownik1.imie = "Jan";
    pracownik1.nazwisko = "Kowalski";

    w_pracownik = &pracownik1;
    w_pracownik->zwrocDane();

    Nauczyciel pracownik2;
    pracownik2.imie = "Anna";
    pracownik2.nazwisko = "Nowak";
    pracownik2.przedmiot = "Historia";

    w_pracownik = &pracownik2;
    w_pracownik->zwrocDane();

    Wychowawca pracownik3;
    pracownik3.imie = "Wojciech";
    pracownik3.nazwisko = "Tomaszewski";
    pracownik3.przedmiot = "Matematyka";
    pracownik3.klasa = "IV";

    w_pracownik = &pracownik3;
    w_pracownik->zwrocDane();

    PAdministracji pracownik4;
    pracownik4.imie = "Anna";
    pracownik4.nazwisko = "Wesolowska";
    pracownik4.stanowisko = "ksiegowania";

    w_pracownik = &pracownik4;
    w_pracownik->zwrocDane();

    PObslugi pracownik5;
    pracownik5.imie = "Kinga";
    pracownik5.nazwisko = "Janas";
    pracownik5.kategoriaZaszeregowania = "starsza woźna";

    w_pracownik = &pracownik5;
    w_pracownik->zwrocDane();

    return 0;
}

void Pracownik::zwrocDane() {
    cout << "Metoda zwrocDane() z klasy Pracownik " << endl;
    cout << "Imie: " << imie << endl;
    cout << "Nazwisko: " << nazwisko << endl << endl;
}

void Nauczyciel::zwrocDane() {
    cout << "Metoda zwrocDane() z klasy Nauczyciel " << endl;
    cout << "Imie: " << imie << endl;
    cout << "Nazwisko: " << nazwisko << endl;
    cout << "Przedmiot: " << przedmiot << endl << endl;
}

void Wychowawca::zwrocDane() {
    cout << "Metoda zwrocDane() z klasy Wychowawca " << endl;
    cout << "Imie: " << imie << endl;
    cout << "Nazwisko: " << nazwisko << endl;
    cout << "Przedmiot: " << przedmiot << endl;
    cout << "Klasa: " << klasa << endl << endl;
}

void PAdministracji::zwrocDane() {
    cout << "Metoda zwrocDane() z klasy PAdministracji " << endl;
    cout << "Imie: " << imie << endl;
    cout << "Nazwisko: " << nazwisko << endl;
    cout << "Stanowisko: " << stanowisko << endl << endl;
}

void PObslugi::zwrocDane() {
    cout << "Metoda zwrocDane() z klasy PAdministracji " << endl;
    cout << "Imie: " << imie << endl;
    cout << "Nazwisko: " << nazwisko << endl;
    cout << "Kategoria: " << kategoriaZaszeregowania << endl << endl;
}

