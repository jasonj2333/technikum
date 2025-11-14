#include <iostream>
using namespace std;

int main()
{
    const int n = 5;
    double tablica[n];

    double* w_tablica;

    w_tablica = tablica; //nazwa tablicy to wskaźnik na 1 element tablicy

    for (int i = 0; i < n; i++)
    {
        cout << "tablica[" << i << "] = ";
        cin >> *(w_tablica + i); //cin >> tablica[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << *(w_tablica + i) << " ";
        //cout << tablica[i] << " ";
        //cout << w_tablica[i] << " ";

    }

    double suma = 0;
    for (int i = 0; i < n; i++)
    {
        //suma += tablica[i];
        suma += *w_tablica;
        w_tablica++; //przesuwamy wskaznik
    }

    cout << "Suma: " << suma << endl;
    cout << "Pozycja wskaznika: " << *w_tablica << endl;

}

