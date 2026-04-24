#include <iostream>

using namespace std;

struct Data {
    int dd, mm, rr;
};

class Uczen {
public:
    string imie, nazwisko;
    Data dataUrodzenia;

    void wyswietlDane() {
        cout << "Dane ucznia: " << endl;
        cout << "Imie: " << imie << endl;
        cout << "Nazwisko: " << nazwisko << endl;
        cout << "Data urodzenia: " << dataUrodzenia.dd << "." << dataUrodzenia.mm << "." << dataUrodzenia.rr << endl;
    }
};

int main()
{
    Uczen uczen1 { "Anna", "Kowalska", {4, 5, 2002} };
    uczen1.wyswietlDane();
}


