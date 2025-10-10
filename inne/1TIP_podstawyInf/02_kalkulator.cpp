#include <iostream>

using namespace std;

int main()
{
    cout << "Kalkulator" << endl;
    cout << "1. Dodawanie" << endl;
    cout << "2. Odejmowanie" << endl;
    cout << "3. Mnozenie" << endl;
    cout << "4. Dzielenie" << endl;
    cout << "5. Modulo" << endl;
    int dzialanie=0;
    cout << "Wybierz dzialanie: ";
    cin >> dzialanie;
    int liczba1 = 0;
    int liczba2 = 0;
    cout << "Podaj liczbe 1: ";
    cin >> liczba1;
    cout << "Podaj liczbe 2: ";
    cin >> liczba2;

    if(dzialanie == 1){
        cout << "Wynik dodawania: " << liczba1 + liczba2 << endl;
    }
    if(dzialanie == 2){
        cout << "Wynik odejmowania: " << liczba1 - liczba2 << endl;
    }
    return 0;
}
