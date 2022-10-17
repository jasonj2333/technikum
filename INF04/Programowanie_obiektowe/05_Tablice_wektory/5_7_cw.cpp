#include<iostream>
using namespace std;

int main()
{
    int n; //rozmiar tablicy
    cout << "Podaj liczbę elementów tablicy: " << endl;
    cout << "n = ";
    cin >> n;

    //Deklaracja wskaźnika należącego do typu double
    double* wsk, *cwsk;
    //Dynamiczny przydział pamięci na stercie dla tablicy
    wsk = new double[n];
    cwsk = wsk;
    /*UWAGA:
    Adres pierwszego elementu tablicy dynamicznej zostanie zapisany we wskaźniku wsk.*/

    double suma = 0;

    //Wprowadzenie wartości elementów składowych tablicy z klawiatury
    cout << "Podaj wartość elementów składowych tablicy: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "tablica[" << i << "] = ";
        cin >> *wsk; //równoważne instrukcji: cin >> wsk[i];
        suma += *wsk++; //równoważne instrukcji: suma += wsk[i];
    }
         
    //Zwolnienie pamięci przydzielonej dynamicznie dla tablicy wskazywanej przez wskaźnik wsk
    wsk = cwsk;
    delete[] cwsk;

    cout << "Suma elementów tablicy wynosi: " << suma << endl;

    return 0;
}