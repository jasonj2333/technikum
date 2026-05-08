#include <iostream>

using namespace std;

struct Data {
    int dd, mm, rr;
};

class Uczen {
public:
    string imie, nazwisko;
    Data dataUrodzenia;
    int* oceny;
    int rozmiar;

    Uczen() {};

    Uczen(string imie, string nazwisko, Data dataUrodzenia) {
        this->imie = imie;
        this->nazwisko = nazwisko;
        this->dataUrodzenia = dataUrodzenia;
    }

    /*Uczen(const Uczen& wzorzec) {
        imie = wzorzec.imie;
        nazwisko = wzorzec.nazwisko;
        dataUrodzenia = { 1, 1, 2001 };
    }*/

    void wyswietlDane() {
        cout << "Dane ucznia: " << endl;
        cout << "Imie: " << imie << endl;
        cout << "Nazwisko: " << nazwisko << endl;
        cout << "Data urodzenia: " << dataUrodzenia.dd << "." << dataUrodzenia.mm << "." << dataUrodzenia.rr << endl;
        for (int i = 0; i < rozmiar; i++) {
            cout << oceny[i] << ", ";

        }
        cout << endl;
    }

    void dodajOceny(int ilosc) {
        rozmiar = ilosc;
        oceny = new int[rozmiar];
        for (int i = 0; i < rozmiar; i++) {
            cout << "Podaj ocene: ";
            cin >> oceny[i];
        }
    }
};

int main()
{
    Uczen uczen1( "Anna", "Kowalska", {4, 5, 2002} );
    uczen1.dodajOceny(4);
    uczen1.wyswietlDane();
    uczen1.oceny[0] = 1;
    Uczen uczen2 = uczen1;
    uczen2.dataUrodzenia.rr = 1992;
    uczen2.wyswietlDane();
    uczen2.oceny[0] = 5;
    uczen1.wyswietlDane();
    uczen2.wyswietlDane();
}