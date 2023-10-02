#include <iostream>

using namespace std;

class Samochod
{
    static int liczbaSamochodow;    
public:
    string marka;
    string model;
    int rocznik;
    float pojemnosc;
    float przyspieszenie; // przyspieszenie od 0 - 100 km/h
    float spalanie; // cykl mieszany

    static void zwiekszLicznik(){
        liczbaSamochodow++;
    }

    static void pokazLiczbeSamochodow(){
        cout << endl <<"Liczba samochodow: " << liczbaSamochodow << endl;
    }
};

int Samochod::liczbaSamochodow = 0;

//Prototypy funkcji zewnętrzynych
Samochod* dodajSamochod(Samochod*);
void pokazSamochod(const Samochod*);

int main()
{
    Samochod *s1 = new Samochod();

    s1 = dodajSamochod(s1);
    pokazSamochod(s1);

    Samochod::pokazLiczbeSamochodow();

    return 0;
}

Samochod* dodajSamochod(Samochod* s)
{
    cout << "WPROWADZANIE NOWEGO SAMOCHODU" << endl;
    cout << "Podaj marke samochodu: ";
    cin >> s->marka;
    cout << "Podaj model samochodu: ";
    cin >> s->model;
    cout << "Podaj rocznik samochodu: ";
    cin >> s->rocznik;
    cout << "Podaj pojemnosc silnika (cm3): ";
    cin >> s->pojemnosc;
    cout << "Podaj wartosc przyspieszenia od 0 do 100km/h (s): ";
    cin >> s->przyspieszenie;
    cout << "Podaj wartosc spalania w cyklu mieszanym (l): ";
    cin >> s->spalanie;
    s->zwiekszLicznik();

    return s;
}

void pokazSamochod(const Samochod* s)
{
    cout << endl << "Twoj samochod to: " << endl << endl;
    cout << "Marka: " << s->marka << endl << "Model: " << s->model << endl;
    cout << "Rocznik: " << s->rocznik << endl;
    cout << "Pojemnosc: " << s->pojemnosc << " cm3" << endl;
    cout << "Przyspieszenie: " << s->przyspieszenie << " s" << endl;
    cout << "Spalanie: " << s->spalanie << " l";
}