#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std;


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
    nwd = gcd(liczba1, liczba2); //C++ 17
    //Wyświetlenie wyniku wyznaczonej wartości NWD
    cout << "Wynik" << endl;
    cout << "NWD = " << nwd <<endl;

    return 0;
}