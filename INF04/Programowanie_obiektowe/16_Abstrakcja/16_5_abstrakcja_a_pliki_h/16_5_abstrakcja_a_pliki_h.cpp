#include<iostream>
//Dołączenie do aplikacji zdefiniowanego pliku nagłówkowego
#include "kolo.h"
/* UWAGA:
Kompilator będzie poszukiwał pliku nagłówkowego w katalogu bieżącym (czyli tym, w którym jest zapisany plik main.cpp) */
using namespace std;

int main()
{
    //Utworzenie obiektu klasy Kolo
    Kolo kolo(1); //niejawne wywołanie kontruktora parametrycznego z argumentem 1
    //Odczyt bieżącej wartości promienia
    cout << "Promień koła: " << kolo.getPromien() << endl;
    /* UWAGA:
    Odczyt wartości prywatnej zmiennej członkowskiej _r został zrealizowany z użyciem gettera getPromien(). */

    //Obliczanie pola i obwodu koła.
    double poleK = kolo.pole();
    double obwodK = kolo.obwod();
    /* UWAGA:
    Obliczanie pola i obwodu koła zostało zrealizowane z zastosowaniem publicznych metod instancyjnych klasy Kolo. */

    //Prezentacja wyników:
    cout << "Pole koła: " << poleK << endl;
    cout << "Obwód koła: " << obwodK << endl;
    return 0;
}