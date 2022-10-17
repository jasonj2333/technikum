#include <iostream>
#include <string>

using namespace std;

//Deklaracja typu strukturowego(C-Struktury) o nazwie Uczen
struct Uczen;

int main()
{
    //Definicja typu strukturowego Uczen
    struct Uczen{
        //deklaracje pól (zmiennych członkowskich)
        string imie;
        string nazwisko;
        int nr_w_dzienniku;
    };

    //Deklaracja i inicjalizacja struktury (zmiennej strukturowej) uczen1
    Uczen uczen1 = {"Jan", "Kowalski", 4};
    //prezentacja danych zapisanych w strukturze na ekranie monitora
    cout << uczen1.imie << endl;
    cout << uczen1.nazwisko << endl;
    cout << uczen1.nr_w_dzienniku << endl;


    //Deklaracja i inicjalizacja struktury uczen2
    Uczen uczen2 {"Adam", "Nowak", 24}; //C++ 11
    cout << uczen2.imie << endl;
    cout << uczen2.nazwisko << endl;
    cout << uczen2.nr_w_dzienniku << endl;

    return 0;
}
