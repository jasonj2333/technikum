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

    //Deklaracja wskaźnika na dane typu double
    double* wsk;

    //Przypisane wskaźnikowi adresu pierwszego elementu tablicy
    wsk = tablica;
    /*UWAGA:
    W nazwie zmiennej tablicowej pamiętany jest adres pierwszego elementu, czyli elementu o indeksie 0.*/

    cout << "Podaj wartość "<< n << " elementów tablicy: " << endl;
    //Pobranie poszczególnych elementów składowych z klawiatury
    for (int i = 0; i < n; i++)
    {
        cout << "tablica[" << i << "] = ";
        cin >> *(wsk + i); //równoważne instrukcji: cin >> tablica[i];
    }

    //Deklaracja i inicjalizacja zmiennej suma reprezentującej sumę wartości elementów tablicy
    double suma = 0;

    //Obliczanie sumy elementów zapisanych w tablicy
    for (int i = 0; i < n; i++)
    {
        suma += wsk[i]; //równoważne instrukcji: suma += tablica[i];
    }
    cout << "Suma elementów tablicy wynosi: " << suma << endl;

    return 0;
}