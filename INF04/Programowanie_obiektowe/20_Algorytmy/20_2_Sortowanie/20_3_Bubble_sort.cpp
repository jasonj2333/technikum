#include<iostream>
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

//Definicja funkcji pozwalającej wprowadzić wartości elementów tablicy z klawiatury
void tablicaWejscie(float t[], int n) {
    for (int i = 0; i < n; i++)
    {
        cout << "element[" << i << "] = ";
        cin >> t[i];
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