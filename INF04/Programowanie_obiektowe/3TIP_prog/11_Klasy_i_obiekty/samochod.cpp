/* Program P1 - Klasa Samochod
* Wykonał Paweł Malinowski */

#include <iostream>

using namespace std;

class Samochod
{
    public:
    string marka;
    string model;
    int rocznik;
    float pojemnosc;
    float przyspieszenie; // przyspieszenie od 0 - 100 km/h
    float spalanie; // cykl mieszany

    void dodaj_samochod()
    {
        cout << "WPROWADZANIE NOWEGO SAMOCHODU" << endl;
        cout << "Podaj marke samochodu: ";
        cin >> marka;
        cout << "Podaj model samochodu: ";
        cin >> model;
        cout << "Podaj rocznik samochodu: ";
        cin >> rocznik;
        cout << "Podaj pojemnosc silnika (cm3): ";
        cin >> pojemnosc;
        cout << "Podaj wartosc przyspieszenia od 0 do 100km/h (s): ";
        cin >> przyspieszenie;
        cout << "Podaj wartosc spalania w cyklu mieszanym (l): ";
        cin >> spalanie;
    }

    void pokaz_samochod()
    {
        cout << endl << "Twoj samochod to: " << endl << endl;
        cout << "Marka: " << marka << endl << "Model: " << model << endl;
        cout << "Rocznik: " << rocznik << endl;
        cout << "Pojemnosc: " << pojemnosc << " cm3" << endl;
        cout << "Przyspieszenie: " << przyspieszenie << " s" << endl;
        cout << "Spalanie: " << spalanie << " l";
    }
};

int main()
{
    Samochod s1;

    s1.dodaj_samochod();
    s1.pokaz_samochod();

    return 0;
}