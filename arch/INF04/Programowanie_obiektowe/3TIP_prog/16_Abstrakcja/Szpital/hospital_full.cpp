#include <iostream>
using namespace std;

class Info {
public:
    static string szpital;
    virtual void wyswietlDane() = 0;
};

class Osoba {
protected:
    string imie, nazwisko;
    virtual void wyswietlStawke() = 0; 
public:
    virtual void getDane() = 0;
};

class Oddzial : public Info {
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
    int stawka = 20000;

public:
    Lekarz(string imie, string nazwisko, string specjalizacja);
    void wyswietlDane();
    void wyswietlStawke();
    void getDane();
};

class Ordynator : public Lekarz {
protected:
    Oddzial oddzial;
public:
    Ordynator(string imie, string nazwisko, string specjalizacja, Oddzial oddzial);

    void wyswietlDane();
    void wyswietlStawke();
};

class Pielegniarka : public Osoba, public Info {
protected:
    bool specjalizacja;
    int stawka = 5000;

public:
    Pielegniarka(string imie, string nazwisko, bool specjalizacja);
    void wyswietlDane();
    void wyswietlStawke();
    void getDane();
};

string Info::szpital = "Szpital Specjalistyczny im. S. Żeromskiego w Krakowie";

//Program główny
int main()
{
    Lekarz lekarz1("Tomasz", "Nowak", "Kardiolog");
    Lekarz lekarz2("Anna", "Kowalska", "Okulista");
    Oddzial okulistyka("Okulistyka", 23);
    Ordynator lekarz3("Klaudia", "Stoklosa", "Okulista", okulistyka);
    Pielegniarka pielegniarka1("Aneta", "Zajac", true);
    Pielegniarka pielegniarka2("Katarzyna", "Lubacka", false);

    lekarz1.wyswietlDane();
    cout << "-----------------" << endl;
    lekarz2.wyswietlDane();
    cout << "-----------------" << endl;
    okulistyka.wyswietlDane();
    cout << "-----------------" << endl;
    lekarz3.wyswietlDane();
    cout << "-----------------" << endl;
    pielegniarka1.wyswietlDane();
    cout << "-----------------" << endl;
    pielegniarka2.wyswietlDane();
    cout << "-----------------" << endl;
    cout << "-----------------" << endl;

    Osoba* kadra[] = { &lekarz1, &lekarz2, &lekarz3, &pielegniarka1, &pielegniarka2 };
    for (Osoba* pracownik : kadra) {
        pracownik->getDane();
    }
}

//Definicji metod
Lekarz::Lekarz(string imie, string nazwisko, string specjalizacja) {
    this->imie = imie;
    this->nazwisko = nazwisko;
    this->specjalizacja = specjalizacja;
}

void Lekarz::wyswietlDane() {
    cout << "Imie: " << imie << endl;
    cout << "Nazwisko: " << nazwisko << endl;
    cout << "Specjalizacja: " << specjalizacja << endl;
    Lekarz::wyswietlStawke();
}

void Lekarz::getDane() {
    Lekarz::wyswietlDane();
}

void Lekarz::wyswietlStawke() {
    cout << "Stawka: " << stawka << endl;
}

Ordynator::Ordynator(string imie, string nazwisko, string specjalizacja, Oddzial oddzial) : Lekarz(imie, nazwisko, specjalizacja) {
    this->oddzial = oddzial;
    this->stawka = 30000;
}

void Ordynator::wyswietlDane() {
    Lekarz::wyswietlDane();
    cout << "Ordynator: " << endl;
    oddzial.wyswietlDane();
}

void Ordynator::wyswietlStawke() {
    Lekarz::wyswietlDane();
    cout << "Ordynator: " << endl;
    oddzial.wyswietlDane();
}

Pielegniarka::Pielegniarka(string imie, string nazwisko, bool specjalizacja) {
    this->imie = imie;
    this->nazwisko = nazwisko;
    this->specjalizacja = specjalizacja;
    if (this->specjalizacja) this->stawka = 7500;
}

void Pielegniarka::wyswietlDane() {
    cout << "Imie: " << imie << endl;
    cout << "Nazwisko: " << nazwisko << endl;
    string spec = specjalizacja ? "Tak" : "Nie";
    cout << "Specjalizacja: " << spec  << endl;
    Pielegniarka::wyswietlStawke();
}

void Pielegniarka::getDane() {
    Pielegniarka::wyswietlDane();
}

void Pielegniarka::wyswietlStawke() {
    cout << "Stawka: " << stawka << endl;
}

Oddzial::Oddzial(string nazwa, int liczbaLozek) : nazwa{ nazwa }, liczbaLozek{ liczbaLozek } {}

void Oddzial::wyswietlDane() {
    cout << "Oddzial: " << endl;
    cout << "Nazwa: " << nazwa << endl;
    cout << "Liczba lozek: " << liczbaLozek << endl;

}

