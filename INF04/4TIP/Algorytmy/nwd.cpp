#include <iostream>
#include <algorithm>
#include <numeric>
#include <cstdlib>
using namespace std;

//Wersja z odejmowaniem - klasyczna
int obliczNWD(int l1, int l2) {
    while (l1 != l2) {
        if (l1 > l2) {
            l1 = l1 - l2;
        }
        else if (l2 > l1) {
            l2 = l2 - l1;
        }
    }

    return l1;
}
//wersja z modulo
int obliczNWD2(int l1, int l2) {
    int reszta;
    while ((l1 % l2) > 0) {
        reszta = l1 % l2;
        l1 = l2;
        l2 = reszta;
    }
    return l2;
}
//Metoda rekurencyjna
int obliczNWD3(int l1, int l2) {
    l1 = abs(l1); l2 = abs(l2);

    if (l2 == 0) return l1;

    return obliczNWD3(l2, l1 % l2);
}

class NWD {
public:
    static int rekurencja(int l1, int l2) {
        l1 = abs(l1); l2 = abs(l2);

        if (l2 == 0) return l1;

        return rekurencja(l2, l1 % l2);
    }
};

int main()
{
    cout << "NWD odejmowanie: " << obliczNWD(35, 75) << endl;
    cout << "NWD reszta z dzielenia: " << obliczNWD2(35, 75) << endl;
    //Działa od wersji C++ 17
    cout << "NWD gotowa funkcja: " << gcd(35, 75) << endl;
    cout << "NWD rekurencja: " << obliczNWD3(35, 75) << endl;
    cout << "NWD obiektowo: " << NWD::rekurencja(35, 75) << endl;
}

