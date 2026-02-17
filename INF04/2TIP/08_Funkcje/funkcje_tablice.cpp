#include <iostream>

using namespace std;

const int n = 5;

void daneWejsciowe(double[]); //tablica do funkcji jest przekazywana przez wskaźnik
double sumaElementow(const double[]);

int main()
{
    double tablica[n];
    daneWejsciowe(tablica);

    cout << "Suma elementow: " << sumaElementow(tablica) << endl;
}

void daneWejsciowe(double tab[]) {
    for (int i = 0; i < n; i++) {
        cout << "Podaj liczbe: ";
        cin >> tab[i];
    }
}

double sumaElementow(const double tab[]) {
    double suma = 0;
    for (int i = 0; i < n; i++) {
        suma += tab[i];
    }
    return suma;
}

