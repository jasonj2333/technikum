#include<iostream>
using namespace std;

int main()
{
    int n; //rozmiar tablicy
    cout << "Podaj liczbę elementów tablicy: " << endl;
    cout << "n = ";
    cin >> n;

    //Deklaracja wskaźnika należącego do typu double
    double* wsk;
    //Dynamiczny przydział pamięci na stercie dla tablicy
    wsk = new double[n];
    /*UWAGA:
    Adres pierwszego elementu tablicy dynamicznej zostanie zapisany we wskaźniku wsk.*/

    //Wprowadzenie wartości elementów składowych tablicy z klawiatury
    cout << "Podaj wartość elementów składowych tablicy: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "tablica[" << i << "] = ";
        cin >> *(wsk + i); //równoważne instrukcji: cin >> wsk[i];
    }

    //Deklaracja i inicjalizacja zmiennej suma reprezentującej sumę wartości elementów tablicy
    double suma = 0;

    //Obliczanie sumy elementów zapisanych w tablicy
    for (int i = 0; i < n; i++)
    {
        suma += *(wsk + i); //równoważne instrukcji: suma += wsk[i];
    }

    //Zwolnienie pamięci przydzielonej dynamicznie dla tablicy wskazywanej przez wskaźnik wsk
    delete[] wsk;

    cout << "Suma elementów tablicy wynosi: " << suma << endl;

    return 0;
}