#include <iostream>
#include <cstring>

using namespace std;

//Deklaracja typu strukturowego(C-Struktury) o nazwie Pracownik
struct Pracownik;

int main()
{
    //Definicja typu strukturowego Pracownik
    struct Pracownik{
        //deklaracje pól (zmiennych członkowskich)
        char imie[20];
        char nazwisko[30];
        char stanowisko[30];
    };

    //Deklaracja zmiennej (struktury) pracownik należącej do typu struktury Pracownik
    Pracownik pracownik;

    strcpy(pracownik.imie, "Adam");
    strcpy(pracownik.nazwisko, "Nowak");
    strcpy(pracownik.stanowisko, "Administrator sieci");

    cout << pracownik.imie << endl;
    cout << pracownik.nazwisko << endl;
    cout << pracownik.stanowisko << endl;

    return 0;
}
