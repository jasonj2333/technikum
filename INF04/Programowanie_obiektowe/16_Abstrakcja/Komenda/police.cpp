#include <iostream>
using namespace std;

class Info{
public:
    static string komenda;
    virtual void wyswietlDane() = 0;
};

class Osoba {
protected:
    string imie, nazwisko;
    virtual void wyswietlDane() = 0;
};

class Wydzial : public Info{
public:
    string nazwa;
public:
    Wydzial() {};
    Wydzial(string nazwa);
    void wyswietlDane();
};

class Policjant : public Osoba, public Info {
protected:
    string stopien;

public:
    Policjant(string imie, string nazwisko, string stopien);
    void wyswietlDane();
};

class Naczelnik : public Policjant {
protected:    
    Wydzial wydzial;
public:
    Naczelnik(string imie, string nazwisko, string stopien, Wydzial wydzial);

    void wyswietlDane();
};

string Info::komenda = "Komisariat Policji w Niepołomicach";

//Program główny
int main()
{
    cout << Info::komenda << endl;
    Wydzial kryminalny("Wydział kryminalny");
    Naczelnik policjant1("Klaudia", "Stokłosa", "komisarz", kryminalny);
    Policjant policjant2("Tomasz", "Nowak", "posterunkowy");
    Policjant policjant3("Anna", "Kowalska", "sierżant");
    
    kryminalny.wyswietlDane();
    cout << "-----------------" << endl;
    policjant1.wyswietlDane();
    cout << "-----------------" << endl;
    policjant2.wyswietlDane();
    cout << "-----------------" << endl;
    policjant3.wyswietlDane();
}

//Definicji metod
Policjant::Policjant(string imie, string nazwisko, string stopien) {
    this->imie = imie;
    this->nazwisko = nazwisko;
    this->stopien = stopien;
}

void Policjant::wyswietlDane() {
    cout << "Imię: " << imie << endl;
    cout << "Nazwisko: " << nazwisko << endl;
    cout << "Specjalizacja: " << stopien << endl;
}

Naczelnik::Naczelnik(string imie, string nazwisko, string stopien, Wydzial wydzial) : Policjant(imie, nazwisko, stopien) {
    this->wydzial = wydzial;
}

void Naczelnik::wyswietlDane() {
    Policjant::wyswietlDane();
    cout << "Naczelnik: " << endl;
    wydzial.wyswietlDane();
}

Wydzial::Wydzial(string nazwa) : nazwa{ nazwa } {}

void Wydzial::wyswietlDane() {
    cout << "Wydzial: " << endl;
    cout << "Nazwa: " << nazwa << endl;
    
}
