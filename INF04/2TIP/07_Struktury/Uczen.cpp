#include <iostream>
#include <string>

using namespace std;

struct Uczen;

int main()
{
    struct Data {
        //deklaracje pól (zmiennych członkowskich)
        unsigned int dd, mm, rr;

    };
    
    struct Uczen {
        //deklaracje pól (zmiennych członkowskich)
        string imie;
        string nazwisko;
        unsigned int nr_w_dzienniku;
        Data data_urodzenia;
        unsigned short oceny[3];
    };

    Uczen uczen1 = { "Jan", "Kowalski", 4, {30, 10, 2000}, {3, 4, 5} };

    //prezentacja danych zapisanych w strukturze na ekranie monitora
    cout << uczen1.imie << endl;
    cout << uczen1.nazwisko << endl;
    cout << uczen1.nr_w_dzienniku << endl;
    //Wyświetlanie danych zapisanych w strukturze wewnętrzejne data_urodzenia należącej do typu Data
    cout << uczen1.data_urodzenia.dd << endl;
    cout << uczen1.data_urodzenia.mm << endl;
    cout << uczen1.data_urodzenia.rr << endl;

    //Wyświetlanie danych zapisanych tablicy oceny
    cout << uczen1.oceny[0] << endl;
    cout << uczen1.oceny[1] << endl;
    cout << uczen1.oceny[2] << endl;
}

