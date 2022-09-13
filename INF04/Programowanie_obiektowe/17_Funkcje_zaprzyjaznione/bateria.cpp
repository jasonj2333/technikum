/* Program - Baterie - hermetyzacja
* Wykonał Paweł Malinowski */

#include <iostream>

using namespace std;

class Bateria
{
    string rodzaj_ogniw;
    float napiecie;
    float pojemnosc;
    float prad_rozladowania;
    int ilosc_cykli;

public:
    Bateria(string = "Nano-fosfatowe (LiFePO4)", float = 3.3, float = 2500, float = 50, int = 1000);
    void pokaz();

    friend void sprawdz(Bateria b, float nap);
};

Bateria::Bateria(string ro, float n, float p, float pr, int ic) 
{
    rodzaj_ogniw = ro;
    napiecie = n;
    pojemnosc = p;
    prad_rozladowania = pr;
    ilosc_cykli = ic;
}


void Bateria::pokaz()
{
    cout << "Rodzaj baterii: " << rodzaj_ogniw << endl;
    cout << "Napiecie: " << napiecie << " V" << endl;
    cout << "Pojemnosc: " << pojemnosc << " mAh" << endl;
    cout << "Prad rozladowania: " << prad_rozladowania << " A" << endl;
    cout << "Ilosc cykli: " << ilosc_cykli << endl;
    cout << "============================================" << endl;
}
//Funkcja zaprzyjaźniona
void sprawdz(Bateria b, float nap)
{
    if (b.napiecie >= nap)
        cout << "Bateria " << b.rodzaj_ogniw << " posiada napiecie wieksze lub rowne " << nap << "V";
}

int main()
{
    Bateria b1;
    b1.pokaz();
    Bateria b2("Litowo-jonowe",3.6,2500,20,1000);
    b2.pokaz();
    Bateria b3("Alkaliczna",3.0);
    b3.pokaz();
    sprawdz(b2,2.5);
    return 0;
}