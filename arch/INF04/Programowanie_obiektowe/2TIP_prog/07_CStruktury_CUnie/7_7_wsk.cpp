#include <iostream>

using namespace std;

//Definicja typu strukturowego Pracownik
    struct Pracownik{
        //deklaracje pól (zmiennych członkowskich)
        char imie[20];
        char nazwisko[30];
        char stanowisko[30];
    };

int main()
{
    

    //Deklaracja zmiennej (struktury) pracownik należącej do typu struktury pracownik
    Pracownik pracownik = {"Jan", "Kowalski", "dyrektor"};

    //Deklaracja i inicjalizacja wskaźnika, który wskazuję na zmienną pracownik typu Pracownik
    Pracownik *wsk =  &pracownik;

    //Prezentacja danych zapisanych w strukturze pracownik za pomocą wskaźnika (-> z użyciem operatora strzałkowego)
    cout << "Dane pracownika" << endl;
    cout << "Imię: " << (*wsk).nazwisko << endl;
    cout << "Nazwisko: " << (*wsk).imie << endl;
    cout << "Stanowisko: " << (*wsk).stanowisko << endl;
    /* UWAGA:
    Odwołanie się do poszczególnych pól struktury pracownik jest realizowane za pomocą nazwy tego pola (np. imie) oraz operatora dereferencji i wskaźnika *wsk */
    return 0;
}
