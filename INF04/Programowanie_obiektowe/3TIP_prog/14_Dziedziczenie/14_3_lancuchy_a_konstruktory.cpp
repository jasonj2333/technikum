#include <iostream>
using namespace std;

class Osoba {
public:
    Osoba(){
        cout << "Konstruktor Osoba" << endl;;
    }
    string imie, nazwisko;
    string Info() {
        return imie + " " + nazwisko ;
    }
};

class Przedmiot {
public:
    Przedmiot() {
        cout << "Konstruktor Przedmiot" << endl;
    }
    string przedmiot;
    string Info() {
        return przedmiot;
    }
};

class Klasa {
public:
    Klasa() {
        cout << "Konstruktor Klasa" << endl;;
    }
    string klasa;
    string Info() {
        return klasa;
    }
};

class Pracownik : public Osoba {
public:
    Pracownik() {
        cout << "Konstruktor Pracownik" << endl;;
    }
    string id;
    string Info() {
        return imie + " " + nazwisko + " numer id: " + id;
    }
};

class Nauczyciel : public Pracownik, public Przedmiot {
public:
    Nauczyciel() {
        cout << "Konstruktor Nauczyciel" << endl;;
    }
    string Info() {
        return imie + " " + nazwisko + " przedmiot: " + przedmiot;
    }
};

class Wychowawca : public Nauczyciel, public Klasa {
public:
    Wychowawca() {
        cout << "Konstruktor Wychowawca" << endl;;
    }
    string Info() {
        return imie + " " + nazwisko + " przedmiot: " + przedmiot + " klasa: " + klasa;
    }
};

class Uczen : public Osoba, public Klasa {
public:
    Uczen() {
        cout << "Konstruktor Uczen" << endl;
    }
    string Info() {
        return imie + " " + nazwisko + " klasa: " + klasa;
        //return Klasa::Info();
    }
};

int main()
{
    Wychowawca wychowawca;
    wychowawca.imie = "Tomek";
    wychowawca.nazwisko = "Atomek";
    wychowawca.przedmiot = "j.polski";
    wychowawca.id = "w123";
    wychowawca.klasa = "III b";
    cout << "Dane nauczyciela: " << wychowawca.Info() << endl;

    Uczen uczen;
    uczen.imie = "Anna";
    uczen.nazwisko = "Kowalska";
    uczen.klasa = "III b";
    cout << "Dane ucznia: " << uczen.Info() << endl;
}
