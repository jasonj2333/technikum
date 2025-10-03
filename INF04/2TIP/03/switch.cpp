#include <iostream>
using namespace std;

int main()
{
    int dzien = 6;

    switch (dzien) {
    case 1:
        cout << "Znowu poczatek tygodnia :(" << endl;
        break;
    case 2:
        cout << "Wtorek, jeszcze tylko 3 dni i weekend" << endl;
        break;
    case 3:
        cout << "Już środek tygodnia" << endl;
        break;
    case 4:
        cout << "Czwartek" << endl;
        break;
    case 5:
        cout << "Piatek" << endl;
        break;
    case 6:
    case 7:
        cout << "Weekend" << endl;
        break;
    default:
        cout << "Nie znam takiego dnia tygodnia" << endl;
        break;
    }

    //operator warunkowy
    string komentarz = (dzien >= 1 && dzien <= 5) ? "Pracujemy" : "Wolne";
    cout << komentarz << endl;
}

