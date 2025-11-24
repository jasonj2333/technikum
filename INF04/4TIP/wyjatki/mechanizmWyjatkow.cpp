#include <iostream>
using namespace std;

int main()
{
    try {
        //Dane wejsciowe
        double licznik = 1, mianownik = 0;
        if (mianownik == 0) throw mianownik;

        cout << "Licznik: " << licznik << endl;
        cout << "Mianownik: " << mianownik << endl;
        cout << "Iloraz: " << licznik / mianownik << endl;
    }
    catch (double blad) {
        cout << "Blad dzielenia przez " << blad << endl;
    }
}

