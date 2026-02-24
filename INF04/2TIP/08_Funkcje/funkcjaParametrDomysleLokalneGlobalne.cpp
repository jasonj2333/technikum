#include <iostream>

using namespace std;

const double waga_oceny = 0.5;

void wyswietl_pi(float pi = 3.14159) {
    cout << "Stala pi: " << pi << endl;
}

int ocenaKoncowa(float ocena) {
    return round(waga_oceny * ocena);
}

double poleProstokata(double a, double b) {
    double pole = a * b;
    return pole;
}

int main()
{
    wyswietl_pi();
    wyswietl_pi(3.14);
    //Zasięg lokalny
    {
        int bok3 = 3;
    }
    cout << "Ocena koncowa z j.polski: " << ocenaKoncowa(3.5) << endl;
    double bok1 = 5;
    double bok2 = 4;
    //cout << bok3 << endl;
    cout << "Pole prostokata wynosi: " << poleProstokata(bok1, bok2) << endl;
}

