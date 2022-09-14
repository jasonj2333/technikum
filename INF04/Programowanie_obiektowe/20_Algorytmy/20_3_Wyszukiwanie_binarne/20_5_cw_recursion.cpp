#include<iostream>
using namespace std;

//Definicja funkcji pozwającej wyszukać zadaną liczbę w tablicy
int wyszukiwanieBinarne(int t[], int liczba, int poczatek, int koniec) {

    if (poczatek > koniec) return -1;

    int srodek = (poczatek + koniec) / 2;

    if (t[srodek] == liczba) return srodek;
    
    if (t[srodek] < liczba)
        poczatek = srodek + 1;
    else
        koniec = srodek - 1;

    return wyszukiwanieBinarne(t, liczba, poczatek, koniec);

}

//Definicja funkcji pozwalającej wyświetlić wartości elementów tablicy na ekranie
void tablicaWyjscie(int t[], int n) {
    for (int i = 0; i < n; i++)
    {
        cout << "element[" << i << "] = " << t[i] << endl;
    }
}

int main()
{
    //Deklaracja i inicjalizacja tablicy
    int tablica[]{ 10, 21, 32, 43, 54, 65, 76, 87, 98, 109 };
    /*UWAGA:
    1-wymiarowa tablica liczbowa powinna być posortowana*/
    int n = sizeof(tablica) / sizeof(int);//liczba elementów składowych tablicy

    //Prezentacja tablicy wejściowej
    cout << "Zawartość tablicy wejściowej:" << endl;
    tablicaWyjscie(tablica, n);

    int liczba = 65;//szukana liczba
    cout << "Szukana liczba: " << liczba << endl;
    cout << endl;

    //Wyszukanie zadanej liczby w tablicy
    int indeks = wyszukiwanieBinarne(tablica, liczba, 0, n-1);

    //Prezentacja wyników na ekranie monitora
    cout << "Wyniki: " << endl;
    if (indeks != -1) {
        cout << "Pozycja (indeks) szukanej liczby w tablicy: " << indeks << endl;
        cout << "Wartość elementu tablicy o indeksie " << indeks << ": "<< tablica[indeks] << endl;
    }
    else {
        cout << "Zadanej liczby nie znaleziono! " << endl;
    }

    return 0;
}