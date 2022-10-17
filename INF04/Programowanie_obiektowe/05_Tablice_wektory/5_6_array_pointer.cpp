#include<iostream>
using namespace std;

int main()
{
    const int n = 5;//rozmiar tablicy

    //Deklaracja zmiennej tablicowej o nazwie tablica zawierającej elementy typu double o rozmiarze n
    double tablica[n];
    /*UWAGA:
    Zmienna tablica jest przechowywana na stosie, alokacja pamięci odbywa się automatycznie, ponieważ kompilator
    w już czasie kompilacji określa, jaką pamięć należy zarezerwować dla każdej zmiennej zadeklarowanej w programie.*/

    //Deklaracja wskaźnika wsk połączona z jego inicjalizacją
    double* wsk = tablica;


    cout << "Podaj wartość "<< n << " elementów tablicy: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "tablica[" << i << "] = ";
        cin >> *wsk; //równoważne instrukcji: cin >> tablica[i];

        //Inkrementacja wskaźnika wsk
        wsk++;
        /*UWAGA:
        Inkrementacja wskaźnika wsk powoduje jego przesunieńcie przed następny element tablicy*/
    }

    //Przesunieńcie wskaźnika przed pierwszy element tablicy
    wsk = tablica; //równoważne instrukcji: wsk = &tablica[0];

    //Deklaracja i inicjalizacja zmiennej suma reprezentującej sumę wartości elementów tablicy
    double suma = 0;

    //Obliczanie sumy elementów zapisanych w tablicy
    for (int i = 0; i < n; i++)
    {
        suma += *wsk++; //równoważne instrukcji: suma += tablica[i];
    }
    cout << "Suma elementów tablicy wynosi: " << suma << endl;

    return 0;
}