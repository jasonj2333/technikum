#include<iostream>
using namespace std;

//Definicja funkcji globalnej obliczNWD(), pozwalającej wyznaczyć NWD - metoda z dzieleniem
int obliczNWD(int l1, int l2) {
    int reszta;
    while ((l1 % l2) > 0) {
        reszta = l1 % l2;
        l1 = l2;
        l2 = reszta;
    }

    return l2;
}

int main()
{
    int liczba1, liczba2; //Liczby dla których wyznaczany jest NWD
    int nwd; //NWD
    //Pobranie wartości dwóch liczb całkowitych z klawiatury
    cout << "Dane wejściowe" << endl;
    cout << "Podaj wartość pierwszej liczby: ";
    cin >> liczba1;
    cout << "Podaj wartość drugiej liczby: ";
    cin >> liczba2;
    //Wyznaczenie NWD
    nwd = obliczNWD(liczba1, liczba2);
    //Wyświetlenie wyniku wyznaczonej wartości NWD
    cout << "Wynik" << endl;
    cout << "NWD = " << nwd <<endl;

    return 0;
}