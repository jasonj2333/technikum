#include <iostream>
using namespace std;

int main()
{
    const int n = 5;

    float tablica[n];

    float suma = 0;

    cout << "Podaj wartosc elementow skladowych tablicy" << endl;

    for (int i = 0; i < n; i++) {
        cout << "tablica[" << i << "] = ";
        cin >> tablica[i];
    }

    cout << "Elementy tablicy: " << endl;

    for (int i = 0; i < n; i++) {
        cout << "tablica[" << i << "] = " << tablica[i] << endl;
        suma += tablica[i];
    }
    //Tutaj wyswietl sume elementow
    cout << "Suma elementow tablicy wynosi: " << suma << endl;
    cout << "Srednia elementow tablicy wynosi: " << suma/n << endl;

    tablica[3] = 0;

    cout << "Elementy tablicy: " << endl;

    for (int i = 0; i < n; i++) {
        cout << "tablica[" << i << "] = " << tablica[i] << endl;

    }
}

