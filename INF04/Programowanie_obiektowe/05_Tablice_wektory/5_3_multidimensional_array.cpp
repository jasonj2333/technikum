#include<iostream>
using namespace std;

int main()
{
    const int m = 3; //liczba wierszy tablicy
    const int n = 2;//liczba kolumn tablicy

    //Deklaracja tablicy 2-wymiarowej o nazwie tablica
    int tablica[m][n];

    //Nadanie wartości początkowych elementom składowym talicy
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            tablica[i][j] = i + j;
        }
    }

    //Wyświetlenie poszczególnych elementów tablicy
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << "Element[" << i << ", " << j << "] = " << tablica[i][j] << endl;
    }

    //Wyznaczenie najmniejszej i największej wartości zapisanej w tablicy
    int minimum, maksimum;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i == 0) && (j == 0)) {
                maksimum = tablica[i][j];
                minimum = tablica[i][j];
            }
            else {
                if (tablica[i][j] > maksimum) maksimum = tablica[i][j];
                if (tablica[i][j] < minimum) minimum = tablica[i][j];
            }
        }
    }

    //Prezentacja wyników na ekranie monitora
    cout << "Najmniejsza wartość zapisana w tablicy: " << minimum << endl;
    cout << "Największa wartość zapisana w tablicy: " << maksimum << endl;
    return 0;
}