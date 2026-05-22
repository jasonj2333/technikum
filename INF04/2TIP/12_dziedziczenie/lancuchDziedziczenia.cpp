#include <iostream>
#include <string>

using namespace std;

class Osoba {
public:
    Osoba() {
        cout << "Konstruktor klasy Osoba" << endl;
    }
    string imie, nazwisko;
    string Info() {
        return imie + " " + nazwisko;
    }
};

class Przedmiot {
public:
    Przedmiot() {
        cout << "Konstruktor klasy Przedmiot" << endl;
    }
    string przedmiot;
    string Info() {
        return przedmiot;
    }
};

class Klasa {
public:
    Klasa() {
        cout << "Konstruktor klasy Klasa" << endl;
    }
    string klasa;
    string Info() {
        return klasa;
    }
};

class Pracownik : public Osoba {
public:
    Pracownik() {
        cout << "Konstruktor klasy Pracownik" << endl;
    }
    int id;
    string Info() {
        return imie + " " + nazwisko + " numer id: " + to_string(id);
    }
};

class Nauczyciel : public Pracownik, public Przedmiot {
public:
    Nauczyciel() {
        cout << "Konstruktor klasy Nauczyciel" << endl;
    }
    string Info() {
        return imie + " " + nazwisko + " przedmiot: " + przedmiot;
    }
};

class Wychowawca : public Nauczyciel, public Klasa {
public:
    Wychowawca() {
        cout << "Konstruktor klasy Wychowawca" << endl;
    }
    string Info() {
        return imie + " " + nazwisko + " przedmiot: " + przedmiot + " klasa: " + klasa;
    }
};

class Uczen : public Osoba, public Klasa {
public:
    Uczen() {
        cout << "Konstruktor klasy Uczen" << endl;
    }
    string Info() {
        return imie + " " + nazwisko + " klasa: " + klasa;
    }
};

int main()
{
    Wychowawca wychowawca;
    wychowawca.imie = "Tomek";
    wychowawca.nazwisko = "Atomek";
    wychowawca.id = 123;
    wychowawca.przedmiot = "matematyka";
    wychowawca.klasa = "1 TIP";
    cout << wychowawca.Info() << endl;

    Uczen uczen;
    uczen.imie = "Tytus";
    uczen.nazwisko = "DeeZoo";
    uczen.klasa = "1 TIP";
    cout << uczen.Info() << endl;
}

