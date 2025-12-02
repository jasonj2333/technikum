#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Podaj ilosc elementow tablicy: ";
    cin >> n;

    int *w_tablica;
    w_tablica = new int[n]; //pamięć ram - sterta

    cout << "Podaj kolejne elementy tablicy: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "tablica[" << i << "] = ";
        cin >> w_tablica[i]; // *(w_tablica + i)
    }

    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += w_tablica[i]; // *(w_tablica + i)
    }

    cout << "Suma elementow wynosi: " << suma << endl;

    delete[] w_tablica; //zwolnienie pamięci
}

