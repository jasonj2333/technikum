#include <iostream>
#include <string>

using namespace std;

//Deklaracja typu strukturowego(C-Struktury) o nazwie Pracownik
struct Pracownik;

int main()
{
    //Definicja typu strukturowego Pracownik
    struct Pracownik{
        //deklaracje pól (zmiennych członkowskich)
        string imie;
        string nazwisko;
        int nr_ewind;
    };

    //Deklaracja i inicjalizacja struktury (zmiennej strukturowej) pracowniki1
    Pracownik pracownik1 = {"Jan", "Kowalski", 1234};
    //prezentacja danych zapisanych w strukturze na ekranie monitora
    cout << pracownik1.imie << endl;
    cout << pracownik1.nazwisko << endl;
    cout << pracownik1.nr_ewind << endl;

    //Deklaracja i inicjalizacja zerowa struktury pracowniki2
    Pracownik pracownik2 = {};
    cout << pracownik2.imie << endl;
    cout << pracownik2.nazwisko << endl;
    cout << pracownik2.nr_ewind << endl;

    //Deklaracja i inicjalizacja struktury pracowniki3
    Pracownik pracownik3 {"Adam", "Nowak", 9876}; //C++ 11
    cout << pracownik3.imie << endl;
    cout << pracownik3.nazwisko << endl;
    cout << pracownik3.nr_ewind << endl;

    //Deklaracja i inicjalizacja zerowa struktury pracowniki4
    Pracownik pracownik4 {};
    cout << pracownik4.imie << endl;
    cout << pracownik4.nazwisko << endl;
    cout << pracownik4.nr_ewind << endl;

    return 0;
}
