#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int liczba = -1;
    cout << "Liczba: " << liczba << endl;
    int wb;

    /*if (liczba >= 0) wb = liczba;
    if (liczba < 0) wb = -liczba;*/
    if (liczba >= 0) wb = liczba;
    else wb = -liczba;

    cout << "Wartosc bezwgledna: " << wb << endl;

    int ocena = 2;

    if (ocena >= 2) {
        cout << "Otrzymujesz promocje do klasy 3" << endl;
        if (ocena >= 3) {
            cout << "Uczen rozwiazuje zadania samodzielnie" << endl;
            if (ocena >= 4) {
                cout << "Uczen dobrze opanowal material nauczania" << endl;
                if (ocena >= 5) {
                    cout << "Jestes prymusem!!!" << endl;
                }
            }
        }
    }

    double a = 1, b = 5, c = 4;
    double delta = b * b - 4 * a * c;
    cout << "Delta wynosi: " << delta << endl;

    if (delta > 0) {
        double x1 = (-b - sqrt(delta)) / 2 * a;
        double x2 = (-b + sqrt(delta)) / 2 * a;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (delta == 0) {
        double x = -b / (2 * a);
        cout << "x = " << x << endl;
    }
    else {
        cout << "Rownanie nie ma pierwiastkow rzeczywistych" << endl;
    }

}
