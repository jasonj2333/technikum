#include <iostream>

using namespace std;

struct Pracownik {
    int id;
    char imie[30];
    char nazwisko[40];
};

void pobierzDane(Pracownik&);
void wyswietlDane(const Pracownik&);

int main()
{
    Pracownik pracownik;

    cout << "Wprowadz dane pracownika: " << endl;
    pobierzDane(pracownik);

    cout << "Dane pracownika: " << endl;
    wyswietlDane(pracownik);
}

void pobierzDane(Pracownik& pracownik) {
    cout << "Podaj id pracownika: ";
    cin >> pracownik.id;
    cout << "Podaj imie: ";
    cin >> pracownik.imie;
    cout << "Podaj nazwisko: ";
    cin >> pracownik.nazwisko;
}

void wyswietlDane(const Pracownik& pracownik) {
    cout << "Identyfikator pracownika: " << pracownik.id << endl;
    cout << "Imie: " << pracownik.imie << endl;
    cout << "Nazwisko: " << pracownik.nazwisko << endl;
}