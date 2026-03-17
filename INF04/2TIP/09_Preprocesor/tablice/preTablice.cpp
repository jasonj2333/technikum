#include <iostream>
#include "tablice.h"
using namespace std;

int main()
{
    const int n = 10;
    int liczby[n] = { 4, 5, 67, 12, 4554, 33, 2, 1, 5, 78 };

    cout << "Suma: " << suma(liczby, n) << endl;
    cout << "Srednia: " << srednia(liczby, n) << endl;
    cout << "Min: " << minimum(liczby, n) << endl;
    cout << "Maks: " << maksimum(liczby, n) << endl;

    wypisz(liczby, n);

    int tablica1[5];
    wpisz(tablica1, 5);
    wypisz(tablica1, 5);
}

