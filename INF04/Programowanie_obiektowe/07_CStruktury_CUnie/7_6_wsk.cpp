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

    //Deklaracja wskaźnika, który może wskazywać na zmienną typu Pracownik
    Pracownik *wsk;

    //Przypisanie wskaźnikowi wsk adresu zmiennej pracownik
    wsk = &pracownik;

    //Prezentacja danych zapisanych w strukturze pracownik za pomocą wskaźnika (-> z użyciem operatora strzałkowego)
    cout << "Dane pracownika" << endl;
    cout << "Imię: " << wsk->imie << endl;
    cout << "Nazwisko: " << wsk->nazwisko << endl;
    cout << "Stanowisko: " << wsk->stanowisko << endl;
    return 0;
}
