#include <iostream>
using namespace std;

int main()
{
    int zmienna1 = 1;
    //wskaznik na stałą
    const int* wskaznik = &zmienna1;
    //*wskaznik = 10; //Operacja błędna
    cout << "Wartosc zmiennej1: " << *wskaznik << endl;

    int zmienna2 = 2;
    wskaznik = &zmienna2;
    cout << "Wartosc zmiennej2: " << *wskaznik << endl;

    //Stały wskaźnik
    int zmienna3 = 3;
    int zmienna4 = 4;

    int* const wskaznik2 = &zmienna3;

    cout << "Wartosc zmiennej3: " << *wskaznik2 << endl;
    *wskaznik2 = 6;
    cout << "Wartosc zmiennej3: " << *wskaznik2 << endl;

    //wskaznik2 = &zmienna4; //Operacja niedozwolona
    const int* const wskaznik3 = &zmienna4; //Stały wskaznik na stala
    cout << "Wartosc zmiennej4: " << *wskaznik3 << endl;
    //*wskaznik3 = 19; //Operacja niedozwolona - wskaznik na stala
    //wskaznik3 = &zmienna1; //Operacja niedozwolona - staly wskaznik

}
