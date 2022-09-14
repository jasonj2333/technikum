#include<iostream>
#include<cstdlib>
using namespace std;

static class NWD {
    static int liczba1, liczba2;
public:
    static int obliczNWD(int l1, int l2) {
        liczba1 = abs(l1); liczba1 = abs(l2);
        if (liczba1 == 0) return liczba1;

        return obliczNWD(liczba1, liczba1 % liczba1);
    }
};

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
    nwd = NWD::obliczNWD(liczba1, liczba2);
    //Wyświetlenie wyniku wyznaczonej wartości NWD
    cout << "Wynik" << endl;
    cout << "NWD = " << nwd <<endl;

    return 0;
}