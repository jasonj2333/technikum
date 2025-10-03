#include <iostream>
using namespace std;

int main()
{
    int poczatek = 5;
    int koniec = 67;
    int suma = 0;
    int liczba = poczatek;

    while (suma < koniec) {
        suma += liczba;
        liczba++;
    }

    cout << "Suma liczb wynosi: " << suma << endl;

    int liczbaDni;

    do {
        cout << "Podaj liczbe dni w miesiacu: ";
        cin >> liczbaDni;
    } while (liczbaDni < 28 || liczbaDni > 31);

    cout << "Liczba dni wynosi: " << liczbaDni << endl;

    for (int i = 1; i <= liczbaDni; i++) {
        cout << i << "\t";
        if (i % 7 == 0) cout << endl;
    }

}
