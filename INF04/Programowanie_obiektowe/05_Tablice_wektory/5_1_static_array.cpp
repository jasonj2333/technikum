#include<iostream>
using namespace std;

int main()
{
    const int n = 5;//rozmiar tablicy

    //Deklaracja zmiennej tablicowej o nazwie tablica
    float tablica[n];

    cout << "Podaj wartość elementów składowych tablicy: " << endl;
    //Pobranie poszczególnych elementów składowych z klawiatury
    for (int i = 0; i < n; i++)
    {
        cout << "tablica[" << i << "] = ";
        cin >> tablica[i];
    }

    cout << "Wprowadzone wartość elementów tablicy: " << endl;
    //Wyświetlenie w konsoli na ekranie monitora wartości poszczególnych elementów tablicy
    for (int i = 0; i < n; i++)
    {
        cout << "tablica[" << i << "] = " << tablica[i] << endl;
    }
    return 0;
}