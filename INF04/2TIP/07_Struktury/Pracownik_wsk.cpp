#include <iostream>

using namespace std;

struct Pracownik {
    char imie[20];
    char nazwisko[30];
    char stanowisko[30];
};

int main()
{
    Pracownik pracownik1 = { "Jan", "Kowalski", "dyrektor" };

    Pracownik* wsk;

    wsk = &pracownik1;

    cout << "Dane pracownika: " << endl;
    cout << "Imie: " << wsk->imie << endl;
    cout << "Nazwisko: " << wsk->nazwisko << endl;
    cout << "Stanowisko: " << wsk->stanowisko << endl;

    Pracownik pracownik2 = { "Anna", "Nowak", "kierownik" };
    wsk = &pracownik2;
    cout << "Dane pracownika: " << endl;
    cout << "Imie: " << (*wsk).imie << endl;
    cout << "Nazwisko: " << (*wsk).nazwisko << endl;
    cout << "Stanowisko: " << (*wsk).stanowisko << endl;

    //Zmienna dynamiczna - alokowana na stercie
    wsk = new Pracownik;
    cout << "Podaj imie pracownika: ";
    cin >> wsk->imie;

    cout << "Podaj nazwisko pracownika: ";
    cin >> wsk->nazwisko;

    cout << "Podaj stanowisko: ";
    cin >> wsk->stanowisko;

    cout << "Dane pracownika: " << endl;
    cout << "Imie: " << wsk->imie << endl;
    cout << "Nazwisko: " << wsk->nazwisko << endl;
    cout << "Stanowisko: " << wsk->stanowisko << endl;

    delete wsk; //Zwolnienie pamieci na stercie dla struktury Pracownik

}
