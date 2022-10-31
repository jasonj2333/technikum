#include <iostream>
using namespace std;

class Info{
public:
    static string szpital;
    virtual void wyswietlDane() = 0;
};

class Osoba {
protected:
    string imie, nazwisko;
    virtual void wyswietlDane() = 0;
};

class Oddzial : public Info{
public:
    string nazwa;
    int liczbaLozek;
public:
    Oddzial() {};
    Oddzial(string nazwa, int liczbaLozek);
    void wyswietlDane();
};

class Lekarz : public Osoba, public Info {
protected:
    string specjalizacja;

public:
    Lekarz(string imie, string nazwisko, string specjalizacja);
    void wyswietlDane();
};

class Ordynator : public Lekarz {
protected:    
    Oddzial oddzial;
public:
    Ordynator(string imie, string nazwisko, string specjalizacja, Oddzial oddzial);

    void wyswietlDane();
};

string Info::szpital = "Szpital Specjalistyczny im. S. Żeromskiego w Krakowie";

//Program główny
int main()
{
    Lekarz lekarz1("Tomasz", "Nowak", "Kardiolog");
    Lekarz lekarz2("Anna", "Kowalska", "Okulista");
    Oddzial okulistyka("Okulistyka", 23);
    Ordynator lekarz3("Klaudia", "Stokłosa", "Okulista", okulistyka);

    lekarz1.wyswietlDane();
    cout << "-----------------" << endl;
    lekarz2.wyswietlDane();
    cout << "-----------------" << endl;
    okulistyka.wyswietlDane();
    cout << "-----------------" << endl;
    lekarz3.wyswietlDane();
}

//Definicji metod
Lekarz::Lekarz(string imie, string nazwisko, string specjalizacja) {
    this->imie = imie;
    this->nazwisko = nazwisko;
    this->specjalizacja = specjalizacja;
}

void Lekarz::wyswietlDane() {
    cout << "Imię: " << imie << endl;
    cout << "Nazwisko: " << nazwisko << endl;
    cout << "Specjalizacja: " << specjalizacja << endl;
}

Ordynator::Ordynator(string imie, string nazwisko, string specjalizacja, Oddzial oddzial) : Lekarz(imie, nazwisko, specjalizacja) {
    this->oddzial = oddzial;
}

void Ordynator::wyswietlDane() {
    Lekarz::wyswietlDane();
    cout << "Ordynator: " << endl;
    oddzial.wyswietlDane();
}

Oddzial::Oddzial(string nazwa, int liczbaLozek) : nazwa{ nazwa }, liczbaLozek{ liczbaLozek } {}

void Oddzial::wyswietlDane() {
    cout << "Oddzial: " << endl;
    cout << "Nazwa: " << nazwa << endl;
    cout << "Liczba lozek: " << liczbaLozek << endl;
    
}


