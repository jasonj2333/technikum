#include<iostream>
#include <stdlib.h> // niezbędne dla funkcji srand i rand
#include <time.h> // niezbędne dla funkcji time
using namespace std;

//Definicja funkcji pozwalającej posortować elementy tablicy metodą bąbelkową
void sortowanieBabelkowe(float t[], int n) {
    int i, j;
    float temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (t[j] < t[i]) {
                temp = t[i];
                t[i] = t[j];
                t[j] = temp;
            }
        }
    }
}
//UWAGA:
//Funkcja sortowanieBabelkowe() pozwala posortować elementy 1-wymiarowej tablicy liczbowej
//w porządku rosnącym - od elementu najmniejszego do największego

//Definicja funkcji pozwalającej wprowadzić wartości elementów tablicy losowo (generator liczb pseudolosowych)
void tablicaWejscie(float t[], int n) {
    srand(time(NULL)); // ta funkcja ustawia losowy punkt generowania danych, w tym przypadku wykorzystana została funkcja time z pliku nagłówkowego time.h, funkcja ta zwraca liczbę określającą czas

    for (int i = 0; i < n; i++)
    {
        t[i] = (rand() % 10) + 1;
    }
}

//Definicja funkcji pozwalającej wyświetlić wartości elementów tablicy na ekranie
void tablicaWyjscie(float t[], int n) {
    for (int i = 0; i < n; i++)
    {
        cout << "element[" << i << "] = " << t[i] << endl;
    }
}

int main()
{
    const int n = 5;//rozmiar tablicy
    float tablica[n];//1-wymiarowa tablica liczbowa o rozmiarze n

    cout << "Wprowadź wartości elementów  tablicy:" << endl;
    tablicaWejscie(tablica, n);

    cout << "Zawartość tablicy wejściowej:" << endl;
    tablicaWyjscie(tablica, n);

    //Posortowanie elementów tablicy tablica
    sortowanieBabelkowe(tablica, n);
    
    cout << "Zawartość tablicy posortowanej:" << endl;
    tablicaWyjscie(tablica, n);

    return 0;
}