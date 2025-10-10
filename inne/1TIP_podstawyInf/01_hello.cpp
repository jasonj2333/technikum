#include <iostream>

using namespace std;

int main()
{
    string imie;
    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Witaj " << imie << endl;

    cout << "2 + 3 = " << 2 + 3 << endl;
    cout << (2 + 3) * 2 << endl;
    cout << 5.0 / 3 << endl;
    cout << 5 / 3 << endl;
    cout << 5 % 3 << endl; //modulo - reszta z dzielenia
    return 0;
}
