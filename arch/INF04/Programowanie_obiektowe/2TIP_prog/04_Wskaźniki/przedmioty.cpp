#include <iostream>
using namespace std;

int main()
{
    int jPolski, matematyka, jAngielski, chemia;
    int *przedmiot = nullptr;

    przedmiot = &jPolski;

    cout << "Podaj ocene z jezyka polskiego: ";
    cin >> *przedmiot;

    przedmiot = &matematyka;
    *przedmiot = 3;

    przedmiot = &jAngielski;
    *przedmiot = 2;

    przedmiot = &chemia;
    *przedmiot = 6;

    przedmiot = nullptr;

    double srednia = (jPolski + matematyka + jAngielski + chemia) / 4;
    cout << "Srednia wynosi: " << srednia << endl;


}


