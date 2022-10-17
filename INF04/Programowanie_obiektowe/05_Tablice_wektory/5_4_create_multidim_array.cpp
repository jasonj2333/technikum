#include<iostream>
using namespace std;

int main()
{
    const int m = 3; //liczba wierszy tablicy
    const int n = 2;//liczba kolumn tablicy

    //Deklaracja tablicy 2-wymiarowej o nazwie tablica połączona z inicjalizacją (jednolitą bezpośrednią) jej elementów składowych
    int tablica1[m][n] { {1,2}, {3,4}, {5,6} }; //C++11

    //Wyświetlenie poszczególnych elementów tablicy tablica
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << "tablica1[" << i << ", " << j << "] = " << tablica1[i][j] << endl;
    }

    //Deklaracja i inicjalizacja tablicy 2-wymiarowej o nazwie tablica2
    int tablica2[m][n]{ 1, 2, 3, 4, 5, 6 }; //C++11
    /*UWAGA:
    Z formalnego punktu widzenia tablicę wielowymiarową można również zainicjować w sposób przedstawiony powyżej.
    Jednakże jest to sposób wykorzystywany raczej w przypadku tablic jednowymiarowych - niezalecany dla tablic wielowymiarowych*/


    //Wyświetlenie poszczególnych elementów tablicy tablica
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << "tablica2[" << i << ", " << j << "] = " << tablica2[i][j] << endl;
    }

    return 0;
}
